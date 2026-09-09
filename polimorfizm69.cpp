#include <iostream>

using namespace std;

class Pojazd {
    protected:
    string nazwa;
    public:
    virtual void jedz() = 0;
    virtual void zatrzymaj() = 0;
    virtual ~Pojazd() = default;
};

class Samochod: public Pojazd {
    public:
        void jedz() override{
            cout << "Samochod jedzie po drodze." << endl;
        }
        void zatrzymaj() override{
            cout << "Samochod zatrzymuje sie na swiatlach." << endl;
        }
};

class Statek: public Pojazd {
    public:
        void jedz() override{
            cout << "Statek plynie po morzu." << endl;
        }
        void zatrzymaj() override{
            cout << "Statek rzuca kotwice." << endl;
        }
};



int main() {

    Pojazd *pojazd[] {
        new Samochod,
        new Statek
    };

    for (int i = 0; i < 2; i++) {
        pojazd[i]->jedz();
        pojazd[i]->zatrzymaj();
    }

    delete pojazd[1];

    return 0;
}