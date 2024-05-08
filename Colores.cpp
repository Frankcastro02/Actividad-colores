#include <iostream>

using namespace std;
int main()
{
    char Letra;
    cout <<"Escriba una letra entre R,W,B,Y,K,C,G para generar un color";
    cin >> Letra;
    switch (Letra)
    {

        case 'R':
        cout <<"Rojo";
        break;

        case 'W':
        cout <<"Blanco";
        break;

        case 'B':
        cout <<"Azul";
        break;

        case 'Y':
        cout <<"Amarillo";
        break;

        case 'K':
        cout <<"Negro";
        break;

        case 'C':
        cout <<"Cian";
        break;

        case 'G':
        cout <<"Verde";
        break;

        default:
        cout << "Datos incorrectos";
    }
    return 0;
}
//g++ If else numeros.cpp-0 primp
