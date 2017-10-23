#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>

using namespace std;
struct Probka
{
double t;
double x;
Probka(double _t, double _x)
    {t=_t;
    x=_x;}
};

vector <Probka> wczytaj(string nazwa)
{
    vector <Probka> tab;
    ifstream plik ("nazwa_pliku.txt");
    {
        string linia;
        while(getline(plik, linia))
        {
            stringstream ss(linia);
            cout<<linia<<endl;
        }
    }
    plik.close();
    return tab;
}
void zapisz (vector <Probka> dane, string nazwa)
{
    ofstream plik("out.csv.");

    {
     plik.close();
    }
}

void wypisz (vector <Probka> dane, string nazwa)
{

}


int main(int arg,char* argv[])
{
    if(arg !=2)
    {
        return -1;
    }
    vector <Probka> dane=wczytaj(argv[1]);
    string nazwa_pliku = argv[1];
    cout <<"Odczytuje plik: "<< nazwa_pliku << endl;
    zapisz (dane, "out.csv.");
    cin.get();
    return 0;
}
