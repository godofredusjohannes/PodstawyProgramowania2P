#include <iostream>

using namespace std;

template <typename T1, typename T2>

T1 wieksza(T1 a, T2 b) {
    if (a > b) {

        cout << a << " jest wieksze od " << b << endl;
        return a;
    }
    else if (b > a) {
        cout << b << " jest wieksze od " << a << endl;
        return b;
    }

    else {
        cout << a << " jest rowne " << b << endl;
        return a;
    }
}

int main() {

    wieksza<int, int>(9, 5);

    wieksza<double, double>(4.6, 12.8);

    wieksza<char, char>('A', 'B');

    wieksza<char, char>('C', 'C');

    return 0;
}