#include <iostream>
#include <conio.h>

using namespace std;

void leer_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << "Ingrese numero: ";
		cin >> *(arr + i);
	}
}

void imprimir_puntero(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << *(arr + i)<<" ";
	}
	cout << endl;
}

void duplicar_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		*(arr + i) = *(arr + i) * 2;
		//arr[i] = arr[i] * 2;
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
	cout << "ORIGINAL:\n";
	imprimir_puntero(datos, N);

	cout << endl;
	duplicar_datos(datos, N);
	cout << "DUPLICADO:\n";
	imprimir_puntero(datos, N);

	delete[] datos;
	_getch();
}