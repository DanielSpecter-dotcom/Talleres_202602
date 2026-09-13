#include <conio.h>
#include <iostream>
#define MAX 4

using namespace std;

void ingresarArregloOrdenado(int* arr, int n) {
	cout << "Ingrese los elementos EN ORDEN ascendente: \n";
	for (int i = 0;i < n;i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void mostrarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void fusionarOrdenados(int* a, int n1, int* b, int n2, int* resultado) {
	int i = 0, j = 0, k = 0;

	while (i < n1 && j < n2) {
		if (a[i] <= b[j]) {
			resultado[k] = a[i];
			i++;
		}
		else
		{
			resultado[k] = b[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		resultado[k] = a[i];
		i++; k++;
	}

	while (j < n2) {
		resultado[k] = b[j];
		j++; k++;
	}
}

void main() {
	int a[MAX], b[MAX], resultado[MAX * 2], n1, n2;

	cout << "cuantos elementos tiene el primer arreglo: ";
	cin >> n1;
	ingresarArregloOrdenado(a, n1);

	cout << "cuantos elementos tiene el segundo arreglo: ";
	cin >> n2;
	ingresarArregloOrdenado(b, n2);

	fusionarOrdenados(a, n1, b, n2, resultado);
	cout << "ARREGLO FUSIONADO: ";

	mostrarArreglo(resultado, n1 + n2);

	_getch();
}