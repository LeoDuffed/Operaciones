/* 
  Hecho por: 
  Leonardo Martínez Peña
  17/11/2024
*/

#include <iostream> 
using namespace std;

class Operation{
private: 
    double nUno;
    double nDos;
    double respuesta;
public: 

// contructores 
    Operation() : nUno(0), nDos(0), respuesta(0){}

    Operation(double nUno, double nDos, double respuesta){
        this -> nUno = nUno;
        this -> nDos = nDos;
        this -> respuesta = respuesta;
    }
// setters
    void setNumUno(double nUno){
        this -> nUno = nUno;
    }

    void setNumDos(double nDos){
        this -> nDos = nDos;
    }

    void setRespuesta(double respuesta){
        this -> respuesta = respuesta;
    }
// getters
    double getNumUno(){
        cout << "Ingresa el primer numero: "<< endl;
        cin >> nUno;
        return nUno;
    }
    double getNumDos(){
        cout << "Ingresa el segundo numero: "<< endl;
        cin >> nDos;
        return nDos;
    }

    double suma(){
        respuesta = nUno + nDos;
        cout << "\nEl resultado de tu suma es: "<<respuesta<< endl;
        return respuesta;
    }

// Funciones de Operaciones
    double resta(){
        char cambiarOrden;
        do{
            cout << "Se restara: "<< nDos << " - "<< nUno<< endl;
            cout << "Desea cmabiar el orden se sus numeros (s/n)";
            cin >> cambiarOrden;
            if ( cambiarOrden == 's' || cambiarOrden == 's') {
                cout << "Ingresa tu primer numero: "<< endl;
                cin >> nUno;
                cout << "Ingresa tu segudno numero: "<< endl;
                cin >> nDos;
            } 

            respuesta = nDos - nUno;
            cout << "\nEl resultado de la resta es : "<<respuesta<< endl;
            return respuesta;
       
        } while (cambiarOrden != 's' && cambiarOrden != 'S');
        return respuesta;
    }

    double multiplicacion(){
        respuesta= nUno * nDos;
        cout << "\nEl resultado de tu multiplicacion es: "<< respuesta<< endl;
        return respuesta;
    }

    double divicion(){
        char cambiarOrden;
        do{
            if (nUno == 0){
                cout << "Error: No se puede dividir entre 0";
                cout << "Ingresa el primer numero: ";
                cin >> nUno;
            }
            cout << "La divicion se hara asi: "<< nUno << " / "<< nDos <<endl;
            cout << "Desas cambiar el orden de tus numeros? (s/n)";
            cin >> cambiarOrden;

            if (cambiarOrden == 's' || cambiarOrden == 'S') {
                cout << "Ingresa tu primer numero: "<< endl;
                cin >> nUno;
                cout << "Ingresa tu segudno numero :"<< endl;
                cin >> nDos;
            } 

           respuesta = nUno / nDos;
           cout << "\nEl resultado de tu divicion es: "<< respuesta << endl;
           return respuesta;

        } while (cambiarOrden != 's' && cambiarOrden != 'S');
        return respuesta;
    }
};

int main(){
    Operation op;
    int opcion;

    do {
        cout << "\n1 = suma\n2 = resta\n3 = multiplicacion\n4 = divicion\n0 = Salir";
        cout << "\nSeleccione una ocion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4){
            op.getNumUno();
            op.getNumDos();
        }

        switch (opcion){
            case 1: 
                op.suma();
                break;
            case 2:
                op.resta();
                break;
            case 3:
                op.multiplicacion();
                break;
            case 4:
                op.divicion();
                break;
            case 0:
                cout << "\nSaliendo del programa ...";
                break;
            default:
                cout << "\nOpcion no valida, Ingrese de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;

}