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
    for (int i = 0; i<n ; i++){
        cout<<"Digite el numero del empleado: ";
        cin >>EMPLEADOS[i].num;
        cout<<"Escriba el nombre del empleado: ";
        cin >>EMPLEADOS[i];
        for(int j=0 ; j<12 ; j++){
            cout<<"Ingrese el dinero de venta: "<<endl;
            cin >>EMPLEADOS[i];
            cout<<"Ingrese su salario: ";
        }
    }
    return 0;
}


