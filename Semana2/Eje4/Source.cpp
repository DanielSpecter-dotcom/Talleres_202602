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

int sumar_datos(int* arr, int N) {
	int suma = 0;
	for (int i = 0;i < N;i++) {
		suma += arr[i];
	}
	return suma;
	//cout << "LA SUMA ES: " << suma << endl;
}

void sumar_datos2(int* arr, int N) {
	int suma = 0;
	for (int i = 0;i < N;i++) {
		suma += arr[i];
	}
	cout << "LA SUMA ES: " << suma << endl;
}

void main() {
	int N;
	do
	{
		cout << "Ingrese cantidad de enteros: ";
		cin >> N;
	} while (N<=0);

	int* datos = new int[N];

	leer_datos(datos, N);
	imprimir_datos(datos, N);
	int sumatoria = sumar_datos(datos, N);

	cout << "SUMA = " << sumatoria << endl;
	//sumar_datos2(datos, N);

	delete[] datos;
	_getch();
}