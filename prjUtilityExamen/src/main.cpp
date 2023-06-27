#include <iostream>
#include "../lib/validacionentrada.h"
#include "../lib/loadingBars.h"
#include "../lib/menuOpciones.h"
#include "../lib/validacionUsuario.h"

using namespace std;
int main()
{
    int validacion = validarUsuario("milena", "seblion", "0611", "coqueiro");
    if(validacion==1){

    int eleccion=0, numeroOpc=3;
    string opciones="1. serie fibonacci\n2.reserva\n3.salir\n";
    MenuOpciones(opciones, numeroOpc, eleccion);
    cout << "has escogido la opcion " << eleccion;

    // string nombre = "";
    // getPalabra("ingrese su nombre: ", nombre);
    // cout << nombre << endl;

    // int numero=0;
    // getNumeroPositivo("ingrese un numero:", numero); 
    // cout << numero << endl;

    // int tamano=40;
    // int repeticiones=2;
    // LoadingBar1(tamano);
    // LoadingBar2(tamano);
    // LoadingBar3(tamano);
    // LoadingBar4(tamano,repeticiones);
    // LoadingBar5(tamano, repeticiones);
 
    } else {
        cerr<<"usted ha salido"<<endl;
    }
}
