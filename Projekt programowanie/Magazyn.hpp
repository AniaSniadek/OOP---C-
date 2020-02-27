#ifndef _MAGAZYN_HPP_
#define _MAGAZYN_HPP_
#include <string>
#include <vector>
#include <string>
#include <iostream>
#include "Rower.hpp"
#include "RowerSz.hpp"
#include "DzieckoSz.hpp"
#include "DoroslySz.hpp"


using namespace std;

class Magazyn {

	static vector <Rower*> lista;

public:
	Magazyn();
	static vector<Rower*> pobierzMagazyn();

	void dodajRower(Rower* rower);

	int WyszukajIndeks(string numer);

	virtual Rower* PobierzRowerZIndeksu(int idx);

	vector <Rower*> szukaj(RowerSz* szukajSz);

	void wyswietlRowery();


};
#endif //_MAGAZYN_HPP_
