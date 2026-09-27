#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

#define FILAS 5
#define COLUMNAS 4

void main() {
	Random dado;

	int notas[FILAS][COLUMNAS];
	int aprobados = 0, desaprobados = 0;

	for (int i = 0;i < FILAS;i++) {
		for (int j = 0;j < COLUMNAS;j++) {
			notas[i][j] = dado.Next(0, 21);
		}
	}

	cout << "\nNOTAS:\n";
	for (int i = 0;i < FILAS;i++) {
		cout << "Alumno " << i + 1 << ":\t";
		for (int j = 0;j < COLUMNAS;j++) {
			cout << notas[i][j] << "\t";


			if (notas[i][j] >= 13) aprobados++;
			else desaprobados++;
		}
		cout << "\n";
	}

	cout << "\nCantidad aprobados: " << aprobados << endl;
	cout << "Cantidad desaprobados: " << desaprobados;

	_getch();
}