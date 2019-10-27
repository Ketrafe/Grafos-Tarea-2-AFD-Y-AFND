#ifndef AFND_H
#define AFND_H
#include <AUTOMATA.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
#define MAX 100



class AFND : public AUTOMATA
{
    public:
        AFND();
        virtual ~AFND();
        AFND(const AFND& other);

    protected:

    private:
};

#endif // AFND_H
