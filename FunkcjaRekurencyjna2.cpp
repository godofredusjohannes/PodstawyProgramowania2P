#include <iostream>

using namespace std;

/*
int potega(int x, int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else {
        return x*potega(x, --n);
    }
}
*/

string wyswietl(int n) {
    if (n == 0) {
        return "";
    }
    else {
        cout << "*";
        return wyswietl(--n);
    }
}

int main () {

    cout << wyswietl(5) << endl;

    return 0;
}