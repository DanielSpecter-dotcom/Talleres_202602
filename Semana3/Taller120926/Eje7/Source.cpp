#include <conio.h>
#include <iostream>
#define MAX 5

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

int insertarOrdenado(int* arr, int n, int valor) {
	int i = n - 1;

	while (i >= 0 && arr[i] > valor) {
		arr[i + 1] = arr[i];
		i--;
	}
	arr[i + 1] = valor;

	return n + 1;
}

void main() {
	int arr[MAX], n, valor;

	cout << "Cuantos elementos tiene el arreglo (max " << MAX - 1 << "): ";
	cin >> n;

	ingresarArregloOrdenado(arr, n);

	cout << "\nARREGLO ORDENADO ACTUAL: ";
	mostrarArreglo(arr, n);

	cout << "Ingrese el valor a insertar: ";
	cin >> valor;

	n = insertarOrdenado(arr, n, valor);

	cout << "\nARREGLO DESPUES DE INSERTAR: ";
	mostrarArreglo(arr, n);

	_getch();
}