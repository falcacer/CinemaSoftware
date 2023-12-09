#include "../include/InterfazUsuario.h"
#include "../include/Pelicula.h"
#include "../include/Cine.h"
#include <iostream>
#include "InterfazUsuario.h"

InterfazUsuario::InterfazUsuario(Cine& cine) : cine(cine) {}

void InterfazUsuario::seleccionarModo() 
{
  int modo;
  do {
    cout << "------ Bienvenido al Cine Metropolitano ------\n";
    cout << "Seleccione el modo:\n";
    cout << "1. Modo Administrador\n";
    cout << "2. Modo Cliente\n";
    cout << "3. Salir\n";
    cout << "Seleccione: ";
    cin >> modo;

    if (modo == 1) 
    {
      ejecutarOpcionAdmin();
    } 
    else if (modo == 2) 
    {
      ejecutarOpcionCliente();
    }
    else if (modo == 3) 
    {
      cout << "Saliendo del programa.\n";
    } 
    else 
    {
      cout << "Modo no válido. Por favor, seleccione nuevamente.\n";
      cin.clear();
      cin.ignore(10000, '\n');
    }
  } while (modo != 3);
}

void InterfazUsuario::mostrarMenuAdmin() 
{
    cout << "------ Menú de Administrador ------\n";
    cout << "1. Crear nueva función\n";
    cout << "2. Eliminar función\n";
    cout << "3. Mostrar funciones programadas\n";
    cout << "4. Mostrar Recaudacion\n";
    cout << "5. Salir\n";
    cout << "-----------------------------------\n";
}

void InterfazUsuario::ejecutarOpcionAdmin() 
{
  int opcion;
  do 
  {
    mostrarMenuAdmin();
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion) 
    {
      case 1:
        opcionCrear();
        continue;
      case 2:
        opcionEliminar();
        continue;
      case 3:
        opcionMostrar();
        continue;
      case 4:
        opcionMostrarRecaudacion();
        continue;
      case 5:
        cout << "Saliendo del modo administrador.\n";
        continue;
      default:
        cout << "Opción no válida. Por favor, seleccione nuevamente.\n";
      }
  } while (opcion != 5);
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
    mostrarMenuCliente();
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion) 
    {
      case 1:
        opcionMostrar();
        continue;
      case 2:
        opcionVender();
        continue;
      case 3:
        cout << "Saliendo del modo cliente.\n";
        continue;
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
  Pelicula pelicula(titulo, precio);
  cine.getControllerFunciones().crearFuncion(pelicula, filas, columnas);
  cout << "Función creada exitosamente.\n";
}

void InterfazUsuario::opcionEliminar() {
  int sala;
  cout << "Ingrese el número de sala: ";
  cin >> sala;
  cine.getControllerFunciones().eliminarFuncion(sala);
  cout << "Función eliminada exitosamente.\n";
}

void InterfazUsuario::opcionMostrar() {

  cine.getControllerFunciones().mostrarFunciones();
}

void InterfazUsuario::opcionVender() {
  int sala, fila, columna;
  string nombre;
  cout << "Ingrese su nombre: ";
  cin >> nombre;
  cout << "Ingrese el número de sala: ";
  cin >> sala;
  cout << "Ingrese la fila: ";
  cin >> fila;
  cout << "Ingrese la columna: ";
  cin >> columna;
  
  Entrada entrada(nombre, fila, columna, sala);
  Funcion funcion = cine.getControllerFunciones().getFuncionBySala(sala);
  if (cine.validarEntrada(entrada, funcion)) 
  {
    cine.venderEntrada(entrada);
    cout << "Entrada vendida exitosamente.\n";
  } else {
    cout << "Entrada no válida.\n";
  }
}
void InterfazUsuario::opcionMostrarRecaudacion()
{
  cout << "La recaudación total es: " << cine.getRecaudacionTotal() << endl;
}