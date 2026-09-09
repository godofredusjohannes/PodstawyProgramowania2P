#include <iostream>

using namespace std;

class CzujnikTemperatury {
    double aktualna, zakresMin, zakresMax;
    string nazwa;
    const double ZAKRES_DOMYSLNY_MIN = -50.0;
    const double ZAKRES_DOMYSLNY_MAX = 150.0;
    public:
    CzujnikTemperatury(double aktualna,double zakresMin, double zakresMax, string nazwa) {
        if (zakresMin>= ZAKRES_DOMYSLNY_MIN && zakresMax<= ZAKRES_DOMYSLNY_MAX) {
            this->aktualna = aktualna;
            this->zakresMin = zakresMin;
            this->zakresMax = zakresMax;
            this->nazwa = nazwa;
        }
        else {
            cout << "invald_argument" << endl << endl;
        }
    }

    CzujnikTemperatury(double aktualna,double zakresMin, double zakresMax) {
        if (zakresMin>= ZAKRES_DOMYSLNY_MIN && zakresMax<= ZAKRES_DOMYSLNY_MAX) {
            this->aktualna = aktualna;
            this->zakresMin = zakresMin;
            this->zakresMax = zakresMax;
            this->nazwa = "Bez nazwy";
        }
        else {
            cout << "invald_argument" << endl << endl;
        }
    }

    CzujnikTemperatury(double aktualna) : aktualna(aktualna), zakresMin(-50.0), zakresMax(150.0), nazwa("Bez nazwy"){}

    CzujnikTemperatury() : aktualna(20.0), zakresMin(-50), zakresMax(150), nazwa("Bez nazwy"){}

    void aktualizuj(double nowaTemperatura) {
        if (nowaTemperatura >= ZAKRES_DOMYSLNY_MIN && nowaTemperatura <= ZAKRES_DOMYSLNY_MAX) {
            this->aktualna = nowaTemperatura;
        }
        else {
            cout << "invald_argument" << endl << endl;
        }
    }

    void wyswietl() const {
        cout << "Nazwa: " << nazwa << endl;
        cout << "Aktualna temperatura: " << aktualna << endl;
        cout << "Maksymalny zakres: " << zakresMax << endl;
        cout << "Minimalny zakres: " << zakresMin << endl << endl;
    }

    bool czyWRozsadnymZakresie() const {
        if (aktualna >= zakresMin && aktualna <= zakresMax) {
            return true;
        }
        else {
            return false;
        }
    }

    double pobierzAktualna() const {
        return aktualna;
    }
};

int main() {

    CzujnikTemperatury temp1(44.2, 10, 77, "Grzejnik u lewickich");

    CzujnikTemperatury temp2(69, -20,70);

    CzujnikTemperatury temp3(151.1);

    CzujnikTemperatury temp4;

    temp1.wyswietl();

    temp2.wyswietl();

    temp3.wyswietl();

    temp4.wyswietl();

    cout << "\nCzy w rozsadnym zakresie? " << temp1.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp2.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp3.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp4.czyWRozsadnymZakresie() << endl;

    temp3.aktualizuj(25.0);

    cout << "\nAktualna: " << temp1.pobierzAktualna() << endl;

    cout << "Aktualna: " << temp2.pobierzAktualna() << endl;

    cout << "Aktualna: " << temp3.pobierzAktualna() << endl;

    cout << "Aktualna: " << temp4.pobierzAktualna() << endl;

    cout << "\nCzy w rozsadnym zakresie? " << temp1.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp2.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp3.czyWRozsadnymZakresie() << endl;

    cout << "Czy w rozsadnym zakresie? " << temp4.czyWRozsadnymZakresie() << endl;
    return 0;
}