#include "Material.hpp"
using namespace std;

Material::Material(string _material) {
	material = _material;
}

string Material::toString() {
	return material;
}
