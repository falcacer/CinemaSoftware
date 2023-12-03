#include "../include/Funcion.h"
#include <iostream>
#include <cassert>
using namespace std;

void testFuncionVacia() {
  Pelicula pelicula("El Padrino", 100);
  Funcion funcion(1, pelicula, 10, 10);
  for (int i = 0; i < funcion.filas; i++) {
    for (int j = 0; j < funcion.columnas; j++) {
      assert(funcion.VerificarDisponibilidad(i, j) == false);
    }
  }
  cout << "Test funcion vacia passed" << endl;
}

void testReservarAsiento() {
  Pelicula pelicula("El Padrino", 100);
  Funcion funcion(1, pelicula, 10, 10);
  funcion.ReservarAsiento(0, 0);
  assert(funcion.VerificarDisponibilidad(0, 0) == true);
  cout << "Test reservar asiento passed" << endl;
}

int main() {
  testFuncionVacia();
  testReservarAsiento();
  return 0;
}