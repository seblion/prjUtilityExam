/*
Nombre: Juan Sebastian Leon Espinosa
Menu de opciones
*/

#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
#define TIME 15000

bool validNumero(string numero, int numOpc)
{
   for(int i=0; i< numero.length();i++) 
        if (!isdigit(numero[i]))
            return false; //no es un numero
        return true; //es un numero
}

void getNumeroValido(string label, int& number,int numOpc) 
{
    string str;
    do
    {
         do {
            cout << label << ": ";
            cin >> str;
            bool comi= validarNumero(str);
         }while(!validarNumero(str));
    number = stoi(str);
    } while (number <= 0 || number>numOpc);
}

void MenuOpciones(string label, int numOpc, int& chosedOpc)
{
    int numero=0;
    cout<< "\tMenu\n" << label;
    
    string pregunta="ingrese un numero del 1-"+to_string(numOpc);
    getNumeroValido(pregunta, chosedOpc, numOpc); 

}
