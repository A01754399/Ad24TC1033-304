#include <iostream>
#include "Dado.h"
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;


int Dado::tirar()
{
    Dado d;

    d.set_caras(6);

    return rand ();
}

void Dado :: set_caras(int n)
{
    num_de_caras = n;

}

int Dado::get_caras ()
{
    return num_de_caras; 
}