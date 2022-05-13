#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class cAlumno {
	string nombre, apellido;
	time_t ultimaCarga;
	vector<int> Notas;

public:
	cAlumno(string n, string a, time_t fn, vector<int> no) {
		this->nombre	= n;
		this->apellido	= a;
		this->ultimaCarga = fn;
		this->Notas		= no;
	}
	~cAlumno() {}

	string getNombreCompleto() const { return this->nombre + " " + this->apellido; }
	time_t getultimaCarga()	   const { return this->ultimaCarga; }
	vector<int> getNotas() const { return this->Notas; }
	float  getPromedio() {
		float avg = 0;
		for (int i = 0; i < this->Notas.size(); i++)
			avg += this->Notas[i];
		return (avg / this->Notas.size());
	}
};

vector<int> NotasGenerator() {
	srand(time(NULL));

	vector<int> Notas;
	for (int i = 0; i < 3; i++)
		Notas.push_back(rand() % (10 - 1) + 1);

	return Notas;
}

/// @see https://www.geeksforgeeks.org/vector-in-cpp-stl/
int main() {

	vector<cAlumno*> AlumnosLPI;

	cAlumno* auxi = NULL;
	
	auxi = new cAlumno("Cindy", "Aldet", time(0), NotasGenerator());
	AlumnosLPI.push_back(auxi);

	auxi = new cAlumno("Bautista", "Farfaglia", time(0), NotasGenerator());
	AlumnosLPI.push_back(auxi);

	auxi = new cAlumno("Federico", "Scapelatto", time(0), NotasGenerator());
	AlumnosLPI.push_back(auxi);

	auxi = new cAlumno("Melina", "Martinez", time(0), NotasGenerator());
	AlumnosLPI.push_back(auxi);

	auxi = new cAlumno("Flor", "Gonzalez", time(0), NotasGenerator());
	AlumnosLPI.push_back(auxi);

	for (auto i = AlumnosLPI.begin(); i != AlumnosLPI.end(); ++i)
		cout << (*i)->getNombreCompleto() << " " << (*i)->getultimaCarga() << " " << (*i)->getPromedio() << endl;

	cout << "Maxima Capacidad " << AlumnosLPI.capacity() << " de " << AlumnosLPI.size() << endl;

	AlumnosLPI.resize(3);
	cout << "Maxima Capacidad " << AlumnosLPI.capacity() << " de " << AlumnosLPI.size() << endl;

	AlumnosLPI.pop_back();
	for (auto i = AlumnosLPI.begin(); i != AlumnosLPI.end(); ++i)
		cout << (*i)->getNombreCompleto() << " " << (*i)->getultimaCarga() << " " << (*i)->getPromedio() << endl;
	
	AlumnosLPI.clear();
	cout << "Maxima Capacidad " << AlumnosLPI.capacity() << " de " << AlumnosLPI.size() << endl;

	return 0;
}