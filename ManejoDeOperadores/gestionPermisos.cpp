#include <iostream>
#include <bitset>
using namespace std;
const int PERMISO_LECTURA = 0b100;
const int PERMISO_ESCRITURA = 0b010;
const int PERMISO_EJECUCION = 0b001;

int main() {
    system("chcp 65001");

    int permisos = 0b000;


    cout << "Representación de permisos:\n";
    cout << "bit 2 -> Lectura\n";
    cout << "bit 1 -> Escritura\n";
    cout << "bit 0 -> Ejecución\n\n";

    int opcion;

    do {
        cout << "\nMenú de Permisos:\n";
        cout << "1. Agregar permiso de lectura\n";
        cout << "2. Quitar permiso de lectura\n";
        cout << "3. Agregar permiso de escritura\n";
        cout << "4. Quitar permiso de escritura\n";
        cout << "5. Agregar permiso de ejecución\n";
        cout << "6. Quitar permiso de ejecución\n";
        cout << "7. Ver permisos actuales\n";
        cout << "8. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                permisos |= PERMISO_LECTURA;
                cout << "Permiso de lectura agregado.\n";
                break;
            case 2:
                permisos &= ~PERMISO_LECTURA;
                cout << "Permiso de lectura quitado.\n";
                break;
            case 3:
                permisos |= PERMISO_ESCRITURA;
                cout << "Permiso de escritura agregado.\n";
                break;
            case 4:
                permisos &= ~PERMISO_ESCRITURA;
                cout << "Permiso de escritura quitado.\n";
                break;
            case 5:
                permisos |= PERMISO_EJECUCION;
                cout << "Permiso de ejecución agregado.\n";
                break;
            case 6:
                permisos &= ~PERMISO_EJECUCION;
                cout << "Permiso de ejecución quitado.\n";
                break;
            case 7: // Ver permisos actuales
                cout << "Permisos actuales (en binario): " << bitset<3>(permisos) << "\n";
                cout << "Permisos actuales (en decimal): " << permisos << "\n";
                break;
            case 8: // Salir
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida.\n";
                break;
        }
    } while (opcion != 8);

    return 0;
}
