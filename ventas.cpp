#include<iostream>
#include<string>
using namespace std;

struct PRO {
   string nom;
    float precio;
};

struct VEN {
      int idventa;
   string producto;
      int cantidad;
    float ptotal; 
};

int main (){
    PRO PRODUCTOS;
    VEN VENTAS;
    int op;
    string pro;
    do{
    cout<<"------------MENU------------";
    cout<<endl<<endl;
    cout<<"1.-Registrar un nuevo producto."<<endl;;
    cout<<"2.-Listar los productos registrados."<<endl;
    cout<<"3.-Buscar un producto."<<endl;
    cout<<"4.-Actualizar los datos de un producto."<<endl;
    cout<<"5.-Eliminar un producto."<<endl;
    cout<<"6.-Registrar una venta."<<endl;
    cout<<"7.-Listar las ventas realizadas."<<endl;
    cout<<"8.-Calcular el total de ventas realizadas."<<endl;
    cout<<"9.-Salir del programa."<<endl;
    cout<<endl<<endl;
    cout<<"Ingrese alguna de las opciones:";
    cin>>op;
    cout<<endl;
    switch (op){
        case 1:
            cout<<"--------Ingresar el nuevo producto----------";
            cout<<endl;
            cout<<"Escriba el nuevo producto: ";
            cin>>pro;  
              break;
        case 2:
            cout<<"-----------------lista de productos ----------";
            cout<<endl;
              break;
        case 3:
              break;
        case 4: 
              break;
        case 5:
              break;
        case 6:
              break;
        case 7:
              break;
        case 8:
              break;     
        case 9: 
            cout<<"Saliendo del programa";
               break;
        default :
            cout<<"Opcion no valida";
            system ("cls");
               break;       
    } 
} while (op!=9);
    return 0;
}