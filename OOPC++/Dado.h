#ifndef DADO_H
#define DADO_H

class Dado 
{ 
    private:
        int num_de_caras;

    public :
        int tirar () ;
        int get_caras ();
        void set_caras (int n );
        
        Dado (int n);
        Dado ():

};


#endif