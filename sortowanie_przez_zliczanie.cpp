#include <iostream>
#include <vector>

using namespace std;

int sortowanie_przez_zliczanie(vector<int> t) {

    int n = t.size();

    vector<int> tab(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (t[j] == i) {
                tab[i] = tab[i] + 1;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < n; ++i) {
        if (tab[i] > 0) {
            for (int j = 0; j < tab[i]; ++j) {
                cout << "[" << i << "]";
            }
        }
    }

    return 0;
}

int main() {

    vector<int> t = {6,2,8,6,2,8,4,2,7,9,0,4,3,7,2,6};

    sortowanie_przez_zliczanie(t);

    vector<int> t2 = {9,2,5,7,9,9,2,1,0,6,4,8,3,2,1,6,9,3,0,2,1,7,4,3};

    sortowanie_przez_zliczanie(t2);

    return 0;
}