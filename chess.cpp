#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void bla(HANDLE hOut, unsigned int & k, int LO)
{
    if(k >= 88)
        k=11;
    do
    {
        if(k%2 == 0)
        {
            if(LO == k)
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED |  FOREGROUND_BLUE |  FOREGROUND_GREEN );
                cout<<"P";
            }
            else
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY );
                cout<<" ";
            }
            k++;
        }
        else
        {
            if(LO == k)
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED |  FOREGROUND_BLUE |  FOREGROUND_GREEN  );
                cout<<"P";
            }
            else
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY );
                cout<<" ";
            }
            k++;
        }
    }while(!(k == 19 || k == 29 || k == 39 || k == 49 || k == 59 || k == 69 || k == 79 || k == 89));
    cout<<endl;
    k = k-8+10;

}
void bla2(HANDLE hOut, unsigned int & k, int LO)
{
    if(k >= 88)
        k=11;
    do
    {
        if(k%2 == 0)
        {
            if(LO == k)
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);
                cout<<"P";
            }
            else
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | BACKGROUND_INTENSITY );
                cout<<" ";
            }
            k++;
        }
        else
        {
            if(LO == k)
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY );
                cout<<"P";
            }
            else
            {
                SetConsoleTextAttribute( hOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY );
                cout<<" ";
            }
            k++;
        }
    }while(!(k == 19 || k == 29 || k == 39 || k == 49 || k == 59 || k == 69 || k == 79 || k == 89));
    cout<<endl;
    k = k-8+10;

}

void tak(HANDLE hOut)
{
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
}
int main()
{

    HANDLE hOut;
    unsigned int k = 11, LO;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    do{
    SetConsoleTextAttribute( hOut, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY );cout<<" ";tak(hOut);cout<<" - biala kratka     (Dlaczgo tak a nie inaczej? Poniewaz na czarnym tle ciezko"<<endl;
    SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | FOREGROUND_INTENSITY );cout<<" ";tak(hOut);cout<<" - czrna kratka   rozroznic bialy i czarny, kiedy figury tez sa biale i czarne)"<<endl<<endl;
    tak(hOut);cout<<" 12345678"<<endl;
    cout<<"A";bla(hOut,k,LO);tak(hOut);
    cout<<"B";bla2(hOut,k,LO);tak(hOut);
    cout<<"C";bla(hOut,k,LO);tak(hOut);
    cout<<"D";bla2(hOut,k,LO);tak(hOut);
    cout<<"E";bla(hOut,k,LO);tak(hOut);
    cout<<"F";bla2(hOut,k,LO);tak(hOut);
    cout<<"G";bla(hOut,k,LO);tak(hOut);
    cout<<"H";bla2(hOut,k,LO);tak(hOut);
    cout<<endl<<endl;
    cin>>LO;
    cin.clear();
    cin.sync();
    system("cls");
    }while(!(LO == 1234567890));
    return 0;

}
