#include <iostream>
using namespace std;

class vext {

public:
	void carga_entero();
	void valor_ingresado();
	void mostrar();
};

void vext::carga_entero{
cout<<"Ingrese valor: ";
cin>>valor;
}

void vext::valor_ingresado{
cout<<"El valor ingresado es: "<<valor;
}

void vext::mostrar{
cout<<"cadena de numeros"<<endl;
for(int i=0;i=valor;i++){
	cout<<" "<<i<<" "<<endl;
}

}
int main () {
vext vext1;
vext1.carga_entero();
vext1.valor_ingresado();
vext1.mostrar();

	
	
}
