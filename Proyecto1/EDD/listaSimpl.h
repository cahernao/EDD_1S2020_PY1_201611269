#ifndef LISTASIMPL_H
#define LISTASIMPL_H
#include "nodoSimple.h"


class listaSimpl
{
    public:

        ~listaSimpl() {}

        listaSimpl(){
            raiz=0;
            ultimo=0;
            tamano=0;
        }

        nodoSimple *raiz;
        nodoSimple *ultimo;
        int tamano;

        void insertarOrdenado(string nombre, int puntaje);
        void graficarL();
        void graficarlistaEscore();
        void insertarFinal(string nombre, int puntaje);
        void insertarInicio(string nombre, int puntaje);
};



#endif // LISTASIMPL_H
