#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    system("chcp 65001");
    int saldo = 1000;
    vector<string> historial;
    int deposito, retiro, opcion;
    int umbralBonificacion = 5000;
    double bonificacion = 1.10;

    do {
        cout << "Saldo actual: $" << saldo << "\n";
        cout << "1. Depositar\n2. Retirar\n3. Ver historial\n4. Bonificación\n5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el monto a depositar: $";
                cin >> deposito;
                saldo += deposito;
                historial.push_back("Depósito: $" + to_string(deposito) + " | Saldo antes: " + to_string(saldo - deposito) + " | Saldo después: " + to_string(saldo));
                break;
            case 2:  // Retirar
                cout << "Ingrese el monto a retirar: $";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Saldo insuficiente.\n";
                } else {
                    saldo -= retiro;
                    historial.push_back("Retiro: $" + to_string(retiro) + " | Saldo antes: " + to_string(saldo + retiro) + " | Saldo después: " + to_string(saldo));
                }
                break;
            case 3:  // Ver historial
                std::cout << "Historial de transacciones:\n";


                historial.push_back("Consulta de historial | Saldo antes: " + to_string(saldo) + " | Saldo después: " + to_string(saldo));

                for (int i = 0; i < historial.size(); ++i) {
                    cout << setw(3) << i + 1 << ". " << historial[i] << "\n";
                }
                break;
            case 4:
                if (saldo > umbralBonificacion) {
                    saldo *= bonificacion;
                    historial.push_back("Bonificación aplicada | Saldo antes: " + to_string(saldo / bonificacion) + " | Saldo después: " + to_string(saldo));
                    cout << "Bonificación aplicada. Nuevo saldo: $" << saldo << "\n";
                } else {

                    historial.push_back("Bonificación no aplicada | Saldo antes: " + to_string(saldo) + " | Saldo después: " + to_string(saldo));
                    cout << "No se alcanzó el umbral para bonificación.\n";
                }
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 5);

    return 0;
}