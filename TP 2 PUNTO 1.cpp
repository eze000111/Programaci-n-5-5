#include <iostream>

using namespace std;

int main() {
	
    int numeros[5] = {3, 4, 7, 8, 5};
    int suma = 0;

    for (int i=0;i< 5;i++) {
        suma += numeros[i];
    }
    


    cout << "la suma de todos los vectores es  " << suma << endl;
}

