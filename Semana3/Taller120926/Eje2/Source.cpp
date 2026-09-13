#include <conio.h>
#include <iostream>
#define MAX 5

using namespace std;

void ingresarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese elemento " << i + 1 << ": ";
		cin >> arr[i];
	}
}

int contarConcurrenias(int* arr, int n, int valor) {
	int contador = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] == valor)
			contador++;
	}

	return contador;
}

void main() {

	int arr[MAX], n, valor, veces;

	ingresarArreglo(arr, MAX);
	cout << "\n\nIngrese valor a contar: ";
	cin >> valor;

	veces = contarConcurrenias(arr, MAX, valor);

	if (veces > 0) {
		cout << "El valor " << valor << " aparece " << veces << " veces\n";
	}
	else
	{
		cout << "No hay mas concurrencias o no existe el numero\n";
	}

	_getch();
}