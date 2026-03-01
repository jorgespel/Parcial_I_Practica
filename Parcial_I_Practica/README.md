# Parcial I - Práctica (Punteros y Nodos)
**Nombre: Jorge Eduardo Espel Melgar 
Carné: 9941-24-10596
Sección: B**

Descripción
Este programa en C++ crea dinámicamente 3 nodos usando `new`, solicita al usuario un valor entero para cada nodo, enlaza los nodos en el mismo orden en que se ingresan y luego recorre la lista mostrando los valores usando punteros.

¿Cómo funciona?
1. Se define la estructura `Nodo` con un entero `dato` y un puntero `siguiente`.
2. Se crean 3 nodos dinámicos (`n1`, `n2`, `n3`) con `new`.
3. Se piden los datos al usuario y se guardan con `nX->dato`.
4. Se enlazan los nodos: `n1 -> n2 -> n3 -> NULL`.
5. Se recorre la lista con un puntero auxiliar y se imprimen los valores.
6. Se libera la memoria con `delete` antes de terminar el programa.
