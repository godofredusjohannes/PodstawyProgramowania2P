#ifndef UNTITLED2_PLATNOSCBLIK_H
#define UNTITLED2_PLATNOSCBLIK_H
#include "IPlatnosc.h"

using namespace std;

class PlatnoscBlik: public IPlatnosc {
private:
    int nr_tel;
public:
    double kwota;
    bool czyzaplacono = false;
    void zaplac(double kwota) override;
    void wyswietlinformacje() override;
    ~PlatnoscBlik();
    PlatnoscBlik(int nr_tel);
};

#endif //UNTITLED2_PLATNOSCBLIK_H