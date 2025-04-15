
#include<iostream>
using namespace std;

int main(){
	int n1;
	int n2;
	int n3;
	int prom;
	cout<<"ingrese la nota 1: ";
	cin>>n1;
	cout<<"ingrese la nota 2: ";
	cin>>n2;
    cout<<"ingrese la nota 3: ";
	cin>>n3;
	
	prom=(1+2+3)/3;
	
	if(prom>=7){
	 cout<<"aprobado"<<endl;
	}
	else if(prom>=4){
		cout<<"regular"<<endl;
	}
	else{
		cout<<"reprobado"<<endl;
	}
	return 0;
}
