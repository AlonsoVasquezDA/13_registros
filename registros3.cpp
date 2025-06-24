#include<iostream>
#include<string>
using namespace std;
    struct PER {
    string nom;
       int fecha[3];
};
int main (){
    PER PERSONAS[100];
    int n,mes;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;
    cout<<endl;
    for (int i=0 ; i<n ; i++ ){
        cout<<"Escriba su nombre: ";
        cin>>PERSONAS[i].nom;
        cout<<"Escrina su dia de nacimiento ( dd / mm / aaaa ) ";
        cin>>PERSONAS[i].fecha[0]>>PERSONAS[i].fecha[1]>>PERSONAS[i].fecha[2];
        cout<<endl;
    }
    for (int i=0 ; i<n ; i++ ){
        cout<<PERSONAS[i].nom<<"   ";
        cout<<PERSONAS[i].fecha[0];
        cout<<PERSONAS[i].fecha[1];
        cout<<PERSONAS[i].fecha[2];
        cout<<endl;
        cout<<"-------------------"<<endl;
    }
    cout<<"Ingrese un mes ( mm ): ";
    cin>>mes;
    while ( mes != 0 ){
        for ( int i=0 ; i<n ; i++){
            if ( PERSONAS[i].fecha[1] == mes ){
                cout<<PERSONAS[i].nom<<"   ";
                cout<<PERSONAS[i].fecha[0]<<" / ";
                cout<<PERSONAS[i].fecha[1]<<" / ";
                cout<<PERSONAS[i].fecha[2];
                cout<<endl;
            }
        }
    cout<<"Ingrese un mes ( mm ): ";
    cin>>mes;
    }
    return 0;
} 