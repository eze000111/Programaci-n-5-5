#include <iostream>
#include <vector>
using namespace std;
void carga(vector<int> &carga) {
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese un numero: ";
        cin >> carga[i];
    }
}
void acumulado(vector<int> &carga){
    int acumuladoTotal = 0;
    int acumuladoMayores36 = 0;
    int cantidadMayores50 = 0;

    
    for (int i = 0; i < 8; i++) {
        acumuladoTotal += carga[i];
        if (carga[i] > 36) {
            acumuladoMayores36 += carga[i];
        }
        if (carga[i] > 50) {
            cantidadMayores50++;
        }
    }
    cout << "\nValor acumulado de todos los elementos: " << acumuladoTotal << endl;
    cout << "Valor acumulado de los elementos mayores a 36: " << acumuladoMayores36 << endl;
    cout << "Cantidad de valores mayores a 50: " << cantidadMayores50 << endl;
}

int main() {
    vector<int> a(8);
    carga(a);
    acumulado(a);
    

    return 0;
}
