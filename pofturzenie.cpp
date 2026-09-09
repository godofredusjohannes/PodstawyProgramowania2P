#include <iostream>

using namespace std;

struct Adres {
    string miejscowosc, ulica, nr_bud, nr_lok, kod_pocztowy, poczta;
    Adres(string, string, string, string, string, string);
};

Adres::Adres(string miejscowosc,
    string ulica,
    string nr_bud,
    string nr_lok,
    string kod_pocztowy,
    string poczta): miejscowosc(miejscowosc),
                    ulica(ulica),
                    nr_bud(nr_bud),
                    nr_lok(nr_lok),
                    kod_pocztowy(kod_pocztowy),
                    poczta(poczta){}

struct DataUrodzenia {
    int dd,mm,yy;
    DataUrodzenia(int, int, int);
};

DataUrodzenia::DataUrodzenia(int dzien, int miesiac, int rok) : dd(dd), mm(miesiac), yy(rok) {}

class Osoba {
    protected:
        string pesel;
        Adres adres;
    public:
        string imie, nazwisko;
        DataUrodzenia dat_urodzenia;
};

class Pracownik: public Osoba {
    public:
        string stanowisko;
};

int main() {


    return 0;
}