#ifndef _ROWER_HPP_
#define _ROWER_HPP_
#include <string>
#include <sstream>
#include <iomanip>
#include "RowerSz.hpp"

class Rower {
protected:
	string numer;
	double cena;
	RowerSz* szczegoly;
public:

	virtual string pobierzNumer();
	virtual double pobierzCene();

	virtual void ustawCene(double _cena);

	virtual RowerSz* pobierzSzczegoly();
	virtual string pobierzSzczegolyJakoTekst()=0;

	
};
#endif //_ROWER_HPP_

