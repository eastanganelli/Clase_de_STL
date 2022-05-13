#include <map>
#include <iostream>
#include <iterator>

using namespace std;
/*
 * @summary : Este es un ejemplo de como usar map
 * @see : https://www.cplusplus.com/reference/map/map/
 */

class cNotas {
    int notas[3];
public:
    cNotas(int n1, int n2, int n3) {
        notas[0] = n1;
        notas[1] = n2;
        notas[2] = n3;
    }
    int getNota(int i) const {
        return i < 3 ? notas[i] : -1;
    }
    float getPromedio() const {
        return (notas[0] + notas[1] + notas[2]) / 3.0;
    }
};

int main() {
    map<string, cNotas> Alumnos;

    Alumnos.insert(make_pair("Juan",  cNotas(10, 10, 10)));
    Alumnos.insert(make_pair("Pedro", cNotas(5, 5, 5)));
    Alumnos.insert(make_pair("Maria", cNotas(8, 8, 8)));
    Alumnos.insert(make_pair("Ana",   cNotas(9, 9, 9)));

    // Buscar por Key
    if (Alumnos.find("Lucas") != Alumnos.end()) {
        cout << "Lucas existe" << endl;
    }
    else {
        cout << "Lucas no existe" << endl;
    }

    std::map<string, cNotas>::iterator it = Alumnos.begin();
    while (it != Alumnos.end()) {
        std::cout << it->first << " :: " << it->second.getPromedio() << std::endl;
        it++;
    }

    system("pause");
    return 0;
}