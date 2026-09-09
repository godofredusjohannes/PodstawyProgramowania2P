#include <iostream>

/*
#define WITAJ(kom) ("WITAJ " kom)

#ifndef WITAJ
    #define WITAJ() ("Nie wiem z kim sie witac")
#endif
*/

#define POLEKWADRATU(b1) (b1 * b1)
#define POLEPROSTOKAT(s1, w1) (s1 * w1)


using namespace std;

int main() {

    // cout << WITAJ("Kajetan") << endl;

    cout << POLEKWADRATU(4) << endl;

    cout << POLEPROSTOKAT(5, 10) << endl;

    return 0;
}