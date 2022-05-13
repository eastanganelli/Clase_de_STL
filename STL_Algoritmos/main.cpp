/*
* Más ejemplos en
* https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <ctime>

using namespace std;

void Imprimir(vector<int> vect, int n) {
	for (int i = 0; i < n; i++)
		cout << vect[i] << " ";
	cout << endl;
}

void buscar_Max_Min(vector<int> vect) {
	cout << "\nMaximo en vector: ";
	cout << *max_element(vect.begin(), vect.end());

	cout << "\nMinimo en vector: ";
	cout << *min_element(vect.begin(), vect.end());

		
}

int main() {
	int arr[10] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		arr[i] = rand() % (500-1) + 1;

	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> vect(arr, arr + n);

	cout << "Vector: ";
	Imprimir(vect, n);

	//Ordenar de Mayor a Menor
	sort(vect.begin(), vect.end());
	cout << "Post Ordenamiento ";
	Imprimir(vect, n);

	//Girar valores
	reverse(vect.begin(), vect.end());
	cout << "Post Girar ";
	Imprimir(vect, n);

	buscar_Max_Min(vect);

	cout << "\nSumatoria de valores: ";
	cout << accumulate(vect.begin(), vect.end(), 0);
	return 0;
}