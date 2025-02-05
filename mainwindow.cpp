#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "oknogenerator.h"
#include "oknoregulator.h"
#include "oknoobiektarx.h"
#include <QDebug>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>

std::random_device srng;
std::mt19937 rng;

void MainWindow::UstawienieLayout(){
    for(int i=0;i<4;i++){
        layout[i] = new QVBoxLayout();
        layout[i]->setContentsMargins(0, 0, 0, 0);
    }
    ui->wykresWarZad->setLayout(layout[0]);
    ui->WykUchyb->setLayout(layout[1]);
    ui->WykPID->setLayout(layout[2]);
    ui->WykSter->setLayout(layout[3]);
}

MainWindow::MainWindow(QWidget *parent, WarstwaUslug *prog)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , simulationTimer(new QTimer(this))
    , usluga(prog)
    , czas(0.0)
{
    usluga->setGUI(this);
    ui->setupUi(this);
    wykres = new Wykresy(this,usluga->getSymulator());
    okno_gen = new OknoGenerator();
    okno_gen->setWarstwaUslug(usluga);
    okno_reg = new OknoRegulator();
    okno_reg->setWarstwaUslug(usluga);
    okno_obiekt = new OknoObiektARX();
    okno_obiekt->setWarstwaUslug(usluga);
    this->showMaximized();
    simulationTimer = new QTimer(this);
    UstawienieGUI();
    UstawienieLayout();
    wykres->InicjalizujWykresy(layout);
    connect(usluga, &WarstwaUslug::PoprawneDane, this, &MainWindow::PokazWykres);
    connect(usluga, &WarstwaUslug::BledneDane, this, &MainWindow::Blad);
    connect(usluga, &WarstwaUslug::sygnalZapisano, this, &MainWindow::obslugaZapisu);
    Wczytaj = new QPushButton("Wczytaj konfigurację", this);
    connect(Wczytaj, &QPushButton::clicked, this, &MainWindow::on_Wczytaj_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Start_clicked()
{
    usluga->SprawdzenieWszystkichDanych(interwalCzasowy);
    /*
    qDebug()<<"Interwal: " << ui->Interwal;
    qDebug()<<"Wyjscie obiektu: " << usluga->getSymulator()->getWyjscieObiektu();
    qDebug()<<"WZ: " << usluga->getSymulator()->getWartoscZadana();
    qDebug()<<"Amplituda: " << usluga->getSymulator()->getGenerator().getAmplituda();
    qDebug()<<"Okres " << usluga->getSymulator()->getGenerator().getOkres();
    qDebug()<<"Wypelnienie: " << usluga->getSymulator()->getGenerator().getWypelnienie();
    qDebug()<<"A: " << usluga->getSymulator()->getObiektARX().getWielomianA();
    qDebug()<<"B: " << usluga->getSymulator()->getObiektARX().getWielomianB();
    qDebug()<<"Nastawa D: " << usluga->getSymulator()->getRegulator().getNastawaD();
    qDebug()<<"Nastawa I: " << usluga->getSymulator()->getRegulator().getNastawaI();
    qDebug()<<"Nastawa P: " << usluga->getSymulator()->getRegulator().getNastawaP();
    qDebug()<<"Uchyb: " << usluga->getSymulator()->getRegulator().getUchyb();
    qDebug()<<"Sterujaca: " << usluga->getSymulator()->getRegulator().getWartoscSterujaca();
    qDebug()<<"Stala D: " << usluga->getSymulator()->getRegulator().getStalaD();
    qDebug()<<"Stala I: " << usluga->getSymulator()->getRegulator().getStalaI();
    qDebug()<<"Wzmocnienie: " << usluga->getSymulator()->getRegulator().getWzmocnienie();
*/
}

void MainWindow::Sprawdzenie(symulator* s)
{
    s->symulujKrok(0.0);
    /*symulator* sym = usluga->getSymulator();

    Regulator reg = sym->getRegulator();
    Generator gen = sym->getGenerator();
    ObiektARX arx = sym->getObiektARX();
    reg.setWzmocnienie(0.1);
    reg.setStalaI(5.0);
    reg.setStalaD(0.1);
    gen.setRodzaj(RodzajSygnalu::Skok);
    gen.setAmplituda(66.0);
    gen.setOkres(0.0);
    gen.setWypelnienie(0.0);
    gen.setCzasAktywacji(0.0);
    arx.setWielomianA({0.2, 0.4, 0.2});
    arx.setWielomianB({0.2, 0.4, 0.2});
    sym->setGenerator(gen);
    sym->setObiektARX(arx);
    sym->setRegulator(reg);
*/
    qDebug() << "Prawidziwa WZ: " << s->getGenerator().generuj(0.0);
    qDebug() << "Wartosc zadana " << s->getWartoscZadana();
    qDebug() << "Wyjscie Obiektu " << s->getWyjscieObiektu();
    qDebug() << "Amplituda " << s->getGenerator().getAmplituda();
    qDebug() << "Wartosc zadana z regulatora " << s->getRegulator().getWartoscZadana();
    qDebug() << "nastawa p " << s->getRegulator().getNastawaP();
    qDebug() << "nastawa i " << s->getRegulator().getNastawaI();
    qDebug() << "nastawa D " << s->getRegulator().getNastawaD();
    qDebug() << "uchyb " << s->getRegulator().getUchyb();
    qDebug() << "last object output " << s->getLastObjectOutput();
    qDebug()<< "last regulator value: " << s->getLastRegulatorValue();
    qDebug() << "A: "<< s->getObiektARX().getWielomianA();
    qDebug() << "B: "<< s->getObiektARX().getWielomianB();
/*
    qDebug() << "Amplituda: "<< s->getGenerator().getAmplituda();
    qDebug() << "Okres: "<< s->getGenerator().getOkres();
    qDebug() << "Wypelnienie: "<< s->getGenerator().getWypelnienie();
    qDebug() << "Stala D: "<< s->getRegulator().getStalaD();
    qDebug() << "Stala I: "<< s->getRegulator().getStalaI();
    qDebug() << "Wzmocnienie: "<< s->getRegulator().getWzmocnienie();
    qDebug() << "A: "<< s->getObiektARX().getWielomianA();
    qDebug() << "B: "<< s->getObiektARX().getWielomianB();
    qDebug() << "Opoznienie: "<< s->getObiektARX().getOpoznienie();
*/
}
void MainWindow::on_Stop_clicked()
{
    simulationTimer->stop();
}

void MainWindow::on_Interwal_textChanged(const QString &arg1)
{
    interwalCzasowy=arg1.toInt();
}

void MainWindow::PokazWykres(symulator* s) {
    qDebug() << "Amplitudaaaa: " << s->getGenerator().getAmplituda();
    if (!s) {
        return;
    }
    //s->getGenerator().getAmplituda();
    //s->getWartoscZadana();
    //s->getWyjscieObiektu();
    //s->getSterowanie();
    //wykres->setSymulator(s);

    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciZadanej();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresUchybu();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresPID();
    });
    connect(simulationTimer, &QTimer::timeout, this, [=]() {
        wykres->WykresWartosciSterowania();
    });

    /*connect(simulationTimer, &QTimer::timeout, this, [=]() {
        MainWindow::Sprawdzenie(s);
    });
    */
    if (interwalCzasowy > 0) {
        simulationTimer->start(interwalCzasowy);
    }
}


