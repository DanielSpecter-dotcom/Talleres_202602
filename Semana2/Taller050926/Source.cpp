#include <iostream>
#include <conio.h>

using namespace std;

void leer_numero(int* p) {
	cout << "Ingrese numero: ";
	cin >> *p;
}

void mostrar_numero(int* p) {
	cout << "Valor almacenado: " << *p << endl;
}

void mostrar_direccion(int* p) {
	cout << "Direccion almacenada: " << p << endl;
}

void main() {
	int* numero = new int;

	leer_numero(numero);
	mostrar_numero(numero);
	mostrar_direccion(numero);

	//opcional
	delete numero;
	_getch();
}