#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <iomanip>

#include "DoroslySz.hpp"
#include "RowerSz.hpp"
#include "Dorosly.hpp"
#include "Dziecko.hpp"
#include "DzieckoSz.hpp"
#include "Magazyn.hpp"

using namespace std;


int main() {

	//przygotowanie srodowiska sklepu
	Producent prod1("Kross");
	Producent prod2("Author");

	Rodzaj rodz1("trekingowy");
	Rodzaj rodz2("szosowy");
	Rodzaj rodz3("gorski");

	Material mate1("aluminiowy");
	Material mate2("stalowy");
	Material mate3("carbon");

	//tworzenie produktow
	DoroslySz sz1(prod1, "Navigto", rodz1, mate1);
	Dorosly rower1("M945", 980.00, &sz1);
	DoroslySz sz2(prod1, "Jasen", rodz2, mate2);
	Dorosly rower2("G570", 799.00, &sz2);
	DoroslySz sz3(prod2, "Kim", rodz1, mate2);
	Dorosly rower3("P456", 459.00, &sz3);
	DoroslySz sz4(prod2, "Olsen", rodz3, mate3);
	Dorosly rower4("S909", 1000.00, &sz4);
	DoroslySz sz5(prod1, "Bravo", rodz3, mate1);
	Dorosly rower5("F538", 999.00, &sz5);

	DzieckoSz sz6(prod1, "Kido", rodz1, mate1, 2);
	Dziecko rower6("P456", 459.00, &sz6);
	DzieckoSz sz7(prod1, "Asid", rodz1, mate3, 2);
	Dziecko rower7("A345", 298.00, &sz7);
	DzieckoSz sz8(prod2, "Bobo", rodz1, mate1, 4);
	Dziecko rower8("D387", 199.00, &sz8);
	DzieckoSz sz9(prod2, "Jim", rodz1, mate2, 2);
	Dziecko rower9("O231", 537.00, &sz9);
	DzieckoSz sz10(prod1, "Niko", rodz1, mate3, 4);
	Dziecko rower10("J505", 101.00, &sz10);

	//dodanie produktów do magazynu
	Magazyn magazyn;
	magazyn.dodajRower(&rower1);
	magazyn.dodajRower(&rower2);
	magazyn.dodajRower(&rower3);
	magazyn.dodajRower(&rower4);
	magazyn.dodajRower(&rower5);
	magazyn.dodajRower(&rower6);
	magazyn.dodajRower(&rower7);
	magazyn.dodajRower(&rower8);
	magazyn.dodajRower(&rower9);
	magazyn.dodajRower(&rower10);

	//wyswietlenie produktow z magazynu
	string pytanie;
	cout << "Czy wyswietlic wszystkie rowery w magazynie? [Tak/Nie]" << endl; 
	cin >> pytanie;														
	cout << endl;
	if (pytanie == "Tak") {
		magazyn.wyswietlRowery();
	}
	else {
		cout << "Zamiast wyswietlic wszystkie rowery wyszukajmy jeden przykladowy po numerze seryjnym (np. P456)" << endl;
	}
	cout << endl;
	
	//wpisanie do konsoli jaki numer roweru szukamy
	string numer;
	string pytanie2;
	int cena;
	string szczegoly;

	cout << "Podaj numer roweru ktory szukasz: ";
	cin >> numer;
	cout << endl;
	int indexWyszukanegoRoweru = magazyn.WyszukajIndeks(numer);
	if (indexWyszukanegoRoweru == -1) {
		cout << "Nie ma takiego roweru w magazynie" << endl;
	}
	else {
		auto wyszukanyRower = magazyn.PobierzRowerZIndeksu(indexWyszukanegoRoweru);
		cout << wyszukanyRower->pobierzSzczegolyJakoTekst() << endl;
		cout << endl;
		cout << "Czy zmienic cene wyszukanego roweru? [Tak/Nie]" << endl;
		cin >> pytanie2;
		if (pytanie2 == "Tak") {
			cout << "Podaj cene: ";
			cin >> cena;
			cout << endl;
			wyszukanyRower->ustawCene(cena);
			cout << "Szczegoly roweru po zmianie ceny: " << endl;
			szczegoly = wyszukanyRower->pobierzSzczegolyJakoTekst();
			cout << szczegoly << endl;
		}
		else {
			cout << "Cena nie zostala zmieniona. " << endl;
		}
	}
	
	cout << endl;
	cout << "Na koniec prezentacja wyszukiwania rowerow. Wyszukuje wszystkie stalowe szosowe: " << endl;
	
	//definiuje kryteria wyszukiwania w szczegolach
	DoroslySz krytWysz = DoroslySz(Producent(), "", Rodzaj("szosowy"), Material("stalowy"));
	vector<Rower*> zgodneRowery = magazyn.szukaj(&krytWysz);
		
	for (size_t i = 0; i < zgodneRowery.size(); i++)
	{
		cout << zgodneRowery[i]->pobierzSzczegolyJakoTekst() << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Dziekuje za skorzystanie z programu [nacisnij klawisz aby zamknac program]. " << endl;
	

	getchar();
	getchar();
	return 0;

}
	
		
