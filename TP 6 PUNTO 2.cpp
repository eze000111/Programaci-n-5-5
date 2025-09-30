#include<iostream>
#include<vector>
using namespace std;
void carga(vector<int> &carga) {
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> carga[i];
    }
}
void imprimir(vector<int>&carga){
    for(int i=0; i<5; i++){
        cout<<"Numero "<<i+1<<" : "<<carga[i]<<"  \n";
    }
}
int main(){
    vector<int> a(8);
    carga(a);
    imprimir(a);
    

    return 0;
}
