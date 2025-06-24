#include<iostream>
#include<string>
using namespace std;
    struct PER {
    string nom;
       int fecha[3];
};
int main (){
    PER PERSONAS[100];
    int n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;
    for (int i=0 ; i<n ; i++ ){
        cout<<"Escriba su nombre: ";
        cin>>PERSONAS[i].nom;
        cout<<"Escrina su dia de nacimiento ( dd / mm / aaaa )";
        cin>>PERSONAS[i].fecha[0]>>PERSONAS[i].fecha[0]>>PERSONAS[i].fecha[0];
        cout<<endl;
    }
    for ( int i=0 ; i<n ; i++ ){
        cout<<
    }
}