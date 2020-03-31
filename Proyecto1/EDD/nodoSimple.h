#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H

using namespace std;
class nodoSimple
{
    public:
        nodoSimple(int puntate) {
            this->puntaje=puntate;
            this->siguiente=0;
            }
        nodoSimple(string nombree, int puntajee){
            this->nombre=nombree;
            this->puntaje = puntajee;
            this->siguiente=0;
        }
        virtual ~nodoSimple() {}
        nodoSimple *siguiente;
        int puntaje;
        string nombre;

    protected:

    private:
};

#endif // NODOSIMPLE_H
