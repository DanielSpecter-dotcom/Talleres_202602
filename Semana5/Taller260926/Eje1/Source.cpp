#include <conio.h>
#include <iostream>

using namespace std;

#define FILAS 3
#define COLUMNAS 4

void main() {
	int ventas[FILAS][COLUMNAS] = {
		{120,95,140,110},
		{80,105,90,130},
		{150,160,125,145}
	};
	int total = 0;

	cout << "Ventas de llantas x tiendas\n";
	cout << "\t\tEnero\tFebrero\tMarzo\tAbril\n";
	for (int i = 0;i < FILAS;i++) {
		cout << "Tienda " << i + 1 << "\t";
		for (int j = 0;j < COLUMNAS;j++) {
			cout << ventas[i][j] << "\t";
			total += ventas[i][j];
		}
		cout << endl;
	}

	cout << "Total generado: "<< total << endl;

	_getch();
}