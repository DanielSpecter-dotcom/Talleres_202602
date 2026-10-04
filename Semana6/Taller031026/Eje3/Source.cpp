#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int** crearMatriz(int f, int c) {
	int** mat = new int* [f];
	for (int i = 0;i < f;i++) {
		mat[i] = new int[c];
	}
	return mat;
}

void llenarMatriz(int** mat, int f, int c) {
	Random dado;
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			mat[i][j] = dado.Next(1, 51);
		}
	}
}

void mostrarMatriz(int** mat, int f, int c) {
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

void rotarDerecha(int** a, int** r, int f, int c) {
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			r[j][f - 1 - i] = a[i][j];
		}
	}
}

void liberarMatriz(int** mat, int n) {
	for (int i = 0;i < n;i++)
		delete[] mat[i];
	delete[] mat;
}

void main() {
	int f, c;

	do
	{
		cout << "Ingrese el numero de filas: ";
		cin >> f;
	} while (f < 1);

	do
	{
		cout << "Ingrese el numero de columnas: ";
		cin >> c;
	} while (c < 1);

	int** a = crearMatriz(f, c);
	llenarMatriz(a, f, c);

	int** r = crearMatriz(c, f);

	rotarDerecha(a, r, f, c);

	cout << "\nMatriz original: A\n ("<<f<<"x"<<c<<")\n";
	mostrarMatriz(a, f, c);

	cout << "\nMatriz rotada: R\n (" << c << "x" << f << ")\n";
	mostrarMatriz(r, c, f);

	liberarMatriz(a, f);
	liberarMatriz(r, c);

	_getch();
}