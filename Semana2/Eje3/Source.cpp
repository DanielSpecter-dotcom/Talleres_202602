#include <iostream>
#include <conio.h>

using namespace std;

void leer_datos(int* a, int* b) {
	cout << "Ingrese primer digito: ";
	cin >> *a;
	cout << "Ingrese segundo digito: ";
	cin >> *b;
}

void intercambiar(int* a, int* b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

void mostrar_datos(int* a, int* b) {
	cout << "A = " << *a << endl;
	cout << "B = " << *b << endl;
}

void main() {
	int* a = new int;
	int* b = new int;

	leer_datos(a, b);
	cout << "ANTES\n";
	mostrar_datos(a, b);
	cout << endl;

	intercambiar(a, b);
	cout << "DESPUES\n";
	mostrar_datos(a, b);

	delete a;
	delete b;
	_getch();
}