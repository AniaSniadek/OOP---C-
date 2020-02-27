#include "DzieckoSz.hpp"

DzieckoSz::DzieckoSz(Producent _producent, string _model, Rodzaj _rodzaj, Material _material, int _iloscKol)
{
	producent = _producent;
	model = _model;
	rodzaj = _rodzaj;
	material = _material;
	iloscKol = _iloscKol;
}

bool DzieckoSz::porownaj(RowerSz* inneSz) {
	if (inneSz->pobierzNazweProducenta() != producent.toString() && !inneSz->pobierzNazweProducenta().empty()) {
		return false;
	}
	else if (inneSz->pobierzNazweMaterialu() != material.toString() && !inneSz->pobierzNazweMaterialu().empty()) {
		return false;
	}
	else if ((!model.empty()) && (inneSz->pobierzNazweModelu() != model) && !inneSz->pobierzNazweModelu().empty()) {
		return false;
	}
	else if (inneSz->pobierzRodzaj() != rodzaj) {
		return false;
	}
	return true;
}

int DzieckoSz::pobierzIloscKol() {
	return iloscKol;
}


