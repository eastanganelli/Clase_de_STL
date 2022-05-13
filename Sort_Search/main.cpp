#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

void ejemploOrdenamiento() {
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    int asize = sizeof(a) / sizeof(a[0]);
    cout << "Pre Ordernar : \n";

    show(a, asize);

    sort(a, a + asize);

    cout << "\n\nPost Ordernar :\n";

    show(a, asize);
}

void ejemploBusqueda() {
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nArray : \n";
    show(a, asize);

    sort(a, a + asize);

    show(a, asize);

    //Buscamos el valor 2
    cout << "\n\nBusqueda binaria";
    if (binary_search(a, a + 10, 2))
        cout << "\nEncontrado";
    else
        cout << "\nNo se encuentra";

    //Buscamos el valor 10
    if (binary_search(a, a + 10, 10))
        cout << "\nEncontrado";
    else
        cout << "\nNo se encuentra";
}

int main() {
    ejemploOrdenamiento();
    ejemploBusqueda();

    return 0;
}