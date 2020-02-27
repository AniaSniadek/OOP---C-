#include "Magazyn.hpp"
#include "Dorosly.hpp"
#include "Dziecko.hpp"


using namespace std;

vector <Rower*> Magazyn::lista;

	Magazyn::Magazyn(){
		//lista.clear();
	}

	vector<Rower*> Magazyn::pobierzMagazyn() {
		return lista;
	}


	void Magazyn::dodajRower(Rower* rower) {
		lista.push_back(rower);
	}

	int Magazyn::WyszukajIndeks(string numer) {
		for (int i = 0; i < lista.size(); i++) {
			if (lista[i]->pobierzNumer() == numer) {
				cout << "Znalazlem rower o takim numerze:" << endl;
				return i;
			}
		}
		cout << "Nie ma roweru o tym numerze" << endl;
		return -1;
	}

	Rower* Magazyn::PobierzRowerZIndeksu(int idx) {
		return lista.at(idx);
	}

	vector <Rower*> Magazyn::szukaj(RowerSz* szukajSz) {
		vector <Rower*> pasujaceRowery;
		for (Rower* p : lista) {
			if (p->pobierzSzczegoly()->porownaj(szukajSz)) {
				pasujaceRowery.push_back(p);
			}
		}
		return pasujaceRowery;
	}

	void Magazyn::wyswietlRowery() {
		cout << "Lista rowerow: " << endl;
		for (Rower* p : lista) {
			
			cout << p->pobierzSzczegolyJakoTekst() << endl;
		}
	}
