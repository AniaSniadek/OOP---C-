#include "DoroslySz.hpp"
#include "Rower.hpp"
#include "RowerSz.hpp"



	string Rower::pobierzNumer() {
		return numer;
	}
	double Rower::pobierzCene() {
		return cena;
	}


	RowerSz* Rower::pobierzSzczegoly() {
		return szczegoly;
	}

	void Rower::ustawCene(double _cena) {
		cena = _cena;
	}


