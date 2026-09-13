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

void mostrarArreglo(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void burbujaOpt(int* arr, int n) {
	bool huboIntercambio;
	int temp;
	// 0 1 2 3 4
	for (int i = 0;i < n;i++) {
		huboIntercambio = false;
		for (int j = 0;j < n - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j]; //5
				arr[j] = arr[j + 1]; //6
				arr[j + 1] = temp; //5
				huboIntercambio = true;
			}
		}
		if (!huboIntercambio)
		{
			if (i == 0) cout << "No hubo intercambio" << endl;
			break;
		}
	}
}

void main(){

	int arr[MAX];

	ingresarArreglo(arr, MAX);

	cout << "ARREGLO ORIGINAL: ";
	mostrarArreglo(arr, MAX);

	burbujaOpt(arr, MAX);

	cout << "\nARREGLO ORDENADO: ";
	mostrarArreglo(arr, MAX);

	_getch();
}