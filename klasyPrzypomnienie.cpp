#include <iostream>
#include <vector>

using namespace std;

class Osoba {
    protected:
    string pesel;
    public:
    string imie, nazwisko;
    Osoba(string pesel, string imie, string nazwisko) : pesel(pesel), imie(imie), nazwisko(nazwisko) {}
};

struct Adres {
    string ulica, nr_bud, miejscowosc, kod_poczt;
    Adres(string ulica, string nr_bud, string miejscowosc, string kod_poczt):
    ulica(ulica),nr_bud(nr_bud),miejscowosc(miejscowosc),kod_poczt(kod_poczt){}
};

struct Szkola {
    string typ;
    Adres adres;
    Szkola(string typ, Adres adres): typ(typ), adres(adres) {}
};

class Uczen: public Osoba {

};

struct Oddzial {
    int poziom;
    string nazwa;
    Szkola szkola;
    vector <Uczen> uczniowie;
    Oddzial(int poziom, string nazwa, Szkola szkola): poziom(poziom), nazwa(nazwa), szkola(szkola) {}
    void dodajUcznia(Uczen uczen) {
        uczniowie.push_back(uczen);
    }
};

int main() {
    Oddzial klasa4p(4,"Mechanik",{"Technikum",{"pl. Janka","7","Glogow","67-200"}});

    klasa4p.dodajUcznia({{"123456787", "Piotr", "Kowalski"}});

    return 0;
}
