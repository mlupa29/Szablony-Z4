#ifndef WEKTOR_HH
#define WEKTOR_HH

//#include "rozmiar.h"
#include <iostream>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template<typename Typ, int Siz >
class Wektor {
    Typ Tab[Siz];

public:
    Wektor() { for (Typ& Wsp : Tab) Wsp = 0; };
    Typ operator[] (int i) const { return Tab[i]; }
    Typ& operator[] (int i) { return Tab[i]; }


    Wektor<Typ, Siz> operator +(Wektor<Typ, Siz> W);
    Wektor<Typ, Siz> operator -(Wektor<Typ, Siz> W);
    double operator *(Wektor<Typ, Siz> W);
    Wektor<Typ, Siz> operator /(double skalar);
    Wektor<Typ, Siz> operator *(double skalar) const;

};





template<class Typ, int Siz >
std::istream& operator >> (std::istream& Strm, Wektor<Typ, Siz>& Wek)
{
    for (int i = 0; i < Siz; i++)
        Strm >> Wek[i];

    return Strm;
}

template<class Typ, int Siz >
std::ostream& operator << (std::ostream& Strm, const Wektor<Typ, Siz>& Wek)
{
    for (unsigned int i = 0; i < Siz; i++)
        Strm << Wek[i] << " ";

    return Strm;
}

template<class Typ, int Siz >
Wektor<Typ, Siz> Wektor<Typ, Siz>::operator +(Wektor<Typ, Siz>  W)
{
    Wektor<Typ, Siz> Wynik;
    for (int i = 0; i < Siz; i++)
        Wynik[i] = Tab[i] + W[i];
    return Wynik;
}

template<class Typ, int Siz >
Wektor<Typ, Siz> Wektor<Typ, Siz>::operator -(Wektor<Typ, Siz> W)
{
    Wektor<Typ, Siz> Wynik;
    for (int i = 0; i < Siz; i++)
        Wynik[i] = Tab[i] - W[i];
    return Wynik;
}

template<class Typ, int Siz >
double Wektor<Typ, Siz>::operator *(Wektor<Typ, Siz> W)
{
    Typ Wynik = 0;
    for (int i = 0; i < Siz; i++)
        Wynik += Tab[i] * W[i];
    return Wynik;
}

template<class Typ, int Siz >
Wektor<Typ, Siz> Wektor<Typ, Siz>::operator /(double skalar)
{

    if (skalar == 0)
    {
        std::cerr << "skalar musi byc rozny !=0";
        std::exit(EXIT_FAILURE);
    }
    else {
        Wektor<Typ, Siz> Wynik;
        for (int i = 0; i < Siz; i++)
            Wynik[i] = Tab[i] / skalar;
        return Wynik;
    }
}

template<class Typ, int Siz >
Wektor<Typ, Siz> Wektor<Typ, Siz>::operator *(double skalar) const
{

    Wektor<Typ, Siz> Wynik;
    for (int i = 0; i < Siz; i++)
        Wynik[i] = Tab[i] * skalar;
    return Wynik;
}

#endif
