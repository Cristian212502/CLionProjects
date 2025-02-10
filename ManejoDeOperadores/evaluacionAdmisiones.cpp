#include <iostream>
#include <string>
using namespace std;
int main() {
    system("chcp 65001");
    int edad;
    float promedio;
    int experienciaLaboral;
    bool requisitosAdicionales;


    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su promedio escolar (0.0 - 10.0): ";
    cin >> promedio;

    cout << "Ingrese sus años de experiencia laboral: ";
    cin >> experienciaLaboral;

    cout << "¿Ha cumplido con los requisitos adicionales? (1 para Sí, 0 para No): ";
    cin >> requisitosAdicionales;


    bool cumpleEdad = edad >= 18 && edad <= 35;
    bool cumplePromedio = promedio >= 8.0;
    bool cumpleExperiencia = experienciaLaboral >= 2 || requisitosAdicionales;


    bool admitido = cumpleEdad && cumplePromedio && cumpleExperiencia;


    cout << "\nResultados de la evaluación:\n";
    cout << "Cumple con el rango de edad (18-35): " << (cumpleEdad ? "Sí" : "No") << endl;
    cout << "Cumple con el promedio mínimo (>= 8.0): " << (cumplePromedio ? "Sí" : "No") << endl;
    cout << "Cumple con experiencia laboral o requisitos adicionales: " << (cumpleExperiencia ? "Sí" : "No") <<   endl;

    std::cout << "\nEstado final de admisión: " << (admitido ? "¡Admitido!" : "No admitido. Inténtalo de nuevo.") << std::endl;

    return 0;
}