#include<iostream>
using namespace std;

  struct EMP {
  char nom [30]; 
  char sexo [15];
  double sueldo;
}; 
  int main () {
  EMP EMPLEADOS[100];
  int n,mayor,menor,M,ME;
  cout<<"Cantidad de trabajadores: ";
  cin>>n;
  cout<<endl;
  for (int i=0; i<n ; i++){
    cout<<"Ingrese su nombre: ";
	  cin>>EMPLEADOS[i].nom;
	  cout<<"Ingrese su genero: ";
	  cin>>EMPLEADOS[i].sexo;
	  cout<<"Ingrese su salario: ";
	  cin>>EMPLEADOS[i].sueldo;
	  cout<<endl;
  }
  mayor=EMPLEADOS[0].sueldo;
  for (int i=1; i<n ; i++){
     if ( EMPLEADOS[i].sueldo>mayor){
     	M=i;
	 }
  }
  menor=EMPLEADOS[0].sueldo;
  for (int i=1; i<n ; i++){
  	if ( EMPLEADOS[i].sueldo<menor){
  		ME=i;
	  }
  }
  cout<<"------------------------"<<endl;
  cout<<"Empleado con mayor sueldo: "<<endl;
  cout<<"Su nombre es: "<<EMPLEADOS[M].nom <<endl;
  cout<<"Su sexo es: "<<EMPLEADOS[M].sexo<<endl;
  cout<<"Su sueldo es : "<<EMPLEADOS[M].sueldo<<endl;
  cout<<endl;
  cout<<"------------------------"<<endl;
  cout<<"Empleado con menor sueldo: "<<endl;
  cout<<"Su nombre es: "<<EMPLEADOS[ME].nom <<endl;
  cout<<"Su sexo es: "<<EMPLEADOS[ME].sexo<<endl;
  cout<<"Su sueldo es : "<<EMPLEADOS[ME].sueldo<<endl;
  cout<<endl;
  return 0;
}