#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){
    Arreglo<string> arreglo;

    cout <<"\n";

    arreglo.insertar_final("soy");
    arreglo.insertar_final("tu");
    arreglo.insertar_final("padre");
    arreglo.insertar_inicio("yo");
    arreglo.insertar_inicio("No");

    for (size_t i = 0; i < arreglo.size(); i++){
    cout<<arreglo[i]<<" ";
    }

    cout<<"\n\n";

    arreglo.insertar("Luke,", 1);

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }

    cout<<"\n\n";

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(0);

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }

    cout<<"\n\n";

    return 0;
}