#ifndef AFD_H
#define AFD_H
#include <AUTOMATA.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100

class AFD : public AUTOMATA
{
    public:
        AFD();
        virtual ~AFD();
        AFD(const AFD& other);
        void crear_transiciones_afd();
        void mostrar_transiciones_afd();

    protected:

    private:
};

#endif // AFD_H
