#include "playtxt.h"
#include <string.h>
#define K 200

PlayTxt::PlayTxt()
{
//konstrukcja oktawy
    tab=new Dzwiek*[ILE];
    for(int i=0;i<ILE;++i)
        tab[i]=new Dzwiek(i,K);

    //zczytanie pliku
fstream plik;
plik.open("play.txt", ios::in);

if (plik.good()==true)
    cout << "dziala :) \n";

string linia;

getline(plik, linia);
char *clinia = new char[linia.length() + 1];


strcpy_s(clinia,(rsize_t)(linia.length()+1),linia.c_str());////////////////////////???


for(unsigned int i=0;i<linia.length();++i)
{
    cout << clinia[i];
    for(int a=0;a<ILE;++a)

    if(znakitxt[a]==clinia[i])
        {
            tab[a]->graj();
            break;
        }
    if(clinia[i]=='|')
        {
            Sleep(K);
        }

}

delete[] clinia;



plik.close();

}

PlayTxt::~PlayTxt()
{
}
