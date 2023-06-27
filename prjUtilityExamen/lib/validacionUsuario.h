#include<iostream>
#include<string>
using namespace std;

int validarUsuario(string user1, string cont1, string user2, string cont2)
{
    string nomUsuario[] = {user1, user2};
    string nomContrasena[] = {cont1, cont2};

    string intentoUsuario;
    string intentoContrasena;
    char caracter=' ';
    do{
    cout << "Ingrese su nombre de usuario: " << endl;
    cin >> intentoUsuario;

    if (intentoUsuario == nomUsuario[0] || intentoUsuario == nomUsuario[1])
    {
        cout << "Ingrese su contrasena: " << endl;
        cin >> intentoContrasena;

        if ((intentoUsuario == nomUsuario[0] && intentoContrasena == nomContrasena[0]) ||
            (intentoUsuario == nomUsuario[1] && intentoContrasena == nomContrasena[1]))
        {
            cout << "Bienvenid@ " <<intentoUsuario<< endl;
            return 1;
        }
        else
        {
            cout << "Contrasena incorrecta" << endl;
        }
    }
    else
    {
      cout << "Usuario invalido" << endl;
    }
    cout << "ingrese 1 para volver a intentar y cualquier tecla para salir" << endl;
    cin >> caracter;
    if (caracter == '1') 
      cout << "\033[2J\033[1;1H";

    }while(caracter == '1');
    return 0;    
}

