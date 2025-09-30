#include <iostream>
using namespace std;
void cargarAlturas(float alturas[5]) {
    cout << "Ingrese las alturas de 5 personas (en metros):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Altura de la persona " << i + 1 << ": ";
        cin >> alturas[i];
    }
}
float calcularPromedio(float alturas[5]) {
    float suma = 0.0;
    for (int i = 0; i < 5; i++) {
        suma += alturas[i];
    }
    return suma / 5;
}
void contarAlturas(float alturas[5], float promedio) {
    int masAltas = 0;
    int masBajas = 0;

    for (int i = 0; i < 5; i++) {
        if (alturas[i] > promedio) {
            masAltas++;
        } else if (alturas[i] < promedio) {
            masBajas++;
        }
    }

    cout << "N?mero de personas m?s altas que el promedio: " << masAltas << endl;
    cout << "N?mero de personas m?s bajas que el promedio: " << masBajas << endl;
}

int main() {
    float alturas[5];
    cargarAlturas(alturas);
    float promedio = calcularPromedio(alturas);
    cout << "El promedio de las alturas es: " << promedio << " metros." << endl;
    contarAlturas(alturas, promedio);
}

