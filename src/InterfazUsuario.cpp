#include "../include/InterfazUsuario.h"
#include "../include/ControllerFunciones.h"
#include "../include/Pelicula.h"
#include <iostream>

InterfazUsuario::InterfazUsuario(ControllerFunciones &controllerFunciones) : controllerFunciones(controllerFunciones) {}

void InterfazUsuario::seleccionarModo() {
  int modo;
  do {
    cout << "Seleccione el modo:\n";
    cout << "1. Modo Administrador\n";
    cout << "2. Modo Cliente\n";
    cout << "3. Salir\n";
    cout << "Seleccione: ";
    cin >> modo;

    if (modo == 1) {
      mostrarMenuAdmin();
      ejecutarOpcionAdmin();
    } else if (modo == 2) {
      mostrarMenuCliente();
      ejecutarOpcionCliente();
    } else if (modo == 3) {
      cout << "Saliendo del programa.\n";
    } else {
      cout << "Modo no válido. Por favor, seleccione nuevamente.\n";
      cin.clear();
      cin.ignore(10000, '\n');
    }
  } while (modo != 3);
}

void InterfazUsuario::mostrarMenuAdmin() {
    cout << "------ Menú de Administrador ------\n";
    cout << "1. Crear nueva función\n";
    cout << "2. Eliminar función\n";
    cout << "3. Mostrar funciones programadas\n";
    cout << "4. Salir\n";
    cout << "-----------------------------------\n";
}

void InterfazUsuario::ejecutarOpcionAdmin() 
{
  int opcion;
  do 
  {
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion) 
    {
      case 1:
        opcionCrear();
        return;
      case 2:
        opcionEliminar();
        return;
      case 3:
        opcionMostrar();
        return;
      case 4:
        cout << "Saliendo del modo administrador.\n";
        return;
      default:
        cout << "Opción no válida. Por favor, seleccione nuevamente.\n";
      }
  } while (opcion != 4);
}

void InterfazUsuario::mostrarMenuCliente() 
{
    cout << "------ Menú de Cliente ------\n";
    cout << "1. Mostrar funciones programadas\n";
    cout << "2. Comprar entrada\n";
    cout << "3. Salir\n";
    cout << "-----------------------------\n";
}

void InterfazUsuario::ejecutarOpcionCliente() 
{
  int opcion;
  do 
  {
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion) 
    {
      case 1:
        opcionMostrar();
        return;
      case 2:
        opcionComprar();
        return;
      case 3:
        cout << "Saliendo del modo cliente.\n";
        return;
      default:
        cout << "Opción no válida. Por favor, seleccione nuevamente.\n";
    }
  } while (opcion != 3);
}

void InterfazUsuario::opcionCrear() {
  string titulo;
  float precio;
  int filas, columnas;
  cout << "Ingrese el título de la película: ";
  cin >> titulo;
  cout << "Ingrese el precio de la entrada: ";
  cin >> precio;
  cout << "Ingrese la cantidad de filas: ";
  cin >> filas;
  cout << "Ingrese la cantidad de columnas: ";
  cin >> columnas;
  Pelicula pelicula(titulo);
  controllerFunciones.crearFuncion(pelicula, precio, filas, columnas);
  cout << "Función creada exitosamente.\n";

}

void InterfazUsuario::opcionEliminar() {
  int sala;
  cout << "Ingrese el número de sala: ";
  cin >> sala;
  controllerFunciones.eliminarFuncion(sala);
  cout << "Función eliminada exitosamente.\n";
}

void InterfazUsuario::opcionMostrar() {
  controllerFunciones.mostrarFunciones();
}

void InterfazUsuario::opcionComprar() {
  int sala, fila, columna;
  cout << "Ingrese el número de sala: ";
  cin >> sala;
  cout << "Ingrese la fila: ";
  cin >> fila;
  cout << "Ingrese la columna: ";
  cin >> columna;
  controllerFunciones.comprarEntrada(sala, fila, columna);
}