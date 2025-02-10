#include <iostream>
using namespace std;

int main() {
    float a = 9.23;
    int b = 3;


    int c = (int)a;
    float d = (float)b;


    int e = static_cast<int>(a);
    float f = static_cast<float>(b);


    cout << "Estilo C: " << endl;
    cout << "c = " << c << " (float a int usando (int))" << endl;
    cout << "d = " << d << " (int a float usando (float))" << endl;

    cout << "\nEstilo C++: " << endl;
    cout << "e = " << e << " (float a int usando static_cast<int>)" << endl;
    cout << "f = " << f << " (int a float usando static_cast<float>)" << endl;

    return 0;
}
