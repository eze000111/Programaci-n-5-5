#include <iostream>
using namespace std;

void cifras(int numero) {
    if (numero < 10 && numero >= 0) {
    	
        cout <<"El numero ingresado tiene una cifra."<<endl;
    } 
    else if (numero >= 10 && numero < 100) {
        cout <<"El numero ingresado tiene dos cifras."<<endl;
    } 
    else if (numero >= 100 && numero < 1000) {
        cout <<"El numero ingresado tiene tres cifras."<<endl;
    } 
    else {
        cout << "Error: El numero ingresado tiene mas de tres cifra." << endl;
    }
}

int main() {
    int numero;

    cout << "Ingrese un numero menor a 1000 (maximo 3 cifras): ";
    cin >> numero;
    cifras(numero);

    return 0;
}

	
	
	
	
	
	
	

