#include <iostream>
#include <algorithm>
using namespace std;

class CNumeros {
private:
    int n1, n2, n3;
public:
    void cargar() {
        cin >> n1 >> n2 >> n3;
    }
    void calcular() {
        cout << "Minimo: " << min({n1, n2, n3}) << ", Maximo: " << max({n1, n2, n3}) << endl;
    }
};

int main() {
    CNumeros obj;
    obj.cargar();
    obj.calcular();
    return 0;
}

