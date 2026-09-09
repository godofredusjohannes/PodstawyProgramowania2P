#include <iostream>
#include "PlatnoscKarta.h"

using namespace std;

PlatnoscKarta::PlatnoscKarta(string imie, string nazwisko, int nr_karty) {
    this -> imie = imie;
    this -> nazwisko = nazwisko;
    this -> nr_karty = nr_karty;
}

void PlatnoscKarta::zaplac(double kwota) {
    this -> kwota = kwota;
    this -> czyzaplacono = true;
    cout << "Zaplacono " << kwota << endl;
}

void PlatnoscKarta::wyswietlinformacje() {
    string nr = to_string(nr_karty);
    int n = nr.length();

    cout << "Platnosc karta" << endl;
    cout << "Wlasciciel karty: " << imie << " " << nazwisko << endl;
    cout << "Numer karty: ";

    if (n == 16) {
        for (int i = 0; i < n; i++) {
            if (i % 4 == 0 && i != 0) cout << " ";

            if (i < 12)
                cout << "*";
            else
                cout << nr[i];
        }
        cout << endl;
    } else {
        cout << "Nieprawidlowa karta" << endl;
    }
if (czyzaplacono != false) {
    cout << "Zaplacono karta: " << kwota << endl << endl;
}
    else {
        cout << "Nie zaplacono." << endl;
    }
}