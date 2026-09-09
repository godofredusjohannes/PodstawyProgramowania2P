#include <iostream>

#include "iomanip"

using namespace std;

int main() {

    double nPi = 3.14159265358979323846;

    // int intPi = nPi;

    cout << (int) nPi << endl;

    cout << setprecision(10) << nPi << endl;

    return 0;
}