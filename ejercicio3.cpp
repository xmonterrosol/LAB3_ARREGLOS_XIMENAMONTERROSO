#include <iostream>
using namespace std;

// Función que imprime el arreglo en orden inverso usando punteros
void imprimirInverso(int* arr, int tam) {
    cout << "\nArreglo en orden inverso:\n";
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";  // <-- Coloca un breakpoint aquí para observar el puntero
    }
    cout << endl;
}

int main() {
    const int TAM = 8;
    int numeros[TAM];

    // Ingreso de datos
    cout << "Ingresa " << TAM << " números:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Llamada a la función
    imprimirInverso(numeros, TAM);

    return 0;
}
