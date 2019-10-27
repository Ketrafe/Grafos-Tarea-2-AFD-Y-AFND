#ifndef AUTOMATA_H
#define AUTOMATA_H
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100

class AUTOMATA
{
    public:
        AUTOMATA();
        virtual ~AUTOMATA();
        AUTOMATA(const AUTOMATA& other);

        std::vector<int> Getestados() { return estados; }
        void Setestados(std::vector<int> &val) { estados = val; }
        std::vector<char> Getalfabeto() { return alfabeto; }
        void Setalfabeto(std::vector<char> &val) { alfabeto = val; }
        int Getq0() { return q0; }
        void Setq0(int &val) { q0 = val; }
        std::vector<int> Getqf() { return qf; }
        void Setqf(std::vector<int> &val) { qf = val; }
        void mostrar_quintupla();
        void ingresar_quintupla();
        int Getsize_estados(){ return estados.size();}
        int Getsize_alfabeto(){ return alfabeto.size();}
        int Getsize_qf(){return qf.size();}
        char Get_simbolo(int val){return alfabeto[val];}
        void set_transicion(int val1,int val2,int val3);
        int get_transicion(int a,int b);




    protected:

    private:
        std::vector<int> estados;
        std::vector<char> alfabeto;
        int transiciones[MAX][MAX];
        int q0;
        std::vector<int> qf;
};

#endif // AUTOMATA_H
