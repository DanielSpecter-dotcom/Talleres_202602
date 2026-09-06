#include <iostream>
#include <conio.h>

using namespace std;

void leer_numero(int* p) {
	cout << "Ingrese numero: ";
	cin >> *p;
}

void incrementar_diez(int* p) {
	*p = *p + 10;
	//*p+=10;
}

void mostrar_numero(int* p) {
	cout << "Valor: " << *p << endl;
}

void main() {
	int* numero = new int;

	leer_numero(numero);
	cout << "ANTES DEL CAMBIO" << endl;
	mostrar_numero(numero);
	cout << endl;

	incrementar_diez(numero);
	cout << "DESPUES DEL CAMBIO\n";
	mostrar_numero(numero);

	delete numero;
	_getch();
}