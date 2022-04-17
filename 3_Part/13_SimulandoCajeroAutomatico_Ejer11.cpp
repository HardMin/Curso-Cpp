/*
11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares.
*/

#include <iostream>

using namespace std;

int main()
{

    int saldo_inicial = 1000, option;
    float ingresar, retirar, saldo = 0;
    char user[20], password[20];

    // Form
    cout << "\tBienvenido a su Cajero Automatico" << endl;
    cout << "\n\n";
    cout << "\tIngrese sus datos de usuario" << endl;
    cout << "Usuario: ";
    cin >> user;
    cout << "Contraseña: ";
    cin >> password;


    cout << "\n\n";
    cout << "\tBienvenido a su Cajero Automatico, " << user << " Aldana." << endl;
    cout << "\n1. Ingresar dinero en cuenta";
    cout << "\n2. Retirar dinero de la cuenta";
    cout << "\n3. Salir";
    cout << "\nOpcion: ";
    cin >> option;
    cout << "\n\n";
    switch (option)
    {
    case 1:
        cout << "Ingrese la cantidad de dinero a ingresar: ";
        cin >> ingresar;
        saldo = saldo_inicial + ingresar;
        cout << endl
                << "Dinero en cuenta: " << saldo;
        break;
    case 2:
        cout << "Ingrese la cantidad de dinero a retirar: ";
        cin >> retirar;
        if (retirar > saldo_inicial)
        {
            cout << "No tiene esa cantidad de dinero";
        }
        else
        {
            saldo = saldo_inicial - retirar;
            cout << endl
                    << "Dinero en cuenta: " << saldo;
        }
        break;

    case 3:
        cout << endl
                << "Cargando...";
        cout << endl
                << "Que tenga un buen dia!";
        break;
    default:
        cout << endl
                << "El dato que ingreso, no esta definido. Por favor, intentelo mas tarde";
        break;
    }

    return 0;
}