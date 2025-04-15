#include <iostream>
using namespace std;


int suma (int a, int b, int c){
	int suma=a+b+c;
	return suma;
}

int main() {
	int a;
	int b;
	int c;
	int resultado;
	
	cout<<"Ingrese tres valores"<<endl;
	
	cout<<"Valor 1: ";
	cin>>a;
	cout<<"Valor 2: ";
	cin>>b;
	cout<<"Valor 3: ";
	cin>>c;
	
	if ((a<=10)&&(b<10)&&(c<10)) {
		resultado=suma(a,b,c);
		cout<<"Todos los numeros son menores a 10";
	}	
	else {
	cout<<"no son todos mayores a 10"<<endl;
}
		return 0;
		
	}

