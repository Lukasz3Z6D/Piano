#ifndef ZKLAWIATURY_H
#define ZKLAWIATURY_H
#include "dzwiek.h"



class Zklawiatury
{
    const char znaki[14]={'a','w','s','e','d','f','t','g','y','h','u','j','k'};
    //int iletonow;
    Dzwiek**tab;
    char abc;
public:
    Zklawiatury();
    ~Zklawiatury();
    unsigned int Get();
    void Oktawa();
    void Klikaj();

};

#endif // ZKLAWIATURY_H
