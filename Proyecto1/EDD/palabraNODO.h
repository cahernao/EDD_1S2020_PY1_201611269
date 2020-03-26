#ifndef PALABRANODO_H
#define PALABRANODO_H

using namespace std;
class palabraNODO
{
    public:
        palabraNODO() {}
        ~palabraNODO() {}
        palabra(string pa){this->palabraa=pa;}


        void agregarSiguiente(palabra* sig){this->siguiente=sig;}
        void agregarAnterior(palabra* ant){this->anterior=ant;}
        void cambiarPalabra(string pa){this->palabraa=pa;}


        string damePalabra(){return this->palabraa;}
        palabra* dameAnterior(){return this->anterior;}
        palabra* dameSiguiente(){return this->siguiente;}



    private:
        string palabraa;
        palabra* siguiente;
        palabra* anterior;
};

#endif // PALABRANODO_H
