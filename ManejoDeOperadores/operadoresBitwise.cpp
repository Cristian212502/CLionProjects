#include <iostream>
#include <bitset>
using namespace std;
int main() {
    system("chcp 65001");
    unsigned int a = 5;
    unsigned int b = 3;


    cout << "a = " << a << " (" << bitset<8>(a) << " en binario)\n";
    cout << "b = " << b << " (" << bitset<8>(b) << " en binario)\n\n";


    unsigned int not_a = ~a;
    cout << "Operador ~ (bitwise NOT) de a: ~a = " << not_a
              << " (" << bitset<8>(not_a) << " en binario) - En decimal: " << not_a << "\n\n";


    unsigned int and_ab = a & b;
    cout << "Operador & (bitwise AND) de a y b: a & b = " << and_ab
              << " (" << bitset<8>(and_ab) << " en binario) - En decimal: " << and_ab << "\n\n";


    unsigned int or_ab = a | b;
    cout << "Operador | (bitwise OR) de a y b: a | b = " << or_ab
              << " (" << bitset<8>(or_ab) << " en binario) - En decimal: " << or_ab << "\n\n";


    unsigned int xor_ab = a ^ b;
    cout << "Operador ^ (bitwise XOR) de a y b: a ^ b = " << xor_ab
              << " (" << bitset<8>(xor_ab) << " en binario) - En decimal: " << xor_ab << "\n\n";


    unsigned int shift_left = a << 1;
    cout << "Operador << (shift left) de a: a << 1 = " << shift_left
              << " (" << bitset<8>(shift_left) << " en binario) - En decimal: " << shift_left << "\n\n";


    unsigned int shift_right = a >> 1;
    cout << "Operador >> (shift right) de a: a >> 1 = " << shift_right
              << " (" << bitset<8>(shift_right) << " en binario) - En decimal: " << shift_right << "\n\n";


    cout << "Resumen de operadores bitwise utilizados:\n";
    cout << "~: Invierte los bits (bitwise NOT).\n";
    cout << "&: Compara los bits de dos números, resultando en 1 solo si ambos bits son 1 (bitwise AND).\n";
    cout << "|: Compara los bits de dos números, resultando en 1 si al menos uno de los bits es 1 (bitwise OR).\n";
    cout << "^: Compara los bits de dos números, resultando en 1 si los bits son diferentes (bitwise XOR).\n";
    cout << "<<: Desplaza los bits de un número hacia la izquierda (shift left), multiplicando el valor por 2.\n";
    cout << ">>: Desplaza los bits de un número hacia la derecha (shift right), dividiendo el valor por 2.\n";

    return 0;
}