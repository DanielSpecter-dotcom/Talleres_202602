#include <conio.h>
#include <iostream>

using namespace std;

#define MAXF 5
#define MAXC 5

void main() {
	int stock[MAXF][MAXC];
	int f, c;

	do
	{
		cout << "Numero de almacenes: (1-5): ";
		cin >> f;
	} while (f<1 || f>MAXF);

	do
	{
		cout << "Numero de medidas de llanta (1-5): ";
		cin >> c;
	} while (c<1 || c>MAXC);

	for (int i = 0;i < f;i++) {
		for (int j = 0;j < c;j++) {
			do
			{
				cout << "Stock almacen " << i + 1 << " , medida: " << j + 1 << ": ";
				cin >> stock[i][j];
			} while (stock[i][j]<0);
		}
	}

	cout << "\nREGISTROS\n";
	for (int i = 0;i < f;i++) {
		cout << "Almacen " << i + 1 << ":\t";
		for (int j = 0;j < c;j++) {
			cout << stock[i][j] << "\t";
		}
		cout << endl;
	}

	_getch();
}