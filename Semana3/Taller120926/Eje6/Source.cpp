#include <conio.h>
#include <iostream>
#define MAX 4

using namespace std;

void ingresarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese elemento " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void mostrarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int eliminarMenorQue(int* arr, int n, int limite) {
	int nuevoN = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] >= limite) {
			arr[nuevoN] = arr[i];
			nuevoN++;
		}

		//10 12 25 16

		//arr[0] -> 10>15 (F)
		//arr[1] ->12 >< 15 (F)
		//arr[2] -> 25 >15 (V)
		//arr[0] = 25
		//nuevoN -> 1
		//arr[3] -> 16>15 (V)
		//arr[1] = 16
	}

	return nuevoN;
}

void main() {
	int arr[MAX], n, limite;

	ingresarArreglo(arr, MAX);

	cout << "\nIngrese valor limite: ";
	cin >> limite;

	n = eliminarMenorQue(arr, MAX, limite);

	cout << "Arreglo resultante: ";
	mostrarArreglo(arr, n);

	_getch();
}