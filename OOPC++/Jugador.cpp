#include <string>
#include "Jugador.h"

using std::string;

int Jugador::get_posicion() {
    return posicion;
}

void Jugador::set_posicion(int ncasillas) {
    posicion += ncasillas;
}

void Jugador::set_nombre(string n) {
    nombre = n;
}

string Jugador::toString() {
    return "Soy el jugador " + nombre + " y estoy en la posición " + std::to_string(posicion);
}
