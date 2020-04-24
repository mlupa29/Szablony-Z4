#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <cassert>
#include <iostream>
#include <cmath>


struct  LZespolona {
    double   re;    /*! Pole repezentuje czesc rzeczywista. */
    double   im;    /*! Pole repezentuje czesc urojona. */

    LZespolona& operator = (double  Liczba);

};

LZespolona  operator + (LZespolona  Skl1, LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1, LZespolona  Skl2);
LZespolona  operator * (LZespolona  Mnozna, double  Mnoznik_Liczba);

std::ostream& operator << (std::ostream& StrmWyj, LZespolona  Zesp);
std::istream& operator >> (std::istream& wej, LZespolona& Skl1);


LZespolona Sprzezenie(LZespolona x);
LZespolona  operator / (LZespolona  Skl1, LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1, double  Skl2);
double Modul2(LZespolona Skl1);
LZespolona  operator * (LZespolona  Skl1, LZespolona  Skl2);
#endif
