#include <iostream>
using namespace std;


class ve {
	
	private: 
    int mayor(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }
	int num1,num2;
	
	public:
		void carga_entero();
		void valor_mayor();
};

 void ve::carga_entero(){
 	cout<<"Ingrese el primer numeri";
 	cin>>num1;
 	cout<<"Ingrese el segundo numero";
 	cin>>num2;
 }
 
 void ve::valor_mayor() {
 	 cout << "El mayor de los dos numeros es: " << mayor(num1, num2);
 }




int main () {
	ve.carga_entero();
	ve.valor_mayor();
}
