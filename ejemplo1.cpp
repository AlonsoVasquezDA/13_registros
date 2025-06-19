#include<iostream>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12],salario;
};

int main(){
    EMP EMPLEADOS[100];
    int n;
    cout<<"Ingrese la cantidad de trabajadores: ";
    cin >>n;
    cin.ignore();
    for (int i = 0; i<n ; i++){
        cout<<"Digite el numero del empleado: ";
        cin >>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"Escriba el nombre del empleado: ";
        getline(cin, EMPLEADOS[i].nom);
        cout<<"Ingrese el dinero de venta: "<<endl;
        for(int j=0 ; j<12 ; j++){
            cin >>EMPLEADOS[i].ven[j];
        }
            cout<<"Ingrese su salario: ";
            cin >>EMPLEADOS[i].salario;
    }
    for (int i=0; i<n ; i++){
        cout<<"Numero del trabajador: " <<EMPLEADOS[i].num<<endl;
        cout<<"Nombre del trabajador: "<<EMPLEADOS[i].nom<<endl;
        cout<<"Cantidad de ventas: ";
        for (int j=0; j<12 ; j++){
            cout<<EMPLEADOS[i].ven[j]<< " ";
        }
    cout<<"\n";;
    cout<<"Su cantidad de salario: "<<EMPLEADOS[i].salario<<endl<<endl;
    }
    return 0;
}