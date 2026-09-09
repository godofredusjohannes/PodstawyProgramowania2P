#ifndef UNTITLED2_PLATNOSCKARTA_H
#define UNTITLED2_PLATNOSCKARTA_H
#include "IPlatnosc.h"
#include <string>

using namespace std;

class PlatnoscKarta: public IPlatnosc {
    private:
    string imie, nazwisko;
    int nr_karty;
    public:
    double kwota;
    bool czyzaplacono = false;
    void zaplac(double kwota) override;
    void wyswietlinformacje() override;
    ~PlatnoscKarta();
    PlatnoscKarta(string imie, string nazwisko, int nr_karty);
};

#endif //UNTITLED2_PLATNOSCKARTA_H