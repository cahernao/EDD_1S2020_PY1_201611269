#include <iostream>
#include "EDD\jugador.h"
#include "EDD\listaSimpl.h"
#include "STATIC\estaticos.h"
using namespace std;

int main()
{
    jugador* miJugador = new jugador("Pedro");
    int edad0;
    string detalles="  UNIVERSIDAD SAN CARLOS DE GUATEMALA\n";
    detalles+="  FACULTAD DE INGENIERIA\n";
    detalles+="  ESCUELA DE SISTEMAS\n";
    detalles+="  ESTRUCTURAS DE DATOS \n";
    detalles+="  CARLOS AUGUSTO HERNANDEZ ORDO;EZ   201611269\n\n";

    edad0=estaticos::prueba();


    cout<<detalles<<estaticos::damemiNombre()<<"\n\n"<<edad0<<"\n\n";

    miJugador->insertarOR(10);
    miJugador->insertarOR(41);
    miJugador->insertarOR(31);
    miJugador->insertarOR(21);

    miJugador->puntaje->graficarlistaEscore();


    //miJugador->puntaje->insertarInicio("Hey", 20);
    //miJugador->puntaje->insertarInicio("Hey", 30);
    //miJugador->puntaje->insertarInicio("Hey", 40);
    //miJugador->puntaje->graficarL();


    return 0;
}
