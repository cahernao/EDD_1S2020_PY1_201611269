#include <iostream>
#include "EDD\jugador.h"
#include "STATIC\estaticos.h"
using namespace std;

int main()
{
    int edad0;
    string detalles="  UNIVERSIDAD SAN CARLOS DE GUATEMALA\n";
    detalles+="  FACULTAD DE INGENIERIA\n";
    detalles+="  ESCUELA DE SISTEMAS\n";
    detalles+="  ESTRUCTURAS DE DATOS \n";
    detalles+="  CARLOS AUGUSTO HERNANDEZ ORDO;EZ   201611269\n\n";

    edad0=estaticos::prueba();


    cout<<detalles<<estaticos::damemiNombre()<<"\n\n"<<edad0;
    return 0;
}
