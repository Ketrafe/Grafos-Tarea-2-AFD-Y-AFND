#include "AUTOMATA.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100
using namespace std;

AUTOMATA::AUTOMATA()
{
    //ctor
}

AUTOMATA::~AUTOMATA()
{
    //dtor
}

AUTOMATA::AUTOMATA(const AUTOMATA& other)
{
    //copy ctor
}

void AUTOMATA::ingresar_quintupla()
{
cout<<"\t\tHaz decidido ingresar una quintupla , por favor siga cada paso segun se indique: \n\n";
 //aca se pedira la tupla sin las transiciones , ya que es lo unico en que se diferencia AFD Y A
//Comenzamos generando n estados
 int num_Estados;
 cout<<"\t\tIngrese el numero de estados que posee el automata: ";
 cin>>num_Estados;
 if(num_Estados<=0){ //para evitar vivezas y obligar al usuario a ingresar un numero entero finito
    cout<<"\t\tIngrese el numero de estados que posee el automata (numero positivo): ";
    cin>>num_Estados;
 }
 else{for(int i=0;i<num_Estados;i++){
    estados.push_back(i); //se agrega un valor finito i en orden secuencial a los estados q
     }}
//Ingresamos simbolos al alfabeto de la quintupla
int num_Simbolos;
char simbolo;
cout<<"\t\tIngrese la cantidad de simbolos que posee el alfabeto de su automata: ";
cin>>num_Simbolos;
for(int i=0;i<num_Simbolos;i++){
    cout<<"\t\t\tIngrese el simbolo de indice ["<<i<<"] en su alfabeto : ";
    cin>>simbolo;
    alfabeto.push_back(simbolo); //se agrega un simbolo al vector alfabeto;
}
sort(alfabeto.begin(),alfabeto.end()); //ordenamos simbolos en el vector alfabeto;
//ingresamos el estado inicial
int qo;
cout<<"\t\tIngrese el indice 'i' del estado inicial q[i] en su automata (donde i=["<<0<<","<<num_Estados-1<<"]) : ";
cin>>qo;
q0=qo;
//ingresamos los estados finales
int largo;
int aux;
cout<<"\t\tIngrese la cantidad de estados finales en su automata : ";
cin>>largo;
for(int i=0;i<largo;i++){
    cout<<"\t\t\tIngrese el sub-indice del estado qi (donde i=["<<0<<" a "<<num_Estados-1<<"]) final en su automata: ";
    cin>>aux;
    qf.push_back(aux);
}
sort(qf.begin(),qf.end()); //ordenamos los indices de los estados finales del automata
}

void AUTOMATA::mostrar_quintupla(){
cout<<"\t\tHaz decidido mostrar la quintupla la cual se mostrara a continuacion: \n\n";
int K=estados.size();
int E=alfabeto.size();
int QF=qf.size();

cout<<"\t\tLa quintupla es de la forma A:{K,E,S,q[0],qf}\n";
cout<<"\t\tEl conjunto de estados K es :\n";
for(int i=0;i<K;i++){
    cout<<"\t\t\t Estado n°"<<i+1<<" q["<<i<<"]\n";
    }
cout<<"\t\tEl conjunto de simbolos que forma el alfabeto E es :\n";
for(int i=0;i<E;i++){
    cout<<"\t\t\t Simbolo n°"<<i<<" -> "<<alfabeto[i]<<"\n";
}
cout<<"\t\tEl estado inicial del automata es q["<<q0<<"]\n";
cout<<"\t\tEl conjunto de estados finales es {";
for(int i=0;i<QF;i++){
    cout<<"q["<<qf[i]<<"]";
    if(i<QF){
        cout<<",";
    }
}
cout<<"}\n";
}

void AUTOMATA::set_transicion(int a,int b,int c){
 transiciones[a][b]=c;
}

int AUTOMATA::get_transicion(int a,int b){
 int aux=transiciones[a][b];
 return aux;}