void MainWindow::Blad(){
    QMessageBox::warning(this, "Ostrzeżenie", "Nie uzupełniłeś Wszystkich Danych");
}

void MainWindow::on_UstawieniaGeneratora_clicked()
{
    okno_gen->exec();
    //delete this->okno_gen;
    //this->okno_gen=nullptr;
}

void MainWindow::on_UstawieniaObiektuARX_clicked()
{
    okno_obiekt->exec();
    //delete this->okno_obiekt;
    //this->okno_obiekt=nullptr;
}

void MainWindow::on_UstawieniaRegulatora_clicked()
{
    okno_reg->exec();
    //delete this->okno_reg;
    //this->okno_reg=nullptr;
}


void MainWindow::on_Reset_clicked()
{
    disconnect(simulationTimer, nullptr, nullptr, nullptr);
    simulationTimer->stop();

    wykres->ResetujWykresy();
    wykres->ResetCzas();

    symulator* sym = usluga->getSymulator();
    if (sym) {
        sym->getRegulator().ZerowanieNastawaP();
        sym->getRegulator().ZerowanieNastawaI();
        sym->getRegulator().ZerowanieNastawaD();
        sym->setWyjscieObiektu(0);
        sym->setLastRegulatorValue(0);
        sym->setLastObjectOutput(0);

        Generator gen = sym->getGenerator();
        gen.setAmplituda(0);
        gen.setOkres(0);
        gen.setWypelnienie(0);
        sym->setGenerator(gen);

        Regulator reg;
        sym->setRegulator(reg);

        ObiektARX obiekt;
        sym->setObiektARX(obiekt);
    }
    czas = 0;
    interwalCzasowy = 0;
    isSimulationRunning = false;
    wykres->InicjalizujWykresy(layout);
}


