#include <iostream>

using namespace std;

struct Data {
    int dd, mm, rr;
};

struct Adres {
    string ulica, miejscowosc, kod_poczt;
};

class Osoba {
    public:
    string imie, nazwisko;
    Adres adres;
    Data data_ur;
    Osoba(string, string, Adres, Data);
    void setImie(string);
    void setNazwisko(string);
    void setAdres(Adres);
    void setDataUrodzin(Data);

    string getImie();
    string getNazwisko();
    Adres getAdres();
    Data getDataUrodzin();

    void wyswietl_wszystko();

};

Osoba::Osoba(string imie, string nazwisko, Adres adres, Data data) : imie(imie), nazwisko(nazwisko), adres(adres), data_ur(data) {
}

void Osoba::setImie(string noweImie) {

    this -> imie = noweImie;

}

void Osoba::setNazwisko(string noweNazwisko) {

    this -> nazwisko = noweNazwisko;

}

void Osoba::setAdres(Adres nowyAdres) {

    this -> adres = nowyAdres;

}

void Osoba::setDataUrodzin(Data nowaData) {

    this -> data_ur = nowaData;

}

string Osoba::getImie() {
    return this -> imie;
}

string Osoba::getNazwisko() {
    return this -> nazwisko;
}

Adres Osoba::getAdres() {
    return this -> adres;
}

Data Osoba::getDataUrodzin() {
    return this -> data_ur;
}

void Osoba::wyswietl_wszystko() {
    cout << "--------------------------------" << endl;
    cout << "Imie i nazwisko: " << imie << " " << nazwisko << endl;
    cout << "Adres: " << adres.kod_poczt << " " << adres.miejscowosc << " " << adres.ulica << endl;
    cout << "Data: " << data_ur.dd << "." << data_ur.mm << "." << data_ur.rr << endl;
    cout << "--------------------------------" << endl;
}


int main() {

    Osoba mariusz("Mariusz", "Obsztyfitykultykiewicz", {"67-200", "Glogow", "Orzechowa 42"},{12,3,2000});

    mariusz.wyswietl_wszystko();

    mariusz.setImie("Kajetan");

    mariusz.wyswietl_wszystko();

    Osoba piotr("Piotr", "Kowalski", {"67-210", "Przemkow", "Topolowa 14"},{22,3,2009});

    piotr.wyswietl_wszystko();

    return 0;
}
