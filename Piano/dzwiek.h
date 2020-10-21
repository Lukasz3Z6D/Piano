#ifndef DZWIEK_H
#define DZWIEK_H
#include<windows.h>

class Dzwiek
{
    int numer;
    int dlugosc;
    int hz;
public:
    Dzwiek(int n,int d=250):numer(n),dlugosc(d)
    {
        this->hz=220;
        for(int i=0;i<(this->numer+3);++i)
            this->hz=this->hz * 1.059463094;
    }

/*
    void ustawnumer(int numer)
    {
        this->numer=numer;
    }


    void ustawdlugosc(int dlugosc)
    {
        this->dlugosc=dlugosc;
    }
*/

/*
    void ust_hz()
    {
        this->hz=220;
        for(int i=0;i<(this->numer+3);++i)
            this->hz=this->hz * 1.059463094;
    }
*/

    void graj()
    {
        Beep(hz,dlugosc);
    }

    Dzwiek();

};

#endif // DZWIEK_H
