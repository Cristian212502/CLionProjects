#include <bitset>
#include <iostream>
using namespace std;
int main() {
    int a = 5;

    cout << "Post-incremento (a++):" << endl;
    cout << "Valor de a antes de a++: " << a << endl;
    std::cout << "Resultado de a++: " << a++ << endl;
    cout << "Valor de a después de a++: " << a << endl;

    a = 5;

    cout << "\nPre-incremento (++a):" << endl;
    cout << "Valor de a antes de ++a: " << a << endl;
    cout << "Resultado de ++a: " << ++a << endl;
    cout << "Valor de a después de ++a: " << a << endl;

    return 0;
}
