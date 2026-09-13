#include <conio.h>
#include <iostream>
#define MAX 5

using namespace std;

void ingresarTemperaturas(float* temp, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Ingrese tempreatura " << i + 1 << ": ";
		cin >> temp[i];
	}
}

void mostrarTemperaturas(float* temp, int n) {
	for (int i = 0;i < n;i++) {
		cout << temp[i] << " ";
	}
	cout << endl;
}

void corregirTemperatura(float* temp, int n) {
	for (int i = 0;i < n;i++) {
		if (temp[i] < 0) {
			temp[i] = 0;
		}
	}
}

void main() {

	float temp[MAX];

	ingresarTemperaturas(temp, MAX);

	cout << "TEMPERATURAS ORIGINALES: ";
	mostrarTemperaturas(temp, MAX);
	cout << endl;

	corregirTemperatura(temp, MAX);

	cout << "\nTEMPERATURAS CORREGIDAS: ";
	mostrarTemperaturas(temp, MAX);
	cout << endl;

	_getch();
}