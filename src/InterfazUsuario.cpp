#include "../include/InterfazUsuario.h"
#include "../include/ControllerFunciones.h"
#include <iostream>
using namespace std;

void mostrarMenuAdministrador(Cine cine, ControllerFunciones controllerFunciones) {
  int opcion;
  string titulo;
  float precio;
  int filas;
  int columnas;
  cout << "1. Crear función" << endl;
  cout << "2. Eliminar función" << endl;
  cout << "3. Registrar recaudación" << endl;
  cout << "4. Salir" << endl;
  cin >> opcion;

  switch (opcion)
  {
  case 1:
    cout << "Ingrese el título de la película" << endl;
    cin >> titulo;
    cout << "Ingrese el precio de la película" << endl;
    cin >> precio;
    cout << "Ingrese la cantidad de filas" << endl;
    cin >> filas;
    cout << "Ingrese la cantidad de columnas" << endl;
    cin >> columnas;
    controllerFunciones.crearFuncion(titulo, precio, filas, columnas);
    break;
  
  default:
    break;
  }

}

void mostrarMenuCliente() {
  int opcion;
  cout << "1. Comprar entradas" << endl;
  cout << "2. Salir" << endl;
  cin >> opcion;
}

void mostrarMenu(Cine cine, ControllerFunciones controllerFunciones) {
  int opcion;
  cout << "Bienvenido al sistema de reservas de entradas" << endl;
  cout << "Seleccione una opción:" << endl;
  cout << "1. Administrador" << endl;
  cout << "2. Cliente" << endl;
  cout << "3. Salir" << endl;
  cin >> opcion;

  switch (opcion) {
    case 1:
      mostrarMenuAdministrador(Cine cine, ControllerFunciones controllerFunciones);
      break;
    case 2:
      mostrarMenuCliente();
      break;
    case 3:
      cout << "Saliendo..." << endl;
      break;
    default:
      cout << "Opción inválida" << endl;
      mostrarMenu();
      break;
  }
}
