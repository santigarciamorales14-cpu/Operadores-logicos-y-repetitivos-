#include <iostream>
using namespace std;

int main() {
    double venta;
    double totalVentas;
    int ventasGrandes;
    char repetir;

    do {
        totalVentas = 0;
        ventasGrandes = 0;

        cout << "===============================\n";
        cout << "  REGISTRO DE VENTAS\n";
        cout << "===============================\n\n";

        for (int ventasNumero = 1; ventasNumero <= 5; ventasNumero++) {
            cout << "Ingrese el valor de la venta "
                 << ventasNumero << ": $";
            cin >> venta;

            while (venta <= 0) {
                cout << "El valor debe ser mayor que $0.\n";
                cout << "Ingrese nuevamente la venta: $";
                cin >> venta;
            }

            totalVentas += venta;
            if (venta > 100000) {
                ventasGrandes++;
            }
        }

        cout << "\n===============================\n";
        cout << "       RESUMEN DE VENTAS\n";
        cout << "===============================\n";
        cout << "Total vendido: $" << totalVentas << endl;
        cout << "Ventas superiores a $100.000: "
             << ventasGrandes << endl;

        cout << "\n¿Desea registrar otro grupo de ventas? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
