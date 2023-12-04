#include "../include/InterfazUsuario.h"
#include <iostream>
using namespace std;

InterfazUsuario::InterfazUsuario(ControllerFunciones* controlador) : controlador(controlador) {
}

void InterfazUsuario::mostrarMenu()
{
  int opcion;
  cout << "Bienvenido al sistema de reservas de entradas" << endl;
  cout << "Seleccione una opción:" << endl;
  cout << "1. Administrador" << endl;
  cout << "2. Cliente" << endl;
  cout << "3. Salir" << endl;
  cin >> opcion;

  switch (opcion) {
    case 1:
      mostrarMenuAdministrador();
      break;
    case 2:
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

void InterfazUsuario::mostrarMenuAdministrador() {
  int opcion;
  string titulo;
  float precio;
  int filas, columnas;
  cout << "Bienvenido al sistema de administración" << endl;
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
    break;

  case 2:
    cout << "Ingrese el título de la película" << endl;
    cin >> titulo;
    break;
  
  case 3:
    cout << "Ingrese el título de la película" << endl;
    cin >> titulo;
    break;
  
  case 4:
    cout << "Saliendo..." << endl;
    break;
    
  default:
    break;
  }

}

// void mostrarMenuCliente() {
//   int opcion;
//   cout << "1. Comprar entradas" << endl;
//   cout << "2. Salir" << endl;
//   cin >> opcion;
// }


