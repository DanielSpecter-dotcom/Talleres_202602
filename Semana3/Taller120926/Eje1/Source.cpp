#include <conio.h>
#include <iostream>
#define MAX 5

using namespace std;

void ingresarPrecios(float* precios, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese precio del producto " << i + 1 << ": ";
		cin >> precios[i];
	}
}

float calcularTotal(float* precios, int n) {
	float total = 0;
	for (int i = 0;i < n;i++) {
		total += precios[i];
	}

	return total;
}

int indiceMasCaro(float* precios, int n) {
	int indice = 0;
	for (int i = 1;i < n;i++) {
		if (precios[i] > precios[indice])
			indice = i;
	}

	return indice;
	// 0  1 2  3
	// 5 10 1 12

	//indice = 0 -> maximo
	//10 > 5 (V)
	//indice = 1

	// 1 > 10 (F)
	//indice = 1
	
	//12 > 10 (V)
	//indice = 3
}

void main() {

	float precios[MAX], total;
	int n, indice;

	//cout << "Cuantos productos desea ingresar?";
	//cin >> n;

	ingresarPrecios(precios, MAX);

	total = calcularTotal(precios, MAX);
	indice = indiceMasCaro(precios, MAX);

	cout << "\nTotal de compra: " << total << endl;
	cout << "Producto mas caro: producto en la posicion " 
		<< indice <<" ("<<precios[indice]<<") \n";

	
	_getch();
}