#include <iostream>
#include <vector>

using namespace std;

class Osoba {
    private:
    string pesel;
    public:
    string imie, nazwisko;
};

class Maszyna {
    private:
        string nazwa, typ;
        int rokProdukcji;
        bool sprawnosc;
    public:
        Maszyna(string nazwa, string typ, int rokProdukcji): nazwa(nazwa), typ(typ), rokProdukcji(rokProdukcji){}
        bool czySprawna() {
            if (sprawnosc) {
                return true;
            }
            else {
                return false;
            }
        }
        bool wymagaPrzegladu() {
            if (this -> sprawnosc) {
                cout << "Maszyna nie wymaga przegladu." << endl;
            }
            else {
                cout << "Maszyna wymaga przegladu." << endl;
            }
        }
        void ustawStan(bool stan) {
            this -> sprawnosc = stan;
        }
};

class Zwierze {
    private:
        string gatunek, identyfikator;
        int wiek;
        bool zdrowie;
    public:
        Zwierze(string gatunek, string identyfikator, int wiek): gatunek(gatunek), identyfikator(identyfikator), wiek(wiek) {}
        bool czyZdrowe() {
            if (zdrowie) {
                return true;
            }
            else {
                return false;
            }
        }
        bool wymagaSzczepienia() {
            if (zdrowie) {
                cout << "Zwierze nie wymaaga szczepienia." << endl;
            }
            else {
                cout << "Zwierze wymaaga szczepienia." << endl;
            }
        }
        void ustawStanZdrowia(bool stan) {
            this -> zdrowie = stan;
        }
};

class Budynek {
    private:
        string typ;
        double powierzchnia;
        bool sprawnosc;
    public:
        Budynek(string typ, double powierzchnia): typ(typ), powierzchnia(powierzchnia) {}
        bool czySprawny() {
            if (sprawnosc) {
                return true;
            }
            else {
                return false;
            }
        }
        void zglosAwarie() {
            cout << "Awaria zgloszona do odpowiednich sluzb scigania." << endl;
        }
};

class Plon {
    private:
        string rodzaj;
        double iloscTon;
        int rokZbioru;
    public:
        Plon(string rodzaj, double iloscTon, int rokZbioru): rodzaj(rodzaj), iloscTon(iloscTon), rokZbioru(rokZbioru) {}
        bool czyDobryUrodzaj() {
            if (iloscTon > 100) {
                cout << "Urodzaj jest dobry." << endl;
            }
            else {
                cout << "Urodzaj nie jest dobry." << endl;
            }
        }
};

class Farma {
    private:
        Osoba wlasciciel;
        double hektary;
        vector<Maszyna> maszyny;
        vector<Zwierze> zwierzeta;
        vector<Budynek> budynki;
        vector<Plon> plony;
    public:
        Farma(Osoba wlasciciel, double hektary): wlasciciel(wlasciciel), hektary(hektary) {}
        void dodajMaszyne(Maszyna maszyna) {
            maszyny.push_back(maszyna);
        }
        void dodajZwierze(Zwierze zwierze) {
            zwierzeta.push_back(zwierze);
        }
        void dodajBudynek(Budynek budynek) {
            budynki.push_back(budynek);
        }
        void dodajPlon(Plon plon) {
            plony.push_back(plon);
        }
    int liczbaNiesprawnychMaszyn() {
            int licznik = 0;

            for (Maszyna& maszyna : maszyny) {
                if (!maszyna.czySprawna()) {
                    licznik++;
                }
            }
            return licznik;
        }
    int liczbaChorychZwierzat() {
            int licznik = 0;

            for (Zwierze& zwierze : zwierzeta) {
                if (!zwierze.czyZdrowe()) {
                    licznik++;
                }
            }
            return licznik;
        }
    double sumaPlonow(){
            int licznik = 0;

            for (Plon& plon : plony) {
                licznik++;
            }

            return licznik;
    }
};

int main() {
    Osoba osoba;
    osoba.imie = "Jan";
    osoba.nazwisko = "Kowalski";

    Farma farma(osoba, 50);

    Maszyna traktor("John Deere", "Traktor", 2020);
    Maszyna kombajn("New Holland", "Kombajn", 2018);

    traktor.ustawStan(true);
    kombajn.ustawStan(false);

    farma.dodajMaszyne(traktor);
    farma.dodajMaszyne(kombajn);

    Zwierze krowa("Krowa", "KR001", 5);
    Zwierze swinia("Swinia", "SW001", 2);

    krowa.ustawStanZdrowia(true);
    swinia.ustawStanZdrowia(false);

    farma.dodajZwierze(krowa);
    farma.dodajZwierze(swinia);

    farma.dodajPlon(Plon("Pszenica", 50, 2025));
    farma.dodajPlon(Plon("Kukurydza", 100, 2025));
    farma.dodajPlon(Plon("Pszenica", 60, 2026));

    cout << "Niesprawne maszyny: "
         << farma.liczbaNiesprawnychMaszyn() << endl;

    cout << "Chore zwierzeta: "
         << farma.liczbaChorychZwierzat() << endl;

    cout << "Liczba plonow: "
         << farma.sumaPlonow() << endl;

    return 0;
}