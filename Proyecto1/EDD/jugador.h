#ifndef JUGADOR_H
#define JUGADOR_H
#include "listaSimpl.h"
using namespace std;
class jugador
{
    public:
        jugador(string nombree)
        {
            this->nombre = nombree;
        }

        string nombre;
        listaSimpl *puntaje;
        //PEND
        //LISTA DE FICHAS

};

#endif // JUGADOR_H
