#include "rozmiar.h"
#include "Lzesp.hh"
#include  "Wektor.hh"
#include "UklRown.hh"
using namespace std;

void TestDlaDouble()
{
    cin >> Wek;
    cin >> Mac;

    cout << Wek * 2 << endl;
    cout << Wek + Wek << endl;
    cout << Mac * Wek << endl;
    cout << Mac << endl;
    Mac.Transpozycja(Mac);
    cout << Mac << endl;
    cout << "Dla ukladu liczb rzeczywistych gotowe juz gotowe" << endl;
    cin >> ukl;
    ukl.oblicz();
}


void TestDlaZesp()
{
    cin >> W;
    cout << endl << W + W;
    cin >> M;
    M.Transpozycja(M);
    cout << M;
}

int main()
{
    char c;
    cin >> c;
    switch (c)
    {
    case 'r':
    {
        TestDlaDouble();
        exit(1);
    }
    case 'z':
    {
        TestDlaZesp();
        exit(1);
    }
    default:
        exit(1);
    }
    
    return 0;
}