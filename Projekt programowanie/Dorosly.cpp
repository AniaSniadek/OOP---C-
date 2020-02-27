#include "Dorosly.hpp"

Dorosly::Dorosly(string _numer, double _cena, DoroslySz* _szczegoly) {
		numer = _numer;
		cena = _cena;
		szczegoly = _szczegoly;
	}

string Dorosly::pobierzSzczegolyJakoTekst() {
	stringstream retSzczegoly;
	retSzczegoly << "Producent: " << szczegoly->pobierzNazweProducenta() << "| cena: " << fixed << setprecision(2) << pobierzCene() << "| model: " << szczegoly->pobierzNazweModelu() << "| rodzaj: " << szczegoly->pobierzRodzaj().toString() << "| material: " << szczegoly->pobierzNazweMaterialu();
	return retSzczegoly.str();
}

