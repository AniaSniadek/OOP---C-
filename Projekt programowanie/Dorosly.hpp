#ifndef _DOROSLY_HPP_
#define _DOROSLY_HPP_
#include <string>
#include "Rower.hpp"
#include "DoroslySz.hpp"
using namespace std;

class Dorosly :
	public Rower
{
public:
	Dorosly(string _numer, double _cena, DoroslySz* _szczegoly);
	virtual string pobierzSzczegolyJakoTekst();
};
#endif //DOROSLY_HPP_