void MainWindow::UstawienieGUI(){
    QString buttonStyleStart =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: green;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleStop =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: red;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReset =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: orange;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";
    QString buttonStyleReszta =
        "QPushButton {"
        "    background-color: white;"
        "    color: black;"
        "    border-radius: 10px;"
        "    border: 2px solid black;"
        "    padding: 5px;"
        "    transition: 0.5s ease-in-out;"
        "}"
        "QPushButton:hover {"
        "    background-color: grey;"
        "    color: white;"
        "    padding: 8px;"
        "    border: 3px solid #fff;"
        "}";

    this->setStyleSheet(
        "QWidget { color: white; }"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    this->setStyleSheet(
        "QMessageBox { color: black; "
        "background-color: grey;"
        "}"
        "QMainWindow { background-color: rgb(90,90,90); }"
        );
    ui->Interwal->setStyleSheet(
        "QLineEdit {"
        "    background-color: white;"
        "    color: black;"
        "}"
        );
    ui->Start->setStyleSheet(buttonStyleStart);
    ui->Stop->setStyleSheet(buttonStyleStop);
    ui->Reset->setStyleSheet(buttonStyleReset);
    ui->Wczytaj->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaGeneratora->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaRegulatora->setStyleSheet(buttonStyleReszta);
    ui->UstawieniaObiektuARX->setStyleSheet(buttonStyleReszta);
    ui->Zapisz->setStyleSheet(buttonStyleReszta);

    ui->TytulWykres1->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres2->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres3->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulWykres4->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    ui->TytulGlowny->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );
    ui->InterwalCzasowyLabel->setStyleSheet(
        "QLabel {"
        "    background-color: rgb(130, 130, 130);"
        "    color: white;"
        "    border: 1px solid black;"
        "    padding: 5px;"
        "}"
        );

    QGraphicsDropShadowEffect *effect[8]; //

    for (int i = 0; i < 8; ++i) {
        effect[i] = new QGraphicsDropShadowEffect();
        effect[i]->setOffset(0, 0);
        effect[i]->setBlurRadius(10);
        effect[i]->setColor(Qt::black);
    }
    ui->Start->setGraphicsEffect(effect[0]);
    ui->Stop->setGraphicsEffect(effect[1]);
    ui->Reset->setGraphicsEffect(effect[2]);
    ui->UstawieniaGeneratora->setGraphicsEffect(effect[3]);
    ui->UstawieniaObiektuARX->setGraphicsEffect(effect[4]);
    ui->UstawieniaRegulatora->setGraphicsEffect(effect[5]);
    ui->Zapisz->setGraphicsEffect(effect[6]);
    ui->Wczytaj->setGraphicsEffect(effect[7]);
}

void MainWindow::obslugaZapisu()
{
    QMessageBox::information(this, "Zapis konfiguracji", "Konfiguracja została zapisana.");
}

void MainWindow::on_Zapisz_clicked()
{
    usluga->zapiszKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została zapisana.");
}

void MainWindow::on_Wczytaj_clicked()
{
    usluga->wczytajKonfiguracje();
    QMessageBox::information(this, "Sukces", "Konfiguracja została wczytana.");
}

