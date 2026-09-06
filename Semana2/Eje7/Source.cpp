#include <iostream>
#include <conio.h>

using namespace std;

void leer_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << "Ingrese numero: ";
		cin >> arr[i];
	}
}

int mayor_dato(int* arr, int N) {
	int mayor = arr[0];
	for (int i = 1;i < N;i++) {
		if (arr[i] > mayor) {
			mayor = arr[i];
		}
	}
	return mayor;
}

int menor_dato(int* arr, int N) {
	int menor = arr[0];
	for (int i = 1;i < N;i++) {
		if (arr[i] < menor) {
			menor = arr[i];
		}
	}
	return menor;
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
	int mayor = mayor_dato(datos, N);
	int menor = menor_dato(datos, N);

	cout << "MAYOR = " << mayor << endl;
	cout << "MENOR = " << menor << endl;

	delete[] datos;
	_getch();
}