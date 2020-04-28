#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include <cmath>
#include "Macierz.hh"
#include "Wektor.hh"

template<class Typ, int Siz >
class UkladRownanLiniowych {
    Macierz<Typ, Siz> M;
    Wektor<Typ, Siz> W;
    Wektor<Typ, Siz> wynik;
public:
    Macierz<Typ, Siz> get_M()const { return M; }
    Wektor<Typ, Siz> get_W()const { return W; }
    Macierz<Typ, Siz>& set_M() { return M; }
    Wektor<Typ, Siz>& set_W() { return W; }
    void oblicz();

};


template<class Typ, int Siz >
void UkladRownanLiniowych<Typ, Siz>::oblicz()
{
    Typ pom;
    pom = 0;
    Macierz<Typ, Siz> kop = M;
    Typ wyzn = kop.Wyznacznik();
    if (wyzn == pom)
    {
        for (int i = 0; i < Siz; i++)
        {
            kop = M;
            kop[i] = W;
            if (kop.Wyznacznik() == pom)
            {
                std::cout << "uklad nioznaczony" << std::endl;
                return;
            }


        }

        std::cout << "brak rozwiazan" << std::endl;
    }

    std::cout << "wektor rozwiazania" << std::endl;
    for (int i = 0; i < Siz; i++)
    {
        kop = M;
        kop[i] = W;
        wynik[i] = kop.Wyznacznik() / wyzn;
        std::cout << wynik[i] << " ";
    }
    std::cout << std::endl;

}



template<class Typ, int Siz >
std::istream& operator >> (std::istream& Strm, UkladRownanLiniowych<Typ, Siz>& UklRown)
{
    Strm >> UklRown.set_M() >> UklRown.set_W();
    return Strm;
}
template<class Typ, int Siz >
std::ostream& operator << (std::ostream& Strm, const UkladRownanLiniowych<Typ, Siz>& UklRown)
{
    Strm << "M^T" << std::endl;
    Strm << UklRown.get_M();
    Strm << "Wektor wyrazow wolnych" << std::endl;
    Strm << UklRown.get_W();

    return Strm;
}


#endif