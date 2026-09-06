#include <iostream>
#include <conio.h>

using namespace std;

void leer_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << "Ingrese numero: ";
		cin >> arr[i];
	}
}

void imprimir_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void invertir_datos(int* arr, int N) {
	int aux;
	for (int i = 0;i < N / 2;i++) {
		aux = arr[i];
		arr[i] = arr[N - 1 - i];
		arr[N - 1 - i] = aux;
	}
}

void main() {
	int N;
	do
	{
		cout << "Ingrese cantidad de enteros: ";
		cin >> N;
	} while (N <= 0);

	int* datos = new int[N];

	leer_datos(datos, N);
	cout << "Antes: ";
	imprimir_datos(datos, N);

	invertir_datos(datos, N);
	cout << "Despues: ";
	imprimir_datos(datos, N);

	delete[] datos;
	_getch();
}