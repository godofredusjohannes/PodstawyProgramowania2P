#include <iostream>

using namespace std;

class Figura {
public:
    virtual void rysuj() = 0;
    virtual ~Figura() = default;
};

class Kwadrat: public Figura {
    public:
    int a;
    void rysuj() override {
        cout<<"Rysuje kwadrat o boku: " << a << endl;
    }
};

class Trojkat: public Figura {
    public:
    int a, h;
    void rysuj() override {
        cout<<"Rysuje trojkat: " << a << " i " << h << endl;
    }
};

int main() {

    Figura *kw = {new Kwadrat, new Kwadrat, new Trojkat};
    kw[1]->rysuj();
    delete kw[1];

    return 0;
}