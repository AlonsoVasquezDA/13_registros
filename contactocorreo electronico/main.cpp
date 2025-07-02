#include<iostream>
#include "contacto.h"
#include "gestorcontacto.h"
#define MAX 10
using namespace std;

int main(){
    int n, op,oc,m,p;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Mostrar contactos"<<endl;
        cout<<"3. Modificar contactos."<<endl;
        cout<<"4.-Eliminar contacto"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 3:
                cout << "Ingrese el numero del contacto a modificar: ";
                cin >> m;
                imprimeContacto(lista[m]);
                cout << "Ingrese el nombre: ";
                cin.ignore();
                getline(cin,lista[m].nom);
                cout << "Ingrese el sexo (M/F): ";
                cin >> lista[m].sex;
                cout << "Ingrese el edad: ";
                cin >> lista[m].edad;
                cout << "Ingrese el usuario del correo: ";
                cin >> lista[m].email.user;
                cout << "Ingrese el dominio del correo: ";
                cin >> lista[m].email.domain;
                cout<<endl;
                system("pause");
                break;
            case 4:
                cout<<"Ingrese el contacto a eliminar. "<<endl;
                cin>>p;
                imprimeContacto(lista[p]);
                for (int i=p ; i< n-1 ; i++){
                    lista[i]=lista[i+1];
                }
                n-=1;
                system("pause");
                break;
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
            }
    } while(op != 0);
    return 0;
}