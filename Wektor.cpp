#include "LzespT.h"



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