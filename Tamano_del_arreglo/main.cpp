#include <iostream> 
#define TAM 7 // Tamaño del arreglo de edades

using namespace std;

int main(int argc, char** argv) {
    int edad[TAM]; // Arreglo para almacenar edades
    int i = 0;      // Variable de control para los bucles

    // Asignar valores manuales a las primeras 5 posiciones del arreglo
    edad[0] = 20;
    edad[1] = 32;
    edad[2] = 45;
    edad[3] = 49;
    edad[4] = 52;

    // Mostrar las edades actuales
    cout << "Edades actuales:" << endl;
    for (i = 0; i < 5; i++) {
        cout << "Edad #" << (i + 1) << " es: " << edad[i] << "\n" << endl;
    }

    // Solicitar al usuario ingresar las edades faltantes (últimas 2)
    cout << "Ingrese las edades faltantes:" << endl;
    for (i = 5; i < TAM; i++) {
        do {
            cout << "Ingrese la edad [" << (i + 1) << "]: ";
            cin >> edad[i];

            if (edad[i] < 0) { // Validar que la edad no sea negativa
                cout << "Edad inválida. Ingrese una edad positiva.\n";
            }
        } while (edad[i] < 0); // Repetir si la edad es negativa
    }

    // Mostrar todas las edades ingresadas
    cout << "\nLista final de edades:" << endl;
    for (i = 0; i < TAM; i++) {
        cout << "Edad #" << (i + 1) << " es: " << edad[i] << "\n" << endl;
    }

    return 0;
}
