#include<iostream>
#include<string>
using namespace std;
struct PER {
	string nom;
	string dni;
	int edad;
};
int main(){
    PER PERSONAS[100];
	int n,c=0,suma=0;
	double prom=0;
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cout<<endl;
	for (int i=0 ; i<n ; i++){
		cout<<"Ingrese su nombre: ";
		cin>> PERSONAS[i].nom;
		cout<<"Ingrese su edad: ";
		cin>> PERSONAS[i].edad;
		cout<<"Ingrese su DNI: ";
		cin>> PERSONAS[i].dni;
		cout<<endl;
	if ( PERSONAS[i].edad > 50 ){
		c += 1;
	}
    }
	for (int i=0 ; i<n ; i++){
		suma += PERSONAS[i].edad;
	}
	prom = (suma/n);
	    cout<<"-----------------------------"<<endl;
		cout<<"Las cantidad de personas mayores a 50 anios son: "<< c <<endl;
		cout<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"El promedio de las edades son: "<< prom << endl;
		cout<<endl;
		cout<<"-----------------------------"<<endl;
	for (int i=0 ; i<n ; i++){
		cout<<"Su nombre es: "<< PERSONAS[i].nom <<endl;
		cout<<"Su edad es: "<< PERSONAS[i].edad <<endl;
		cout<<"Su DNI es: "<< PERSONAS[i].dni <<endl;
		cout<<endl;
    }
    return 0;
}