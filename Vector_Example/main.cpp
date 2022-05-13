#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Alumno {
	string nombre, apellido;
	time_t natalicio;

	vector<string> MateriasCursando;

public:
	Alumno(string n, string a, time_t fn, vector<string> mc) {
		this->nombre = n;
		this->apellido = a;
		this->natalicio = fn;
		this->MateriasCursando = mc;
	}
	~Alumno() {}

	string getNombreCompleto() const { return this->nombre + " " + this->apellido; }
	time_t getNatalicio()	   const { return this->natalicio; }
	vector<string> getMateriasCursando() const { return this->MateriasCursando; }


};

int main() {

	vector<Alumno>* AlumnosLPI = new vector<Alumno>(6);

	return 0;
}