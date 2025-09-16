#include <iostream>
using namespace std;

class Triangulo {
private:
    int lado1, lado2, lado3;
public:
    void inicializar() {
        cout << "Ingrese lado 1: ";
        cin >> lado1;
        cout << "Ingrese lado 2: ";
        cin >> lado2;
        cout << "Ingrese lado 3: ";
        cin >> lado3;
    }

    void ladoMayor() {
        int mayor = lado1;
        if (lado2 > mayor) mayor = lado2;
        if (lado3 > mayor) mayor = lado3;
        cout << "El lado mayor es: " << mayor << endl;
    }

    void esEquilatero() {
        if (lado1 == lado2 && lado2 == lado3)
            cout << "El triangulo es equilatero." << endl;
        else
            cout << "El triangulo NO es equilatero." << endl;
    }
};

int main() {
    Triangulo t;
    t.inicializar();
    t.ladoMayor();
    t.esEquilatero();
    return 0;
}

