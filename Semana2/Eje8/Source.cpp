#include <iostream>
#include <conio.h>

using namespace std;

void leer_datos(int* arr, int N) {
	for (int i = 0;i < N;i++) {
		cout << "Ingrese numero: ";
		cin >> *(arr + i);
	}
}

int contar_apariciones(int* arr, int N, int buscado) {
	int contador = 0;
	for (int i = 0;i < N;i++) {
		if (arr[i] == buscado)
			contador++;
	}
	return contador;
}

void main() {
	int N, buscado, cantidad;
	do
	{
		cout << "Ingrese cantidad de enteros: ";
		cin >> N;
	} while (N <= 0);

	int* datos = new int[N];

	leer_datos(datos, N);
	cout << "Numero a buscar: ";
	cin >> buscado;

	cantidad = contar_apariciones(datos, N, buscado);

	if (cantidad == 0)
		cout << "NO SE ENCONTRO EL VALOR BUSCADO";
	else
		cout << "El valor " << buscado << " aparece " << cantidad << " veces.";

	delete[] datos;
	_getch();
}