#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    string nombreCompleto = "Jorge Eduardo Espel Melgar";

    cout << "Nombre del estudiante: " << nombreCompleto << endl;
    cout << "======================================" << endl;

    // Creacion de 3 nodos
    Nodo* n1 = new Nodo;
    Nodo* n2 = new Nodo;
    Nodo* n3 = new Nodo;

    // Pedir datos al usuario
    cout << "Ingrese el valor para el nodo 1: ";
    cin >> n1->dato;

    cout << "Ingrese el valor para el nodo 2: ";
    cin >> n2->dato;

    cout << "Ingrese el valor para el nodo 3: ";
    cin >> n3->dato;

    // Enlazar nodos en el orden ingresado
    n1->siguiente = n2;
    n2->siguiente = n3;
    n3->siguiente = NULL;

    // Mostrar valores accediendo mediante los punteros
    cout << "\nValores guardados en la lista:" << endl;

    Nodo* aux = n1;
    int contador = 1;

    while (aux != NULL) {
        cout << "Nodo " << contador << ": " << aux->dato << endl;
        aux = aux->siguiente;
        contador++;
    }

    // Liberacion de memoria
    delete n1;
    delete n2;
    delete n3;


    n1 = NULL;
    n2 = NULL;
    n3 = NULL;

    cout << "\nMemoria liberada. Fin del programa." << endl;

    return 0;
}
