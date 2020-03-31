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
            puntaje = new listaSimpl();
        }

        void insertarIN(int va){puntaje->insertarInicio(this->nombre, va);}
        void insertarFN(int va){puntaje->insertarFinal(this->nombre, va);}
        void insertarOR(int va){puntaje->insertarOrdenado(this->nombre, va);}
        string nombre;
        listaSimpl *puntaje;
        //PEND
        //LISTA DE FICHAS

};

#endif // JUGADOR_H
