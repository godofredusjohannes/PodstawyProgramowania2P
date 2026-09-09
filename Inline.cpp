#include <iostream>

using namespace std;

// Uzywamy w prostych czesto uzywanych funkcjach

inline void kalkulator() {

    int a,b;
    char znak;

    cout << "Podaj a: ";
    cin >> a;
    cout << "\nPodaj znak (+, -, *, /): ";
    cin >> znak;
    cout << "\nPodaj b: ";
    cin >> b;

    switch (znak) {
        case '+':
            cout << "\n" << a << " + " << b << " = " << a+b << endl;
            break;
        case '-':
            cout << "\n" << a << " - " << b << " = " << a-b << endl;
        case '*':
            cout << "\n" << a << " * " << b << " = " << a*b << endl;
            break;
        case '/':
            cout << "\n" << a << " : " << b << " = " << a/b << endl;
            break;
        default:
            cout << "\nWprowadzono blad." << endl;
    }

}

int main() {

    kalkulator();

    return 0;
}