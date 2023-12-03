#include "../include/Funcion.h"
using namespace std;

Funcion::Funcion(int id, Pelicula pelicula, int filas, int columnas) 
: id(id), pelicula(pelicula), filas(filas), columnas(columnas) 
{
  for (int i = 0; i < filas; i++) {
    vector<bool> fila;
    for (int j = 0; j < columnas; j++) {
      fila.push_back(false);
    }
    asientos.push_back(fila);
  }
}

void Funcion::ReservarAsiento(int fila, int columna) {
  asientos[fila][columna] = true;
}

bool Funcion::VerificarDisponibilidad(int fila, int columna) {
  return asientos[fila][columna];
}
