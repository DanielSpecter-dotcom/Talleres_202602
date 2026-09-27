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
			m[i][j] = dado.Next(0, 51);
		}
	}
}

void mostrarMatriz(int** m, int f, int c) {
	for (int i = 0;i < f;i++) {
		cout << "Jugador " << i + 1 << ":\t";
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
		cout << "Jugadores (2-8): ";
		cin >> f;
	} while (f<MINF || f>MAXF);

	do
	{
		cout << "Rondas (2-6): ";
		cin >> c;
	} while (c<MINC || c>MAXC);

	int** puntos = crearMatriz(f, c);
	cargarAleatorio(puntos, f, c);

	cout << "\nPUNTAJES\n";
	mostrarMatriz(puntos, f, c);

	liberarMatriz(puntos, f);

	_getch();
}