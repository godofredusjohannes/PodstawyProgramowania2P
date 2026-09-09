#include <iostream>
#include "PlatnoscBlik.h"

using namespace std;

PlatnoscBlik::PlatnoscBlik(int nr_tel) {
    this -> nr_tel = nr_tel;
}


void PlatnoscBlik::zaplac(double kwota) {
    this -> kwota = kwota;
    this -> czyzaplacono = true;
    cout << "Zaplacono " << kwota << endl;
}

void PlatnoscBlik::wyswietlinformacje() {

    cout << "Platnosc BLIK" << endl;
    cout << "Numer telefonu: " << nr_tel << endl;
    if (czyzaplacono != 0) {
        cout << "Zaplacono karta: " << kwota << endl << endl;
    }
    else {
        cout << "Nie zaplacono." << endl;
    }
}