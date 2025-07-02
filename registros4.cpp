#include<iostream>
#include<string>
using namespace std;
struct ATLE {
  string nom;
  string datos[3];
  int medallas;
};
int main (){
    ATLE ATLETAS[100];
    int n,maxmedallas=-1,indicemedallas=-1;
    string pais;
    cout<<"Ingrese la cantidad de atletas: ";
    cin>>n;
    cout<<endl;
    for (int i=0 ; i<n ; i++ ){
        cout<<"Escriba su nombre: ";
        cin>>ATLETAS[i].nom;
        cout<<"Ingrese su pais: ";
        cin>>ATLETAS[i].datos[0];
        cout<<"Ingrese su disciplina: ";
        cin>>ATLETAS[i].datos[1];
        cout<<"Ingrese su numero de medallas: ";
        cin>>ATLETAS[i].datos[2];
        cout<<endl;
    }
    cout<<"Ingrese el nombre de un pais de los atletas: ";
    cin>>pais;
    for (int i=0 ; i<n ; i++ ){
        if ( ATLETAS[i].datos[0] == pais){
           if (ATLETAS[i].medallas > maxmedallas ){
              maxmedallas=ATLETAS[i].medallas;
              indicemedallas = i;
           }
        }
    }
    if (indicemedallas == -1 ){
        cout<<"No se encontraron atletas del pais: "<<pais<< endl;
    } else {
        cout<<"Atleta con mayor numero de medallas: "<<pais<< endl;
        cout<<"Nombre: "<<ATLETAS[indicemedallas].nom << endl;
        cout<<"disciplina: "<<ATLETAS[indicemedallas].datos[1] << endl;
        cout<<"medallas: "<<ATLETAS[indicemedallas].medallas << endl;
    }
    return 0;
}
