#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    system("chcp 65001");

    int num = 10;
    float decimal = num;

    cout << "Número entero: " << num << endl;
    cout << "Número convertido a float: " << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(2) << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(4) << decimal << endl;

    return 0;
}