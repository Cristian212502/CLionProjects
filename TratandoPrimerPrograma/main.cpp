#include <iostream>

using namespace std;

int main() {
    int valor1, valor2, valor3;
    int suma, resta, sumaconseis;
    valor3 = 6;
    cout << "introduce dos valores enteros" << endl;
    cin >> valor1 >> valor2;
    suma = valor1 + valor2;
    sumaconseis = valor1 + valor2 + valor3;
    resta = valor1 - valor2;
    cout << "la suma de " << valor1 << " y " << valor2 << " es " << suma << endl;
    cout << "la resta es " <<  resta << " y al  sumar con 6 " << sumaconseis << endl;
    return 0;
}
