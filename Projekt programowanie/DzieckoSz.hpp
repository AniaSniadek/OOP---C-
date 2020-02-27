#ifndef _DZIECKOSZ_HPP_
#define _DZIECKOSZ_HPP_
#include <string>
#include "RowerSz.hpp"
#include "Producent.hpp"
#include "Rodzaj.hpp"
#include "Material.hpp"
class DzieckoSz :
	public RowerSz
{
public:
	int iloscKol;
public:
	DzieckoSz(Producent _producent, string _model, Rodzaj _rodzaj, Material _material, int _iloscKol);
	
	virtual bool porownaj(RowerSz* inneSz);

	virtual int pobierzIloscKol();

	
};
#endif //_DZIECKOSZ_HPP_
