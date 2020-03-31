#ifndef ESTATICOS_H
#define ESTATICOS_H


class estaticos
{
    public:
        estaticos() {}
        ~estaticos() {}

        static string damemiNombre();
        static int prueba();

    protected:

    private:
};

string estaticos::damemiNombre(){
    return "CARLOS 2061";
}

int estaticos::prueba(){
    int aa;
    cout<<"     Ingrese el dato: ";
    cin>>aa;
    return aa;
}

#endif // ESTATICOS_H
