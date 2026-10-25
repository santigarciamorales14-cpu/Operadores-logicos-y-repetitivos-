#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float nota;
    int asistencia;
    int categoria;

    cout << fixed << setprecision(1);
    cout <<"=== CLASIFICADOR DE DESEMPENO ACADEMICO ===" << endl << endl;
    cout <<"Ingrese la nota definitiva (0.0-5.0): ";
    cin  >> nota;

    cout << "Ingrese el porcentaje de asistencia (0-100): ";
    cin  >> asistencia;
    cout << endl;
    if(nota < 0.0 || nota > 5.0) {
       cout << "ERROR: la nota debe estar entre 0.0 y 5.0." << endl;
       return 1;
    }
    
    if (asistencia < 0 || asistencia > 100 ) {
        cout <<"ERROR: la asistencia debe estar entre 0 y 100. " << endl;
        return 1;
    }
    if (nota >= 4.6) {
        categoria = 1;
    } else if (nota >= 4.0)  {
      categoria = 2;
    } else if ( nota >= 3.0) {     
      categoria = 3;  
    } else {
        categoria = 4;
    }
    bool aprobado;

    if(nota >= 3.0) {
       if (asistencia >= 70) {
           aprobado = true;
       } else {
           aprobado = false;
       }  
    }
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Nota registrada  : " << nota << endl;
    cout << "Asistencia       : " << asistencia << "%" << endl;
    
    switch (categoria) {
        case 1:
            cout <<  "SUPERIOR " << endl;
            cout <<   "Excelente trabajo, mantenga el ritmo." << endl;
            break;
        case 2:
            cout << "ALTO" << endl;
            cout << "Muy bien resultado, esta cerca del nivel superior"
            break;
        case 3:
            cout << "BASICO" << endl;
            cout << "Aprobado, pero conviene reforzar los temas vistos"
            break;
        case 4:
             cout << "BAJO" <<endl;
             cout << "Debe presentar plan de mejoramiento." << endl;
             break;
        default:
            cout << "SIN CLASIFICAR" << endl;
    }
    
    if (aprobado) {
        cout << "Estado                             : APROBADO" << endl;
    }   else {
        cout << "Estado                             : REPROBADO" << endl;
    }
    cout << "---------------------------------------------------------------" << endl;
    
    return 0;
}    
