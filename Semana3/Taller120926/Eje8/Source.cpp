#include <conio.h>
#include <iostream>
#define MAX 4

using namespace std;

void ingresarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese elemento " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void mostrarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int eliminarDuplicados(int* original, int n, int* sinDuplicados) {
	int m = 0;
	bool encontrado;
	for (int i = 0;i < n;i++) {
		encontrado = false;
		for (int j = 0;j < m;j++) {
			if (original[i] == sinDuplicados[j]) {
				encontrado = true;
				break;
			}
		}
		if (!encontrado) {
			sinDuplicados[m] = original[i];
			m++;
		}
	}

	return m;
}

void main() {
	int original[MAX], sinDuplicados[MAX], m;

	ingresarArreglo(original, MAX);

	cout << "ARREGLO ORIGINAL: ";
	mostrarArreglo(original, MAX);

	m = eliminarDuplicados(original, MAX, sinDuplicados);

	cout << "Arreglo sin duplicados: ";
	mostrarArreglo(sinDuplicados, m);
}