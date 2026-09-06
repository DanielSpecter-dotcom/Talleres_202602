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

void contar_datos(int* arr, int N) {
	int positivos = 0, negativos = 0, ceros = 0;

	for (int i = 0;i < N;i++) {
		if (arr[i] < 0) negativos++;
		if (arr[i] > 0) positivos++;
		if (arr[i] == 0) ceros++;
	}

	cout << "POSITIVOS: " << positivos << endl;
	cout << "NEGATIVOS: " << negativos << endl;
	cout << "CEROS: " << ceros << endl;
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
	imprimir_datos(datos, N);
	contar_datos(datos, N);

	delete[] datos;
	_getch();
}