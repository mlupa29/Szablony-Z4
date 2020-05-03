#include "Wektor.cpp"
#include "rozmiar.h"
#include"Lzesp.hh"

template class Wektor<double, ROZMIAR>;
template std::ostream& operator << (std::ostream& Strm, const Wektor<double, ROZMIAR>& Wek);
template std::istream& operator >> (std::istream& Strm, Wektor<double, ROZMIAR>& Wek);

template class Wektor<LZespolona, ROZMIAR>;
template std::ostream& operator << (std::ostream& Strm, const Wektor<LZespolona, ROZMIAR>& Wek);
template std::istream& operator >> (std::istream& Strm, Wektor<LZespolona, ROZMIAR>& Wek);
