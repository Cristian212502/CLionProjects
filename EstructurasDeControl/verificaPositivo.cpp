#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número es negativo o cero." << endl;
    }

    return 0;
}