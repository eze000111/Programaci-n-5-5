#include <iostream>
using namespace std;

class CNumeros {
public:
    bool esPerfecto(int num) {
        int suma = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) suma += i;
        }
        return suma == num;
    }
    void mostrarPerfectos(int N) {
        for (int i = 2; i <= N; i++) {
            if (esPerfecto(i)) cout << i << endl;
        }
    }
};

int main() {
    int N;
    cin >> N;
    CNumeros obj;
    obj.mostrarPerfectos(N);
    return 0;
}

