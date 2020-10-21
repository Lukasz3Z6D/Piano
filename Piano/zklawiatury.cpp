#include "zklawiatury.h"
#include<conio.h>
#include<windows.h>
#include<stdio.h>


#define ILE 13

Zklawiatury::Zklawiatury()
{
    tab=new Dzwiek*[ILE];
    for(int i=0;i<ILE;++i)
        tab[i]=new Dzwiek(i);
}

Zklawiatury::~Zklawiatury()
{
}

unsigned int Zklawiatury::Get()
{
    switch (abc)
    {
    case 'a':
        return 1;
        break;

    case 'w':
        return 2;
        break;

    case 's':
        return 3;
        break;

    case 'e':
        return 4;
        break;

    case 'd':
        return 5;
        break;

    case 'f':
        return 6;
        break;

    case 't':
        return 7;
        break;

    case 'g':
        return 8;
        break;

    case 'y':
        return 9;
        break;

    case 'h':
        return 10;
        break;

    case 'u':
        return 11;
        break;

    case 'j':
        return 12;
        break;

    case 'k':
        return 13;
        break;

    default:
        return 0;
        break;

    }
}



void Zklawiatury::Oktawa()
{

for(unsigned int i=0;i<ILE;++i)
        if(znaki[i]==abc){
            tab[i]->graj();
            break;
        }

}

void Zklawiatury::Klikaj()
{
    abc=_getch();
    while(abc!=27)
    {
        Oktawa();
        abc=_getch();
    }
}
