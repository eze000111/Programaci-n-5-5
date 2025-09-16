#include <iostream>
using namespace std;

class Operaciones {
private:
    int a, b;
public:
    void cargar() {
        cout << "Ingrese primer valor: ";
        cin >> a;
        cout << "Ingrese segundo valor: ";
        cin >> b;
    }

    void suma() {
        cout << "Suma: " << (a + b) << endl;
    }

    void resta() {
        cout << "Resta: " << (a - b) << endl;
    }

    void multiplicacion() {
        cout << "Multiplicacion: " << (a * b) << endl;
    }

    void division() {
        if (b != 0)
            cout << "Division: " << (a / b) << endl;
        else
            cout << "No se puede dividir por cero." << endl;
    }
};

int main() {
    Operaciones op;
    op.cargar();
    op.suma();
    op.resta();
    op.multiplicacion();
    op.division();
    return 0;
}

