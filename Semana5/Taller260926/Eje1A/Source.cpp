#include <conio.h>
#include <iostream>

using namespace std;

#define MAXF 5
#define MAXC 5

void main() {
	int asist[MAXF][MAXC];
	int f, c;

	do
	{
		cout << "Numero de secciones (1-5): ";
		cin >> f;
	} while (f<1 || f>MAXF);

	do
	{
		cout << "Numero de semanas (1-5): ";
		cin >> c;
	} while (c<1 || c>MAXC);

	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			do
			{
				cout << "Asistentes de la seccion " << i + 1 << " , semana " << j + 1 << ": ";
				cin >> asist[i][j];
			} while (asist[i][j] < 0 || asist[i][j]>40);
		}
	}

	cout << "\nASISTENCIA:\n";
	for (int i = 0;i < f;i++) {
		cout << "Seccion " << i + 1 << ":\t";
		for (int j = 0;j < c;j++) {
			cout << asist[i][j] << "\t";
		}
		cout << "\n";
	}

	_getch();
}