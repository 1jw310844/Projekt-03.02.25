#include "generator.h"
#include <cmath>

Generator::Generator(RodzajSygnalu r, double a, double t, double pp, double czasAkt)
    : rodzaj(r), A(a), T((t > 0) ? t : 1.0), p((pp >= 0 && pp <= 1) ? pp : 0.5), czasAktywacji(czasAkt) {}

double Generator::generuj(double czas) {
    switch (rodzaj) {
    case RodzajSygnalu::Skok:
        return (czas >= czasAktywacji) ? A : 0;
    case RodzajSygnalu::Sinusoida:
        return A * std::sin((2 * 3.14159265359 / T) * std::fmod(czas, T));
    case RodzajSygnalu::Prostokatny:
        return (std::fmod(czas, T) < p * T) ? A : 0;
    default:
        return 0.0;
    }
}
