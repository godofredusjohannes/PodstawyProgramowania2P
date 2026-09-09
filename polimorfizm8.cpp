#include <iostream>

using namespace std;

struct Adres {
    string ulica, nr_bud, nr_lok, kod_pocz, miasto;
};

class Budynek{
public:
    int pietra;
    Adres adres;
    virtual void setBudynek(int, Adres) = 0;
    virtual void getBudynek() = 0;
};

class Blok: public Budynek {
    public:
    bool isWinda;
    void setBudynek(int, Adres) override;
    void getBudynek() override;
};

void Blok::setBudynek(int pietra, Adres adres) {
    this -> pietra = pietra;
    this -> adres = adres;
}

void Blok::getBudynek() {
    cout << "Ilosc pieter: " << pietra << endl;
    cout << "Adres: " << endl;
    cout << "\tUlica: " << adres.ulica << endl;
    cout << "\tNr bud / Nr lokalu: " << adres.nr_bud << "/" << adres.nr_lok << endl;
    cout << "\tKod pocztowy: " << adres.kod_pocz << endl;
    cout << "\tMiasto: " << adres.miasto << endl;
}

class Dom_jednorodzinny: public Budynek {
public:
    int wielkoscOgrudka;
    void setBudynek(int, Adres) override;
    void getBudynek() override;
};

void Dom_jednorodzinny::setBudynek(int pietra, Adres adres) {
    this -> pietra = pietra;
    this -> adres = adres;
}

void Dom_jednorodzinny::getBudynek() {
    cout << "Ilosc pieter: " << pietra << endl;
    cout << "Adres: " << endl;
    cout << "\tUlica: " << adres.ulica << endl;
    cout << "\tNr bud: " << adres.nr_bud << endl;
    cout << "\tKod pocztowy: " << adres.kod_pocz << endl;
    cout << "\tMiasto: " << adres.miasto << endl;
}

class Lokal_uslugowy: public Budynek {
public:
    int wielkoscOgrudka;
    void setBudynek(int, Adres) override;
    void getBudynek() override;
};

void Lokal_uslugowy::setBudynek(int pietra, Adres adres) {
    this -> pietra = pietra;
    this -> adres = adres;
}

void Lokal_uslugowy::getBudynek() {
    cout << "Ilosc pieter: " << pietra << endl;
    cout << "Adres: " << endl;
    cout << "\tUlica: " << adres.ulica << endl;
    cout << "\tNr bud: " << adres.nr_bud << endl;
    cout << "\tKod pocztowy: " << adres.kod_pocz << endl;
    cout << "\tMiasto: " << adres.miasto << endl;
}


int main() {

    Budynek *szopa[] = {new Blok, new Blok, new Dom_jednorodzinny, new Lokal_uslugowy};
    Blok komunalny;
    Blok godofredd;
    Dom_jednorodzinny dom_Lewackiego;
    Lokal_uslugowy dom_Kowalskiego;

    return 0;
}
