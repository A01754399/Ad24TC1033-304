#include <iostream>
#include "Juego.h"
Juego::Juego()
{

}

Juego::Juego (int,n)
{
    num_de_casillas = n;
}
void Juego ::creación_tablero ()
{
    for (int i  =0 ; i < num_casillas ; i++)
    {
        cout <<casillas [i].toString 
    }

}