#include <iostream>
#include "Dado.h"
#include "Jugador.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
    Jugador j1;
    j1.set_nombre ("Juanito");

    Dado d;
    d.set_caras(6);
    for (int i = 0  ; i< 5 ;i++)
    {
        cout<< d.tirar() << endl;
    }

    return 0;

}

Juego serpientes (10)
serpientes.creacion_tablero();
serpientes.impresion_tablero();

return 0;