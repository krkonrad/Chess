#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;

void warunek(string & pomoc)
{
    if(pomoc == "a")
            pomoc = "1";
    if(pomoc == "b")
            pomoc = "2";
    if(pomoc == "c")
            pomoc = "3";
    if(pomoc == "d")
            pomoc = "4";
    if(pomoc == "e")
            pomoc = "5";
    if(pomoc == "f")
            pomoc = "6";
    if(pomoc == "g")
            pomoc = "7";
    if(pomoc == "h")
            pomoc = "8";
    else
        return ;
    return;
}

void kratka(string & amb)
{
    string pomoc, pomoc2;
    do
    {
        cin>>amb;
        cin.clear();
        cin.sync();
        if(amb.size() > 2 || amb.size() < 2)
        {
            amb = 'z';
            return;
        }
        pomoc = amb;
        pomoc.erase(1, 10000000);
        warunek(pomoc);
        pomoc2 = amb;
        amb = pomoc + (pomoc2.erase(0, 1));
        return;
    }while(true);
}

int main()
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    unsigned int i, j;
    string a[8][9] = {
        {"11","12","13","14","15","16","17","18",},
    {"21","22","23","24","25","26","27","28",},
    {"31","32","33","34","35","36","37","38",},
    {"41","42","43","44","45","46","47","48",},
    {"51","52","53","54","55","56","57","58",},
    {"61","62","63","64","65","66","67","68",},
    {"71","72","73","74","75","76","77","78",},
    {"81","82","83","84","85","86","87","88",}
    }, amb;

    do
    {
        SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
        system("cls");
    for(i = 0;i<8;i++)
    {
        cout<<endl;
        for(j = 0;j<8;j++)

        {
            if(i%2 == 0)
            {
                if(j%2 == 0)
                {
                    SetConsoleTextAttribute( hOut, BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
                }
                else
                {
                    SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
                }
                if( amb == a[i][j])
                cout<<"P";
                else
                cout<<" ";
            }
            else
            {
                if(j%2 == 0)
                {
                    SetConsoleTextAttribute( hOut, BACKGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
                }
                else
                {
                    SetConsoleTextAttribute( hOut, BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
                }
                if( amb == a[i][j])
                cout<<"P";
                else
                cout<<" ";
            }
        }
    }
        kratka(amb);
    }while(true);
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    return 0;
}
