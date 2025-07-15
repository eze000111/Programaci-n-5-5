#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "ingrese la cantidad de elementos: ";
    cin >> N;

    vector<int> V(N);
    int suma = 0;

    cout << "ingrese " << N << " valores:";
    for (int i = 0; i < N; i++) {
        cin >> V[i];
        suma += V[i];
    }
    double prom = (double)suma / N;
    int E = 0, pos = -1;

    for (int i = 1; i < N; i++) {
        if (V[i] > prom) {
            int A = prom - V[i - 1];
            int B = V[i] - prom;
            
            if (A < B){
                E = V[i - 1];}
                
            else {
                E = V[i];}

            pos = i;
        }
    }

    cout << "PROM = " << prom << endl;
    cout << "E = " << E << endl;
    cout << "POS = " << pos << endl;
}

