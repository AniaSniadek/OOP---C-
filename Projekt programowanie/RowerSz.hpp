#ifndef _ROWERSZ_HPP_
#define _ROWERSZ_HPP_
#include "Producent.hpp"
#include "Rodzaj.hpp"
#include "Material.hpp"

class RowerSz
{
protected:
	Producent producent;
	string model;
	Rodzaj rodzaj;
	Material material;


public:
	
	virtual bool porownaj(RowerSz* inneSz) = 0;

	virtual string pobierzNazweProducenta()
	{
		return producent.toString();
	}
	virtual string pobierzNazweModelu() {
		return model;
	}
	virtual Rodzaj pobierzRodzaj() {
		return rodzaj;
	}
	virtual string pobierzNazweMaterialu() {
		return material.toString();
	}
};

#endif //_ROWERSZ_HPP_

