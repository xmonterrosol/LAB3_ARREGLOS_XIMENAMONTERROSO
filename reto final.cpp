#include <iostream>
using namespace std;

const int TAM = 15;

// Funciones auxiliares
void ingresarNumeros(int arr[], int tam);
float calcularPromedio(int arr[], int tam);
int filtrarMayores(int original[], int tam, int resultado[], float promedio);
void imprimirArreglo(int arr[], int tam, const string& nombre);
void ordenarDescendente(int arr[], int tam);

int main() {
    int numeros[TAM];
    int mayores[TAM]; // En el peor caso, todos son mayores al promedio
    int cantidadMayores = 0;

    // Paso 1: Ingresar los números
    ingresarNumeros(numeros, TAM);

    // Paso 2: Calcular promedio
    float promedio = calcularPromedio(numeros, TAM);
    cout << "\nPromedio: " << promedio << endl;

    // Paso 3: Crear nuevo arreglo con valores mayores al promedio
    cantidadMayores = filtrarMayores(numeros, TAM, mayores, promedio);

    // Paso 4: Imprimir ambos arreglos
    imprimirArreglo(numeros, TAM, "Arreglo original");
    imprimirArreglo(mayores, cantidadMayores, "Valores mayores al promedio");

    // Extra: Ordenar el arreglo de mayores de mayor a menor
    ordenarDescendente(mayores, cantidadMayores);
    imprimirArreglo(mayores, cantidadMayores, "Mayores al promedio (ordenados desc)");

    return 0;
}

// Implementaciones de funciones

void ingresarNumeros(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arr[i];
    }
}

float calcularPromedio(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return static_cast<float>(suma) / tam;
}

int filtrarMayores(int original[], int tam, int resultado[], float promedio) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (original[i] > promedio) {
            resultado[contador] = original[i];
            contador++;
        }
    }
    return contador; // Devuelve cuántos elementos fueron agregados
}

void imprimirArreglo(int arr[], int tam, const string& nombre) {
    cout << "\n" << nombre << ": ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenarDescendente(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arr[i] < arr[j]) {
                // Intercambio
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
