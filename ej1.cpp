#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    void cargar() {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese edad: ";
        cin >> edad;
    }

    void mostrar() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        if (edad >= 18)
            cout << "Es mayor de edad." << endl;
        else
            cout << "No es mayor de edad." << endl;
    }
};

int main() {
    Persona p1, p2;
    cout << "Persona 1:" << endl;
    p1.cargar();
    cout << "Persona 2:" << endl;
    p2.cargar();

    cout << "--- Datos ---" << endl;
    p1.mostrar();
    p2.mostrar();

    return 0;
}

