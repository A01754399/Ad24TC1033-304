#ifndef CASILLA_H
#define CASILLA_H

#include <string>

using std::string;

class  Casilla
{
private:
        int posicion = 0;
        int desplzamiento;
        

    public :
        Casilla () ;
        Casilla (int p, int d);
        int posicion set_nombre (string n);
        string get_nombre ( );
        string toString ();

};


#endif