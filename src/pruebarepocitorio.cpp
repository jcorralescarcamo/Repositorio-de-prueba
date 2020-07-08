#include<iostream>
#include<string>
using namespace std;

int main(){
    int contador;
    cout <<"cuantas iteraciones desea:"<<endl;
    cin>>contador;

    while (contador<10)
    {
        cout <<"Numero:"<< contador << endl;
        contador++;

    }
    
    cout << "Fin"<< endl;
    return 0;

}   

