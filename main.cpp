#include "AUTOMATA.h"
#include "AFD.h"
#include "AFND.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100
using namespace std;

int main()
{   cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
    cout<<"°\n°\t TAREA 2 AUTOMATAS FINITO DETERMINISTICOS Y NO DETERMINISTICOS\t\t\n";
    cout<<"°\n°\t\t Kevin Labra Soto \t[18.355.485-9]\t\t";
    cout<<"\n°\t\t Juan Avendaño \t\t[]\t\t";
    cout<<"\n°\t\t Kevin Peralta Nuñez \t[]\t\t";
    cout<<"\n°\t\t Sebastian  Albornoz \t[]\t\t\n°\n";
    cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
    AFD A;
    A.ingresar_quintupla();
    A.crear_transiciones_afd();
    A.mostrar_quintupla();
    A.mostrar_transiciones_afd();

    return 0;
}
