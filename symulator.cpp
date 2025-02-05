#include "symulator.h"
#include <QMessageBox>

symulator::symulator()
    : generator(), regulator(), obiekt() {}
symulator::symulator(Generator g, Regulator r, ObiektARX o)
    : generator(g), regulator(r), obiekt(o) {}

double symulator::symulujKrok(double czas) {
    double wartoscZadana = generator.generuj(czas);
    qDebug() << "WZ: " << wartoscZadana;
    // 2️⃣ Przekazanie wartości zadanej do regulatora
    regulator.setWartoscZadana(wartoscZadana);

    // 3️⃣ Obliczenie uchybu na podstawie wyjścia obiektu
    regulator.aktualizujUchyb(wyjscieObiektu);

    // 4️⃣ Regulator oblicza nowy sygnał sterujący
    double sygnalSterowania = regulator.obliczSterowanie();

    // 5️⃣ Przekazanie sygnału sterującego do obiektu
    wyjscieObiektu = obiekt.obliczWyjscie(sygnalSterowania);

    // 6️⃣ Aktualizacja wartości regulatora (wartości sterującej i poprzedniego wyjścia)
    setLastRegulatorValue(sygnalSterowania);
    setLastObjectOutput(wyjscieObiektu);

    // 7️⃣ Ustawienie zakłócenia w obiekcie (można dostosować)





    // 8️⃣ Zwrócenie aktualnego wyjścia obiektu (dla wykresów / dalszej analizy)
    return wyjscieObiektu;
}


double symulator::getWartoscZadana() { return regulator.getWartoscZadana(); }
double symulator::getZaklocenie() { return obiekt.getZaklocenie(); }
double symulator::getSterowanie() { return regulator.getWartoscSterujaca(); }
double symulator::getWyjscieObiektu() { return wyjscieObiektu; }
void symulator::setGenerator(Generator &g) { generator = g; }
void symulator::setRegulator(Regulator &r) { regulator = r; }
void symulator::setObiektARX(ObiektARX &o) { obiekt = o; }
Generator symulator::getGenerator(){
    return generator;
};
Regulator symulator::getRegulator(){
    return regulator;
};
ObiektARX symulator::getObiektARX(){
    return obiekt;
};
