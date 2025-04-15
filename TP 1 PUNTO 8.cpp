#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if (b == 0 )
    return a;
    return mcd(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;

    return 0;
}

