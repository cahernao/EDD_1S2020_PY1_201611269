#ifndef LISTASIMPL_H
#define LISTASIMPL_H
#include<fstream>
#include "nodoSimple.h"

using namespace std;
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


    private:
        bool estaVacio();
};

bool listaSimpl::estaVacio(){
    return raiz==0;
}


void listaSimpl::insertarFinal(string nombre, int puntaje){
    nodoSimple *nuevo= new nodoSimple(nombre,puntaje);
    if(estaVacio())
    {
        raiz=nuevo;
        ultimo=nuevo;
        tamano++;
    }else
    {
        ultimo->siguiente=nuevo;
        ultimo=nuevo;
        tamano++;
    }
}

void listaSimpl::insertarOrdenado(string nombre, int puntaje){
    nodoSimple *nuevo=new nodoSimple(nombre,puntaje);
    if(estaVacio())
    {
        //SI ESTA VACIO LO MANDAMOS AL FONDO, REUTILIZAR
        //CODIGO
        insertarFinal(nombre,puntaje);
    }
    else
    {

        if(puntaje>raiz->puntaje)
        {
            //VERIFICAMOS SI ES MAYOR, ENTONCES FIJO IRA AL INICIO
            insertarInicio(nombre,puntaje);
        }else
        {
            //SINO TENDREMOS QUE RECORRER
            nodoSimple *aux=raiz;
            nodoSimple *atras=raiz;

            while (puntaje<= aux->puntaje && aux->siguiente!=0)
            {
                //VAMOS A RECORRER LOS AUXILIAR Y ATRAS
                atras=aux;
                aux=aux->siguiente;
            }

            if(puntaje < aux->puntaje)
            {
                //LUEGO EN ESA POSICION CAMBIAREMOS CUALES SON
                aux->siguiente=nuevo;
            }else
            {
                //SINO LO PONDREMOS EL NUEVO, DESPUES QUE EL ATRAS
                atras->siguiente=nuevo;
                nuevo->siguiente=aux;
            }

        }
    }
}

void listaSimpl::insertarInicio(string nombre, int puntaje){

    nodoSimple *nuevo= new nodoSimple( nombre,puntaje);
    if(estaVacio())
    {
        raiz=nuevo;
        ultimo=nuevo;
        tamano++;
    }else
    {
        nuevo->siguiente=raiz;
        raiz=nuevo;
        tamano++;
    }

}

void listaSimpl::graficarL(){

    string bodyGraph="";
    string nameFile="reporteListaSimple";
    ofstream file;
    file.open(nameFile+".dot", ios::out);
    if(file.fail()) cout<<"ERROR REPORTE GRAFICAR LISTA SIMPLE";
    bodyGraph+="digraph G{\n";
    bodyGraph+="rankdir =LR\n;";
    bodyGraph+="node[shape=box];\n";




    nodoSimple *recorrer=this->raiz;
    if(raiz->siguiente==0)
    {
        bodyGraph+=to_string(recorrer->puntaje);
    }else
    {
        while(recorrer->siguiente!=0)
        {
            bodyGraph+="\""+to_string( recorrer->puntaje)+"\""+"->"+"\""+ to_string(recorrer->siguiente->puntaje)+"\""+"\n";
            recorrer=recorrer->siguiente;
        }
    }

    bodyGraph+="}";

    file<<bodyGraph;
    file.close();
    string salida=("dot "+nameFile+".dot -o "+ nameFile+".png -Tpng");
    const char *comand = salida.c_str();
    system(comand);
    string llamar=nameFile+".png";

    const char *comand2 =llamar.c_str();
    system(comand2);

}

void listaSimpl::graficarlistaEscore(){

    string bodyGraph="";
    string nameFile="reporteListaSimple";
    ofstream file;
    file.open(nameFile+".dot", ios::out);
    if(file.fail()) cout<<"ERROR REPORTE GRAFICAR LISTA SIMPLE";
    bodyGraph+="digraph G{\n";
    bodyGraph+="rankdir =LR\n;";
    bodyGraph+="node[shape=box];\n";




    nodoSimple *recorrer=this->raiz;
    if(raiz->siguiente==0)
    {
        bodyGraph+=to_string(recorrer->puntaje);
    }else
    {
        while(recorrer->siguiente!=0)
        {
            bodyGraph+="\""+recorrer->nombre+","+ to_string( recorrer->puntaje)+"\""+"->"+"\""+recorrer->siguiente->nombre+","+ to_string(recorrer->siguiente->puntaje)+"\""+"\n";
            recorrer=recorrer->siguiente;
        }
    }

    bodyGraph+="}";

    file<<bodyGraph;
    file.close();
    string salida=("dot "+nameFile+".dot -o "+ nameFile+".png -Tpng");
    const char *comand = salida.c_str();
    system(comand);
    string llamar=nameFile+".png";

    const char *comand2 =llamar.c_str();
    system(comand2);

}

#endif // LISTASIMPL_H
