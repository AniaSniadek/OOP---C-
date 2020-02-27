#include "Dziecko.hpp"

Dziecko::Dziecko(string _numer, double _cena, DzieckoSz* _szczegoly)
{
	numer = _numer;
	cena = _cena;
	szczegoly = _szczegoly;
}

string Dziecko::pobierzSzczegolyJakoTekst() {
	stringstream retSzczegoly;
	DzieckoSz* dzSzczeg = (DzieckoSz*)szczegoly;
	retSzczegoly << "Producent: " << szczegoly->pobierzNazweProducenta() << "| cena: " << fixed << setprecision(2) << pobierzCene() << "| model: " << szczegoly->pobierzNazweModelu() << "| rodzaj: " << szczegoly->pobierzRodzaj().toString() << "| material: " << szczegoly->pobierzNazweMaterialu() << "| liczba kol: " << dzSzczeg->pobierzIloscKol();
	return retSzczegoly.str();
}