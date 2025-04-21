#include <iostream>
using namespace std;

const int TAM = 10;

// Funciones
void ingresarNumeros(int arr[], int tam);
int calcularSuma(int arr[], int tam);
float calcularPromedio(int suma, int tam);
int encontrarMaximo(int arr[], int tam);
int encontrarMinimo(int arr[], int tam);
void contarParesImpares(int arr[], int tam, int& pares, int& impares);

int main() {
    int numeros[TAM];
    int suma, maximo, minimo, pares, impares;

    // Ingreso de datos
    ingresarNumeros(numeros, TAM);

    // Cálculos
    suma = calcularSuma(numeros, TAM);
    float promedio = calcularPromedio(suma, TAM);
    maximo = encontrarMaximo(numeros, TAM);
    minimo = encontrarMinimo(numeros, TAM);
    contarParesImpares(numeros, TAM, pares, impares);

    // Resultados
    cout << "\nResultados:\n";
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}

// Definiciones de funciones
void ingresarNumeros(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingresa el número [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

int calcularSuma(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return suma;
}

float calcularPromedio(int suma, int tam) {
    return static_cast<float>(suma) / tam;
}

int encontrarMaximo(int arr[], int tam) {
    int max = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int encontrarMinimo(int arr[], int tam) {
    int min = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void contarParesImpares(int arr[], int tam, int& pares, int& impares) {
    pares = 0;
    impares = 0;
    for (int i = 0; i < tam; i++) {
        if (arr[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
}
