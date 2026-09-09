#include <iostream>
#include "PlatnoscKarta.h"
#include "PlatnoscBlik.h"

using namespace std;

int main() {

    PlatnoscKarta MarkusMoszkiewicz("Markus", "Moszkiewicz", 1234567890234567);

    MarkusMoszkiewicz.zaplac(120.50);

    MarkusMoszkiewicz.wyswietlinformacje();

    PlatnoscBlik MikolajLewacki(665150028);

    MikolajLewacki.zaplac(69.50);

    MikolajLewacki.wyswietlinformacje();

    return 0;
}