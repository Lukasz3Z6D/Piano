#include "piano.h"
#include "zklawiatury.h"
#include "playtxt.h"



Piano::Piano()
{
}

void Piano::start()
{

    int i;
    int end=1;

    do{
        cout<<"co wybrac?\n";
        cout<<"Wczytaj plik (nacisnij 1)\n";
        cout<<"Graj z klawiatury (nacisnij 2)\n";

    i=getchar();
        switch(i)
        {
            case 27:
                end=0;
            case 49:
                {cout<<"\n\tTeraz odtwarzasz ''play.txt''\n";
                PlayTxt p;}
                break;
            case 50:
                {Zklawiatury z;
                cout<<"\n\tTeraz grasz na klawiaturze\n";
                z.Klikaj();}
                break;

            default:
                break;
        }
    }while(end);
}
