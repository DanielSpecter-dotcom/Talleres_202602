#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

#define MINF 2
#define MAXF 8
#define MINC 2
#define MAXC 6

int** crearMatriz(int f, int c) {
	int** m = new int* [f];
	for (int i = 0;i < f;i++) {
		m[i] = new int[c];
	}

	return m;
}

void cargarAleatorio(int** m, int f, int c) {
	Random dado;
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			m[i][j] = dado.Next(10, 100);
		}
	}
}

void mostrarMatriz(int** m, int f, int c) {
	for (int i = 0;i < f;i++) {
		cout << "Linea " << i + 1 << ":\t";
		for (int j = 0;j < c;j++) {
			cout << m[i][j] << "\t";
		}
		cout << "\n";
	}
}

void liberarMatriz(int** m, int f) {
	for (int i = 0;i < f;i++) {
		delete[] m[i];
	}
	delete[] m;
}

void main() {
	int f, c;
	do
	{
		cout << "Lineas de produccion (2-8): ";
		cin >> f;
	} while (f<MINF || f>MAXF);

	do
	{
		cout << "Turnos (2-6): ";
		cin >> c;
	} while (c<MINC || c>MAXC);

	int** prod = crearMatriz(f, c);
	cargarAleatorio(prod, f, c);

	cout << "\nPRODUCCION X LINEA X TURNO\n";
	mostrarMatriz(prod, f, c);

	liberarMatriz(prod, f);
	
	_getch();
}