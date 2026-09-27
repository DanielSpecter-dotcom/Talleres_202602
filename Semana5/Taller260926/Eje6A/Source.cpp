#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

#define MIN 2
#define MAX 6

int** crearMatriz(int f, int c) {
	int** m = new int* [f];
	for (int i = 0;i < f;i++) {
		*(m + i) = new int[c];
	}

	return m;
}

void cargarAleatorio(int** m, int f, int c) {
	Random dado;
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			*(*(m + i) + j) = dado.Next(-20, 21);
		}
	}
}

void mostrarMatriz(int** m, int f, int c) {
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			cout << *(*(m + i) + j) << "\t";
		}
		cout << "\n";
	}
}

int reemplazarNegativos(int** m, int f, int c) {
	int cont = 0;
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			if (*(*(m + i) + j) < 0) {
				*(*(m + i) + j) = 0;
				cont++;
				//m[i][j]<0 -> -5
				//m[i][j]=0;
			}
		}
	}
	return cont;
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
		cout << "Filas (" << MIN << " - " << MAX << "): ";
		cin >> f;
	} while (f<MIN || f>MAX);

	do
	{
		cout << "Columnas (" << MIN << " - " << MAX << "): ";
		cin >> c;
	} while (c<MIN || c>MAX);

	int** m = crearMatriz(f, c);
	cargarAleatorio(m, f, c);

	cout << "\nMATRIZ ORIGINAL\n";
	mostrarMatriz(m, f, c);

	int reemplazos = reemplazarNegativos(m, f, c);
	cout << "\nNegativos reemplazados: " << reemplazos << endl;

	cout << "\nMATRIZ MODIFICADA\n";
	mostrarMatriz(m,f,c);

	liberarMatriz(m, f);

	_getch();

}