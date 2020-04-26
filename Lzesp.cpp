#include "Lzesp.hh"
#include <iomanip>

using namespace std;



LZespolona& LZespolona::operator = (double  Skl)
{
    this->re = Skl; this->im = 0;
    return *this;
}



LZespolona  operator + (LZespolona  Skl1, LZespolona  Skl2)
{
    LZespolona  Wynik;

    Wynik.re = Skl1.re + Skl2.re;
    Wynik.im = Skl1.im + Skl2.im;
    return Wynik;
}



LZespolona  operator - (LZespolona  Skl1, LZespolona  Skl2)
{
    LZespolona  Wynik;

    Wynik.re = Skl1.re - Skl2.re;
    Wynik.im = Skl1.im - Skl2.im;
    return Wynik;
}



LZespolona  operator * (LZespolona  Skl, double  skalar)
{
    LZespolona  Wynik;

    Wynik.re = Skl.re * skalar;
    Wynik.im = Skl.im * skalar;
    return Wynik;
}


ostream& operator << (ostream& StrmWyj, LZespolona  Zesp)
{
    return StrmWyj << '(' << Zesp.re << showpos << Zesp.im << "i)" << noshowpos;
}

LZespolona Sprzezenie(LZespolona x)
{
    x.im = -x.im;
    return  x;
}



LZespolona  operator / (LZespolona  Skl1, double  Skl2)
{
    LZespolona  Wynik;
    assert(Skl2 != 0);
    Wynik.re = Skl1.re / Skl2;
    Wynik.im = Skl1.im / Skl2;
    return Wynik;
}

LZespolona  operator / (LZespolona  Skl1, LZespolona  Skl2)
{
    LZespolona  Wynik;
    assert(Modul2(Skl2) != 0);
    Wynik = (Skl1 * Sprzezenie(Skl2)) / Modul2(Skl2);
    return Wynik;
}


double Modul2(LZespolona Skl1)
{
    return Skl1.re * Skl1.re + Skl1.im * Skl1.im;
}

LZespolona  operator * (LZespolona  Skl1, LZespolona  Skl2)
{
    LZespolona  Wynik;

    Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
    Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
    return Wynik;
}


istream& operator >> (istream& wej, LZespolona& Skl1)
{
    char tab[3];

    wej >> tab[0];
    wej >> Skl1.re;
    wej >> Skl1.im;
    wej >> tab[1];
    wej >> tab[2];

    if (tab[0] != '(' || tab[1] != 'i' || tab[2] != ')')
    {
        wej.setstate(ios_base::badbit);
    }
    return wej;
}
