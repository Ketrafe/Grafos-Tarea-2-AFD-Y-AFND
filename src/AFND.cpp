#include "AFND.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100


AFND::AFND()
{
    //ctor
}

AFND::~AFND()
{
    //dtor
}

AFND::AFND(const AFND& other)
{
    //copy ctor
}

/*void AFND::crear_transiciones_afnd(){
 int K=Getsize_estados();
 int E=Getsize_alfabeto();
 char simbolo;
 int aux,cont;
 cout<<"\n\tIngrese los datos requeridos en la tabla de transiciones \n\n";
 for(int i=0;i<K;i++){ //para el estado qi
    for (int j=0;j<E;j++){ //con el simbolo j
        simbolo=Get_simbolo(j);
        cout<<"Ingrese el numero de transicion que el estado q["<<i<<"] posee : ";
        cin>>cont;
        for(int z=0;z<cont;z++){}
        cout<<"\t Ingrese la transicion S(q["<<i<<"],"<<simbolo<<")= q[n] , donde n=";
        cin>>aux;
        set_transicion(i,j,aux);
    }
 }
}}

void AFD::mostrar_transiciones_afd(){
 int K=Getsize_estados();
 int E=Getsize_alfabeto();
 char simbolo;
 int aux;
 cout<<"\n\tA continuacion se mostrara la tabla correspondiente para la funcion de transicion S\n";
 cout<<"\t\t\t\tS(q,w)\t|";
 for(int i=0;i<E;i++){
    simbolo=Get_simbolo(i);
    cout<<simbolo<<"\t\t|";
 }
 cout<<endl;
 for(int i=0;i<K;i++){
    cout<<"\t\t\t\tq["<<i<<"]\t|";
    for(int j=0;j<E;j++){
        aux=get_transicion(i,j);
        cout<<"q["<<aux<<"]\t|";
    }
    cout<<endl;
 }
}

*/
