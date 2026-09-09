#include <iostream>
#include <vector>

using namespace std;

struct Adres {
    string miejscowosc, ulica, kodPocz;
};

class Produkt {
    public:
    string nazwa;
    double cena, waga;
};

class Sklep {
    double obrotMsc;
public:
    Adres adres;
    vector<Produkt> towary;
    Sklep(double, Adres, vector<Produkt>);
    Sklep(Sklep &, Adres);
};

Sklep::Sklep(double obrot, Adres adres, vector<Produkt> towary): obrotMsc(obrot), adres(adres), towary(towary)
{}

Sklep::Sklep(Sklep &ob, Adres adres): obrotMsc(ob.obrotMsc), adres(adres), towary(ob.towary) {

}

int main() {
    Sklep GodofredoIndustries(8000000, {"Glogow", "Orzechowa 42", "67-200"},
    {}
    );
    Sklep GodofredoIndustriesIncorporated(GodofredoIndustries, {"Gaworzyce", "Cicha 2", "67-300"});
}
