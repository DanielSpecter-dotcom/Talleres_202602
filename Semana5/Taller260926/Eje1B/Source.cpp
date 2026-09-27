#include <conio.h>
#include <iostream>

using namespace std;

#define FILAS 4
#define COLUMNAS 3

void main() {
	int temp[FILAS][COLUMNAS] = {
		{24,26,25},
		{18,17,19},
		{30,31,29},
		{21,22,20}
	};
	int suma = 0;
	float promedio;

	cout << "\nTEMPERATURAS:\n";
	cout << "\t\tDia 1\tDia 2\tDia 3\n";
	for (int i = 0;i < FILAS;i++) {
		cout << "Ciudad " << i + 1 << "\t";
		for (int j = 0;j < COLUMNAS;j++) {
			cout << temp[i][j] << "\t";
			suma += temp[i][j];
		}
		cout << endl;
	}

	promedio = float(suma) / (FILAS * COLUMNAS);
	cout << "Promedio general: " << promedio;

	_getch();
}