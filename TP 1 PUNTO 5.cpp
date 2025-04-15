#include <iostream>
using namespace std;

 void P(float porcentaje){
 	
 	 if (porcentaje >= 90) {
        cout << "Nivel maximo." <<endl;
    } 
    else if (porcentaje >= 75) {
        cout << "Nivel medio." <<endl;
    } 
    else if (porcentaje >= 50) {
        cout << "Nivel regular." <<endl;
    } 
    else {
        cout << "Fuera de nivel." <<endl;
    }
}

int main () {
	
	int preguntas;
	int respuestas;
	float porcentaje;
	
	cout<<"Ingrese la cantidad de preguntas: ";
	cin>>preguntas;
	cout<<"Ingrese la cantidad de respuestas: ";
	cin>>respuestas;
	
	porcentaje =(respuestas * 100.0) / preguntas;

    cout << "Porcentaje de respuestas correctas: " << porcentaje << "%" << endl;

    P(porcentaje);

    return 0;
}
	
	
	
	

