#ifndef PLAYTXT_H
#define PLAYTXT_H
#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string>
//#include <vector>

#include "dzwiek.h"
#define ILE 13
using namespace std;


class PlayTxt
{
    Dzwiek**tab;
    const char znakitxt[14]={'`','1','2','3','4','5','6','7','8','9','0','-','='};
public:
    PlayTxt();
    ~PlayTxt();
};

#endif // PLAYTXT_H
