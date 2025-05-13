#include <iostream>

using namespace std;

int main() {
    int numeros[5] = {3, 4, 7, 8, 5};
    int suma = 0;
    float promedio;

    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    promedio = suma / 5.0; 

    cout << "El promedio de todos los elementos del arreglo es: " << promedio << endl;

    return 0;
}

