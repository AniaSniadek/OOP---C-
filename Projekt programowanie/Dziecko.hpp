#ifndef _DZIECKO_HPP_
#define _DZIECKO_HPP_
#include <string>
#include "Rower.hpp"
#include "DzieckoSz.hpp"
using namespace std;

class Dziecko :
	public Rower
{
public:
	Dziecko(string _numer, double _cena, DzieckoSz* _szczegoly);
	virtual string pobierzSzczegolyJakoTekst();
};
#endif //_DZIECKO_HPP_
