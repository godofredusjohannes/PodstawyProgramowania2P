#include <iostream>
#include <vector>

using namespace std;

class Lista {
private:
    struct Element {
        string nazwa;
        int ilosc;
    };

    vector<Element> lista;

public:
    Lista() {}

    Lista(const Lista& inna) {
        lista = inna.lista;
    }

    ~Lista() {
        lista.clear();
    }

    void dodaj(const string& nazwa, int ilosc) {
        Element e;
        e.nazwa = nazwa;
        e.ilosc = ilosc;
        lista.push_back(e);
    }

    void wypisz() const {
        if (lista.empty()) {
            cout << "Lista zakupow jest pusta." << endl;
            return;
        }
        else {
            cout << "Lista zakupow: " << endl;
        for (const auto& e : lista) {
            cout << e.nazwa << " - " << e.ilosc << endl;
        }
        }
    }

    void usun() {
        lista.clear();
    }
};

int main() {
    Lista zakupy;

    zakupy.dodaj("Mleko", 2);
    zakupy.dodaj("Chleb", 1);
    zakupy.dodaj("Jajka", 10);

    zakupy.wypisz();

    zakupy.usun();

    cout << "\nPo wyczyszczeniu:" << endl;
    zakupy.wypisz();

    return 0;
}