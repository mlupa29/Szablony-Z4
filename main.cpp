#include "rozmiar.h"
#include "Lzesp.hh"
#include  "Wektor.hh"
#include "UklRown.hh"
#include "Szablony.hh"
using namespace std;

void TestDlaDouble()
{
    
    cout << "Dla ukladu liczb rzeczywistych gotowe juz gotowe" << endl;
    cin >> ukl;
    ukl.oblicz();
}


void TestDlaZesp()
{
    cin >> W;
    cout  << W + W<< endl;
    cout << W * 3 << endl;
    
}

int main()
{
    char c;
    cin >> c;
    cout << fixed << setprecision(2);
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