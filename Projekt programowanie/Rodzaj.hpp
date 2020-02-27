#ifndef _RODZAJ_HPP_
#define _RODZAJ_HPP_
#include <string>
using namespace std;

class Rodzaj {
private:
	string rodzaj;
public:
	Rodzaj() {};
	Rodzaj(string _rodzaj) : rodzaj(_rodzaj) {}
	string toString();

	bool operator ==(const Rodzaj &rodz)
	{
		if (this->rodzaj == rodz.rodzaj)
			return true;
		else
			return false;

	}

	bool operator !=(const Rodzaj &rodz)
	{
		if (this->rodzaj != rodz.rodzaj)
			return true;
		else
			return false;

	}
};
#endif //_RODZAJ_HPP_

