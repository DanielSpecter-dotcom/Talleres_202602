#include <conio.h>
#include <iostream>

using namespace std;

int** crearMatriz(int f, int c) {
	int** mat = new int* [f];
	for (int i = 0;i < f;i++){
		mat[i] = new int[c];
	}
	return mat;
}

void ingresarProduccion(int** mat, int f, int c) {
	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			do
			{
				cout << "Linea " << i + 1 << ", turno " << j + 1 << ": ";
				cin >> mat[i][j];
			} while (mat[i][j]<0);
		}
	}
}

void mostrarMatriz(int** mat, int f, int c) {
	for (int i = 0;i < f;i++) {
		cout << "Linea " << i + 1 << ":\t";
		for (int j = 0;j < c;j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

int totalLinea(int** mat, int f, int c) {
	float suma = 0;
	for (int j = 0;j < c;j++) {
		suma += mat[f][j];
	}
	return suma;
}

float promedioTurno(int** mat, int f, int c) {
	int suma = 0;
	for (int i = 0;i < f;i++) {
		suma += mat[i][c];
	}
	return suma / f;
}

int lineaMenorProduccion(int** mat, int f, int c) {
	int posMenor = 0;
	int menor = totalLinea(mat, 0, c);
	for (int i = 1;i < f;i++) {
		int total = totalLinea(mat, i, c);
		if (total < menor) {
			menor = total;
			posMenor = i;
		}
	}
	return posMenor;
}

void liberarMatriz(int** mat, int n) {
	for (int i = 0;i < n;i++)
		delete[] mat[i];
	delete[] mat;
}

void main() {
	int lineas, turnos;
	do
	{
		cout << "Numero de lineas de produccion: ";
		cin >> lineas;
	} while (lineas < 1);

	do
	{
		cout << "Numero de turnos: ";
		cin >> turnos;
	} while (turnos < 1);

	int** prod = crearMatriz(lineas, turnos);
	ingresarProduccion(prod, lineas, turnos);

	cout << "\nProduccion registrada:\n";
	mostrarMatriz(prod, lineas, turnos);

	cout << "\Total producido por linea:\n";
	for (int i = 0;i < lineas;i++) {
		cout << "Linea " << i + 1 << ": " << totalLinea(prod, i, turnos) << endl;
	}

	cout << "\nPromedio de produccion por turnos:\n";
	for (int j = 0;j < turnos;j++) {
		cout << "Turno " << j + 1 << ": " << promedioTurno(prod, lineas, j) << endl;
	}

	int pos = lineaMenorProduccion(prod, lineas, turnos);
	cout << "\nLinea con menor produccion total: Linea " << pos + 1 << " (" << totalLinea(prod, pos, turnos) << ") \n";

	liberarMatriz(prod, lineas);

	_getch();
}