#include <conio.h>
#include <iostream>
#define MAX 4

using namespace std;

void ingresarArreglo(float* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese calificacion " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void mostrarArreglo(float* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void seleccionAscendente(float* arr, int n) {
	int indiceMenor;
	float temp;
	for (int i = 0;i < n - 1;i++) {
		indiceMenor = i;
		for (int j = i + 1;j < n;j++) {
			if (arr[j] < arr[indiceMenor])
				indiceMenor = j;
		}
		temp = arr[i];
		arr[i] = arr[indiceMenor];
		arr[indiceMenor] = temp;
	}
}

float calcularMediana(float* arr, int n) {
	if (n % 2 == 0) {
		// 1 2 3 4
		return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
	}
	else {
		return arr[n / 2];
	}
}

void main() {
	float arr[MAX], mediana;

	ingresarArreglo(arr, MAX);

	seleccionAscendente(arr, MAX);

	cout << "CALIFICACIONES ORDENADAS: ";
	mostrarArreglo(arr, MAX);

	mediana = calcularMediana(arr, MAX);
	cout << "Mediana: " << mediana << endl;

	_getch();
}