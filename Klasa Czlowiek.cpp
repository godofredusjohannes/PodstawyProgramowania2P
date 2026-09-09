#include <iostream>

using namespace std;

enum Rasa {
    biala,
    czarna,
    zolta
};

enum Plec {
    m,
    k
};

class Czlowiek { //klasa bazowa, rodzic
    protected:
        string choroby[10];
    public:
        Rasa rasa;
        Plec plec;
        string kolorWlosow;
        string kolorOczu;
    Czlowiek(Rasa,Plec,string,string);
};

Czlowiek::Czlowiek(Rasa rasa, Plec plec, string wlosy, string oczy) : rasa(rasa), plec(plec), kolorWlosow(wlosy), kolorOczu(oczy)
{}

class Obywatel: public Czlowiek { //klasa dziedziczaca, dziecko
    int pesel;
public:
    int wiek;
    Obywatel(Rasa,Plec,string,string,int,int);
};

Obywatel::Obywatel(Rasa rasa, Plec plec, string wlosy, string oczy, int wiek, int pesel) : Czlowiek(rasa, plec, wlosy, oczy), wiek(wiek), pesel(pesel)
{}

class Student : public Obywatel {
private:
    int nrIndeksu;
public:
    Student(Rasa, Plec, string, string, int, int, int);
    void wyswietlDane() {
        cout << "--------------------------------------------------" << endl;
        cout << "Rasa: " << rasa << endl;
        cout << "Plec: " << plec << endl;
        cout << "Kolor wlosow: " << kolorWlosow << endl;
        cout << "Kolor oczu: " << kolorOczu << endl;
        cout << "Wiek: " << wiek << endl;
        cout << "Nr Index: " << nrIndeksu << endl;
        cout << "--------------------------------------------------" << endl << endl;
    }
};

Student::Student(Rasa rasa, Plec plec, string wlosy, string oczy, int wiek, int pesel, int nrIndeksu) : Obywatel(rasa, plec, wlosy, oczy, pesel), nrIndeksu(nrIndeksu)
{}

int main() {



    return 0;
}
