#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    cout << "Exploración de Operadores Lógicos y Relacionales\n\n";

    bool caso1 = (5 < 3) && (6 <= 6) || (5 != 6);
    cout << "Caso 1: (5 < 3) && (6 <= 6) || (5 != 6) = "
              << (caso1 ? "true" : "false") << "\n";


    bool caso2 = (5 < 3) && ((6 <= 6) || (5 != 6));
    cout << "Caso 2: (5 < 3) && ((6 <= 6) || (5 != 6)) = "
              << (caso2 ? "true" : "false") << "\n";


    bool caso3 = !((5 < 3) && ((6 <= 6) || (5 != 6)));
    cout << "Caso 3: !((5 < 3) && ((6 <= 6) || (5 != 6))) = "
              << (caso3 ? "true" : "false") << "\n";


    bool ladoIzquierdoEvaluado = false;
    bool caso4 = (ladoIzquierdoEvaluado = (6 <= 6)) || (5 < 3);
    cout << "Caso 4: (ladoIzquierdoEvaluado = (6 <= 6)) || (5 < 3) = "
              << (caso4 ? "true" : "false") << "\n";
    cout << "El valor de ladoIzquierdoEvaluado es: "
              << (ladoIzquierdoEvaluado ? "true" : "false") << "\n";


    bool caso5 = !(5 != 6 && (6 > 5 || 3 < 2));
    cout << "Caso 5: !(5 != 6 && (6 > 5 || 3 < 2)) = "
              << (caso5 ? "true" : "false") << "\n";

    bool estaLloviendo = false;
    bool tienesTiempoLibre = true;
    bool salirACaminar = !estaLloviendo && tienesTiempoLibre;
    cout << "Caso 6: ¿Puedo salir a caminar?\n";
    cout << "Respuesta: " << (salirACaminar ? "Sí, puedes salir." : "No, no puedes salir.") << "\n";
    cout << "Explicación: La condición combina el operador NOT (!) y AND (&&).\n";
    cout << "Si no está lloviendo y tienes tiempo libre, puedes aprovechar para salir.\n";
    cout << "Esta es la magia de la lógica aplicada a nuestra vida cotidiana.\n\n";


    cout << "Estos casos ilustran cómo los operadores lógicos y relacionales trabajan en conjunto.\n";
    cout << "Recuerda que el orden de evaluación y el uso de paréntesis son claves para obtener el resultado esperado.\n";

    return 0;
}