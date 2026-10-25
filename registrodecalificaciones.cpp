#include <iostream>
using namespace std;

int main() {

    double nota;
    double suma = 0;
    double promedio;
    int aprobados = 0;
    char repetir; 

    do {
        suma = 0;
        aprobados = 0;

        cout << "==================================================\n";
        cout << "==================================================\n";
        cout << "REGISTRO DE CALIFICACIONES\n";
        cout << "==================================================\n";

        for (int estudiante = 1; estudiante <= 5; estudiante++) {
            cout << "Ingrese la nota de estudiante "
                 << estudiante << ": ";
            cin >> nota;

            
            while (nota < 0 || nota > 5) { 
                cout << "nota invalida\n";
                cout << "ingrese una nota entre 0 y 5: ";
                cin >> nota;
            }

            suma = suma + nota;

            
            if (nota >= 3.0) {
                aprobados++;
            }
        }

        promedio = suma / 5;

        cout << "==================================================\n";
        cout << " RESULTADOS\n";
        cout << "==================================================\n";

        cout << "suma de las notas: " << suma << endl;
        cout << "promedio: " << promedio << endl;
        cout << "estudiantes aprobados: " << aprobados << endl; 
        cout << "estudiantes reprobados: "
             << 5 - aprobados << endl;

        cout << "Desea repetir el programa? (s/n): ";
        cin >> repetir;

    } while (repetir == 'S' || repetir == 's'); 

    cout << "\nprograma finalizado\n";

    return 0;
}

