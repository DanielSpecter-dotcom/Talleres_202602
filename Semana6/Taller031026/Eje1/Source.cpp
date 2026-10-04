#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

#define NMIN 3
#define NMAX 8

int** crearMatriz(int n) {
	int** mat = new int* [n];
	for (int i = 0;i < n;i++) {
		mat[i] = new int[n];
	}
	return mat;
}

void llenarMatriz(int** mat, int n) {
	Random dado;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			mat[i][j] = dado.Next(10, 100);
		}
	}
}

void mostrarMatriz(int** mat, int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

float promedioDiagonalPrincipal(int** mat, int n) {
	float suma = 0;
	for (int i = 0;i < n;i++) {
		suma += mat[i][i]; //ya que i==j en este caso para la diagonal
	}
	return suma / n;
}

int mayorDiagonalSecundaria(int** mat, int n) {
	int mayor = mat[0][n - 1];
	for (int i = 1;i < n;i++) {
		if (mat[i][n - 1-i] > mayor) {
			mayor = mat[i][n - 1-i];
		}
	}
	return mayor;
}

void liberarMatriz(int** mat, int n) {
	for (int i = 0;i < n;i++)
		delete[] mat[i];
	delete[] mat;
}

void main() {
	int n;
	do
	{
		cout << "Ingrese el orden N de la matriz: ";
		cin >> n;
	} while (n<NMIN || n>NMAX);

	int** mat = crearMatriz(n);
	llenarMatriz(mat, n);

	cout << "\nMatriz generada:\n";
	mostrarMatriz(mat, n);

	float promedioDiagP = promedioDiagonalPrincipal(mat, n);
	int mayorDiagSec = mayorDiagonalSecundaria(mat, n);

	cout << "\nPromedio de la diagonal principal: " << promedioDiagP << endl;
	cout << "Mayor valor de la diagonal secundaria: " << mayorDiagSec << endl;

	liberarMatriz(mat, n);

	_getch();
}