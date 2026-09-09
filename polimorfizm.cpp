#include <iostream>

using namespace std;

class Zwierze {
public:
    string rasa, gatunek;

    void showInfo(int a) {
        cout << "Gatunek: " << gatunek << endl;
    }

    void showInfo(double b) {
        cout << "Rasa: " << rasa << endl;
    }

    void showInfo(int, double) {
        showInfo(0);
        showInfo(0.0);
    }
};

class Pies: public Zwierze {
    public:
    string imie;
    int wiek;
    void showInfo() {
        gatunek = "Pies";
        Zwierze::showInfo(0);
        Zwierze::showInfo(0.0);
        cout << "Imie: " << imie << endl;
        cout << "Wiek: " << wiek << endl;
    }
};

int main() {

    Zwierze pies;
    pies.gatunek = "Kon";
    pies.rasa = "Pakistanski";



    pies.showInfo(0);
    pies.showInfo(0.0);
    pies.showInfo(0,0.0);

    Pies kajetan;

    kajetan.rasa = "Lewicki";
    kajetan.imie = "Mikolaj";
    kajetan.wiek = 13;

    kajetan.showInfo();


    return 0;
}

/*

class Osoba {
    public:
        string imie, nazwisko;
        void showInfo() {
            cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl;
        }
};

class Uczen: public Osoba {
    public:
        int nrDz;
        string klasa;
        void showInfo() {
            Osoba::showInfo();
            cout << "Klasa: "<< klasa << endl;
            cout << "Numer w dzienniku: "<< nrDz << endl;
        }
    void showInfo(int a) {}
};

template <typename T>

class Punkt {
    public:
        T x, y;
        Punkt operator+(const Punkt &p) {
            return Punkt(x + p.x, y + p.y);
        }
};

int main() {

    Punkt<int> a, b;
    a.x = 1; a.y = 2;
    b.x = 3; b.y = 4;

    Punkt<int> c;
    c = a + b;

    return 0;
}
*/

//Polimorfizm = poli (wiele), morfizm (postac):
//Moze dotyczyc: funkcji, operatorow (+, -, /, *, ...), szablonow, metody.


