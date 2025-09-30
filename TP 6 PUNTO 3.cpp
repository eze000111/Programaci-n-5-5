#include<iostream>
#include<vector>
using namespace std;
void carga(vector<int> &carga) {
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese un numero: ";
        cin >> carga[i];
    }
    cout<<"\n paasameos al proximo vector \n";
}
void suma(vector<int>&carga1,vector<int>&carga2,vector<int>&carga3){
    for (int i = 0; i < 3; i++) {
        carga3[i] = carga1[i] + carga2[i];
    }
    
}
void imprimir( vector<int> &v,string a) {
    cout << a << ": ";
    for (int i = 0; i < 3; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a(8);
    vector<int> b(8);
    vector<int> c(8);
    carga(a);
    carga(b);
    carga(c);
    suma(a,b,c);
    imprimir(a, "Vector A");
    imprimir(b, "Vector B");
    imprimir(c, "Vector C (suma)");
    
    

    return 0;
}
