#include <iostream>
using namespace std;

int main() {
    // Declarar un arreglo de 10 enteros
    int arreglo[10];

    // Llenar el arreglo con los números del 1 al 10 usando un ciclo for
    for (int i = 0; i < 10; i++) {
        arreglo[i] = i + 1;
    }

    // Imprimir cada valor con su índice correspondiente
    for (int i = 0; i < 10; i++) {
        cout << "Índice [" << i << "] = " << arreglo[i] << endl;
    }

    return 0;
}
