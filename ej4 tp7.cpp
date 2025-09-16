#include <iostream>
using namespace std;

class Cuadrado {
private:
    int lado;
public:
    void cargar() {
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
    }

    void perimetro() {
        cout << "Perimetro: " << (lado * 4) << endl;
    }

    void superficie() {
        cout << "Superficie: " << (lado * lado) << endl;
    }
};

int main() {
    Cuadrado c;
    c.cargar();
    c.perimetro();
    c.superficie();
    return 0;
}

