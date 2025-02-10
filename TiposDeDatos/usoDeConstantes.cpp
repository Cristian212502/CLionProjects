#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("chcp 65001");
    const double PI_VALUE = 3.14159;

    double radio, area, circunferencia;


    cout << "Introduce el radio del círculo (valor positivo): ";
    cin >> radio;

    if (radio <= 0) {
        cout << "El radio debe ser un valor positivo. Inténtalo de nuevo." << endl;
        return 1;
    }


    area = PI_VALUE * radio * radio;
    circunferencia = PI_VALUE * 2 * radio;


    cout << fixed << setprecision(2);
    cout << "El área del círculo con radio " << radio << " es " << area << endl;
    cout << "La circunferencia es " << circunferencia << endl;

    return 0;
}