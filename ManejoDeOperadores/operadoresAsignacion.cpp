#include <iostream>
using namespace std;
int main() {
     system("chcp 65001");
    int a = 20, b = 10, c = 60, d = 200;

    cout << "Valor inicial de a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;

    a = (b = 10, c = 20);

    cout << "Después de usar el operador coma (secuencia):" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;

    a /= 2;
    b /= 5;
    c /= 10;

    cout << "Después de usar el operador /= (división):" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;


    a >>= 2;

    cout << "Después de usar el operador >>= (desplazamiento a la derecha):" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;

    d = (a += 5, b -= 2, c *= 3, a * b);

    cout << "Después de usar coma con operadores adicionales:" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;

    return 0;
}