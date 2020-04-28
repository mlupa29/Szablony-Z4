#include  "Wektor.hh"
#include "Macierz.hh"
#include "UklRown.hh"
#include "Szablony.hh"
#include "Lzesp.hh"
#include "rozmiar.h"
#include <iomanip>

using namespace std;

void TestDlaDouble()
{
    cin >> ukl;
    ukl.oblicz();
}


void TestDlaZesp()
{
    cin >> U;
    U.oblicz();
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

