#ifndef _PRODUCENT_HPP_
#define _PRODUCENT_HPP_
#include <string>
using namespace std;

class Producent {
private:
	string nazwa;

public:
	Producent() {};
	Producent(string _nazwa): nazwa(_nazwa) {}
	string toString();
};
#endif //_PRODUCENT_HPP_
	