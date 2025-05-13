#include <iostream>

using namespace std;

int main() {

    int numeros[5] = {3, 4, 7, 8, 5};
    int suma = 0;
    int opcion;

    for (int i=0; i<5;i++) {
        cout << numeros[i] * 2<< endl;
    }

    int valor;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el nuevo valor: ";
            cin >> valor;
            numeros[0] = valor;
            break;

        case 2:
            cout << "Ingrese el nuevo valor: ";
            cin >> valor;
            numeros[1] = valor;
            break;

        case 3:
            cout << "Ingrese el nuevo valor: ";
            cin >> valor;
            numeros[2] = valor;
            break;

        case 4:
            cout << "Ingrese el nuevo valor: ";
            cin >> valor;
            numeros[3] = valor;
            break;

        case 5:
            cout << "Ingrese el nuevo valor: ";
            cin >> valor;
            numeros[4] = valor;
            break;

        default:
            cout << "opcion invalida" << endl;
            break;
    }

    cout << "verifique el nuevo valor ingresado" << endl;
    for (int i = 0; i < 5; i++) {
        cout <<numeros[i]<<endl;
    }
     
    
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
