#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

#define FILAS 4
#define COLUMNAS 5

void main() {
	Random dado;

	int m[FILAS][COLUMNAS];
	int pares = 0, impares = 0;
	
	for (int i = 0;i < FILAS;i++) {
		for (int j = 0;j < COLUMNAS;j++) {
			m[i][j] = dado.Next(1, 101);
		}
	}

	cout << "\nMATRIZ GENERADA\n";
	for (int i = 0;i < FILAS;i++) {
		for (int j = 0;j < COLUMNAS;j++) {
			cout << m[i][j] << "\t";

			if (m[i][j] % 2 == 0) pares++;
			else impares++;
		}
		cout << endl;
	}

	cout << "\nCantidad de pares: " << pares << endl;
	cout << "Cantidad de impares: " << impares << endl;

	_getch();
}