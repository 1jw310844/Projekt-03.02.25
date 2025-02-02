#ifndef GENERATOR_H
#define GENERATOR_H

enum class RodzajSygnalu { Skok, Sinusoida, Prostokatny };

class Generator {
    RodzajSygnalu rodzaj;
    double A, T, p, czasAktywacji;

public:
    Generator(RodzajSygnalu r = RodzajSygnalu::Skok, double a = 0.0, double t = 1.0, double pp = 0.5, double czasAkt = 0.0);
    double generuj(double czas);

    RodzajSygnalu getRodzaj() const { return rodzaj; }
    double getAmplituda() const { return A; }
    double getOkres() const { return T; }
    double getWypelnienie() const { return p; }

    void setRodzaj(RodzajSygnalu r) { rodzaj = r; }
    void setAmplituda(double a) { A = a; }
    void setOkres(double o) { T = (o > 0) ? o : 1.0; } // Zapobiega dzieleniu przez zero
    void setWypelnienie(double w) { p = (w >= 0 && w <= 1) ? w : 0.5; } // Poprawna wartość
    void setCzasAktywacji(double ca) { czasAktywacji = ca; }
};

#endif // GENERATOR_H

