#include <iostream>
using namespace std;

float descuento(int cantidad, float precio) {
    float total = cantidad * precio;

    if (cantidad == 2) {
        total *= 0.90;
    } else if (cantidad == 3) {
        total *= 0.85;
    } else if (cantidad == 4) {
        total *= 0.80;
    }

    return total;
}

int main() {
    int entradas;
    float precio;

    cout << "Ingrese precio de una entrada: ";
    cin >> precio;

    cout << "Ingrese numero de entradas que va a comprar para el espectaculo (SOLO PUEDE COMPRAR 4): ";
    cin >> entradas;

    if (entradas >= 1 && entradas <= 4) {
        float total = descuento(entradas, precio);
        cout << "Total a pagar por " << entradas << " entradas es de: " << total << endl;
    } else {
        cout << "Solo se pueden 4 entradas." << endl;
    }

    return 0;
}

