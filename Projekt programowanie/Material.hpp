#ifndef _MATERIAL_HPP_
#define _MATERIAL_HPP_
#include <string>
using namespace std;

class Material {
private:
	string material;
public:
	Material() {};
	Material(string _material);
	string toString();
};
#endif //_MATERIAL_HPP_
