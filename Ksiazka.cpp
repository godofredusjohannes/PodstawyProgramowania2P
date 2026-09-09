#include <iostream>

using namespace std;

class Ksiazka {
    private:
    string tytul, autor, isbn;
    int rok_wydania, liczba_stron;
    public:
    static int licznik;

    Ksiazka();
    Ksiazka(string,string,int,string,int);
    Ksiazka(Ksiazka &a);

    void info() {
        cout << "\nTytul: " << this -> tytul << endl;
        cout << "Autor: " << this -> autor << endl;
        cout << "Rok wydania: " << this -> rok_wydania << endl;
        cout << "isbn: " << this -> isbn << endl;
        cout << "Liczba stron: " << this -> liczba_stron << endl;
    }
};

int Ksiazka::licznik = 0;

Ksiazka::Ksiazka() {
    tytul = "Nieznany";
    autor = "Nieznany";
    rok_wydania = 0;
    isbn = "BRAK";
    liczba_stron = 0;
    Ksiazka::licznik++;
}

Ksiazka::Ksiazka(string tytul, string autor, int rok_wydania, string isbn, int liczba_stron) :
tytul(tytul), autor(autor), rok_wydania(rok_wydania), isbn(isbn), liczba_stron(liczba_stron) {
    Ksiazka::licznik++;
    if (this->liczba_stron < 0) {
        this->liczba_stron = 0;
    }
    if (this->licznik < 0) {
        this->licznik = 0;
    }
}

Ksiazka::Ksiazka(Ksiazka &a) {
    this->tytul = a.tytul;
    this->autor = a.autor;
    this->rok_wydania = a.rok_wydania;
    this->isbn = a.isbn;
    this->liczba_stron = a.liczba_stron;
    Ksiazka::licznik++;
}

int main() {

    Ksiazka harypoter("Harry Potter", "Piotr Kowalski", 1995, "123456", 225);

    Ksiazka roblox;

    Ksiazka harypoterKlon(harypoter);

    harypoter.info();

    harypoterKlon.info();

    roblox.info();

    cout << "\nLiczba ksiazek: " << Ksiazka::licznik << endl;

    return 0;
}
