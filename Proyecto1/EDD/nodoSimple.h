#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H

using namespace std;
class nodoSimple
{
    public:
        nodoSimple(int puntate) {this->puntaje=puntate;}
        virtual ~nodoSimple() {}
        nodoSimple *siguiente;
        int puntaje;
        string nombre;

    protected:

    private:
};

#endif // NODOSIMPLE_H
