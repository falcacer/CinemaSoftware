#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include <iostream>
#include <cassert>
using namespace std;

void testCrearFuncion() {
  Cine cine;
  ControllerFunciones controllerFunciones(cine);
  Pelicula pelicula("El Padrino", 100);
  controllerFunciones.crearFuncion(pelicula, 10, 10);
  assert(cine.funcionesProgramadas.size() == 1);
  cout << "testCrearFuncion passed" << endl;
}

void testEliminarFuncion() {
  Cine cine;
  ControllerFunciones controllerFunciones(cine);
  Pelicula pelicula("El Padrino", 100);
  controllerFunciones.crearFuncion(pelicula, 10, 10);
  controllerFunciones.eliminarFuncion(cine.funcionesProgramadas[0]);
  assert(cine.funcionesProgramadas.size() == 0);
  cout << "testEliminarFuncion passed" << endl;
}

void testMostrarFunciones() {
  Cine cine;
  ControllerFunciones controllerFunciones(cine);
  Pelicula padrino("El Padrino", 100);
  Pelicula titanic("El Titanic", 100);
  controllerFunciones.crearFuncion(padrino, 10, 10);
  controllerFunciones.crearFuncion(titanic, 20, 20);
  controllerFunciones.mostrarFunciones();
  cout << "testMostrarFunciones passed" << endl;
}

int main() {
  testCrearFuncion();
  testEliminarFuncion();
  testMostrarFunciones();
  return 0;
}