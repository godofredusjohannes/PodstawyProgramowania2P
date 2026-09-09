#include <iostream>

using namespace std;

class Pojazd {
    private:
    string marka;
    int rok_produkcji;
    double przebieg;
    bool czy_sprawny;
    static int identyfikator;
    public:
    Pojazd();
    Pojazd(string marka, int rok_produkcji, double przebieg, bool czy_sprawny);
    Pojazd(Pojazd &a);
    ~Pojazd();

    void wyswietlInformacje();
    void przebieg_service();
    void napraw();
    static int liczba_pojazdow();
};

int Pojazd::identyfikator = 0;

Pojazd::Pojazd() {
    marka = "Nieznana";
    rok_produkcji = 2000;
    przebieg = 0.0;
    czy_sprawny = true;
    identyfikator++;
}

Pojazd::Pojazd(string marka, int rok_produkcji, double przebieg, bool czy_sprawny) {
    this->marka = marka;
    this->rok_produkcji = rok_produkcji;
    this->przebieg = przebieg;
    this->czy_sprawny = czy_sprawny;
    identyfikator++;
}

Pojazd::Pojazd(Pojazd &a) : marka(a.marka), rok_produkcji(a.rok_produkcji), przebieg(a.przebieg), czy_sprawny(a.czy_sprawny) {
    cout << "Skopiowano pojazd" << endl;
    identyfikator++;
}

Pojazd::~Pojazd() {
    cout << "-----------------------------" << endl;
    cout << "Pojazd " << marka << " zostal zniszczony." << endl;
    cout << "-----------------------------" << endl;
    identyfikator--;
}

void Pojazd::wyswietlInformacje() {
    cout << "-----------------------------" << endl;
    cout << "Marka: " << marka << endl;
    cout << "Rok produkcji: " << rok_produkcji << endl;
    cout << "Przebieg: " << przebieg << endl;
    cout << "Czy sprawny: ";
    if (czy_sprawny == true) {
        cout << "Tak" << endl;
    }
    else {
        cout << "Nie" << endl;
    }
    cout << "-----------------------------" << endl;
}

void Pojazd::przebieg_service() {
    przebieg += 1000;
    if (czy_sprawny == true) {
        cout << "-----------------------------" << endl;
        cout << "Pojazd jest sprawny." << endl;
        cout << "-----------------------------" << endl;
    }
    else {
        cout << "-----------------------------" << endl;
        cout << "Pojazd nie jest sprawny." << endl;
        cout << "-----------------------------" << endl;
    }
}

void Pojazd::napraw() {
    if (czy_sprawny == false) {
        czy_sprawny = true;
        cout << "-----------------------------" << endl;
        cout << "Pojazd naprawiono." << endl;
        cout << "-----------------------------" << endl;
    }
    else {
        cout << "-----------------------------" << endl;
        cout << "Pojazd juz byl sprawny, nie ma co naprawiac." << endl;
        cout << "-----------------------------" << endl;
    }
}

int Pojazd::liczba_pojazdow() {
    cout << "-----------------------------" << endl;
    cout << "Ilosc pojazdow: " << identyfikator << endl;
    cout << "-----------------------------" << endl;
    return 0;
}

int main() {

    Pojazd PizdzikKowalskiego;

    PizdzikKowalskiego.wyswietlInformacje();

    PizdzikKowalskiego.przebieg_service();

    PizdzikKowalskiego.napraw();

    PizdzikKowalskiego.liczba_pojazdow();

    Pojazd SigmawuzWujaPoczynka("Ferrari", 1999, 120.50, true);

    SigmawuzWujaPoczynka.wyswietlInformacje();

    SigmawuzWujaPoczynka.przebieg_service();

    SigmawuzWujaPoczynka.napraw();

    SigmawuzWujaPoczynka.liczba_pojazdow();

    Pojazd Sigmawuz2(SigmawuzWujaPoczynka);


    Sigmawuz2.wyswietlInformacje();

    Sigmawuz2.przebieg_service();

    Sigmawuz2.napraw();

    Sigmawuz2.liczba_pojazdow();

    Sigmawuz2.~Pojazd();

    SigmawuzWujaPoczynka.liczba_pojazdow();

    return 0;
}
