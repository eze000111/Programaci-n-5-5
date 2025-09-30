#include <iostream>
#include <vector>
using namespace std;
void cargarVector(vector<int> &vec) {
    cout << "Ingrese 10 valores enteros para el vector:" << endl;
    for (int i = 0; i < 10; i++) {
        int valor;
        cout << "Elemento " << i + 1 << ": ";
        cin >> valor;
        vec.push_back(valor);
    }
}
bool estaOrdenado(const vector<int> &vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        if (vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> vectorElementos;
    cargarVector(vectorElementos);
    if (estaOrdenado(vectorElementos)) {
        cout << "El vector est? ordenado de menor a mayor." << endl;
    } else {
        cout << "El vector NO est? ordenado de menor a mayor." << endl;
    }

    return 0;
}

