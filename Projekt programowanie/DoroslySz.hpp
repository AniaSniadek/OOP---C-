#ifndef _DOROSLYSZ_HPP_
#define _DOROSLYSZ_HPP_
#include <string>
#include "RowerSz.hpp"
#include "Producent.hpp"
#include "Rodzaj.hpp"
#include "Material.hpp"

using namespace std;

class DoroslySz :
	public RowerSz
{

public:
	DoroslySz(Producent _producent, string _model, Rodzaj _rodzaj, Material _material);

	virtual bool porownaj(RowerSz* inneSz);

};
#endif //_DOROSLYSZ_HPP_

