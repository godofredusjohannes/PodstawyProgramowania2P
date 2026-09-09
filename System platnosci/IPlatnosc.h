#ifndef UNTITLED2_IPLATNOSC_H
#define UNTITLED2_IPLATNOSC_H

class IPlatnosc {
    public:
    virtual void zaplac(double kwota) = 0;
    virtual void wyswietlinformacje() = 0;
    virtual ~IPlatnosc() = default;
};

#endif //UNTITLED2_IPLATNOSC_H