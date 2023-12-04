#ifndef FUNCION_PELICULA_H
#define FUNCION_PELICULA_H

#include <vector>
#include "Pelicula.h"

class Funcion{
public:
  int id;
  Pelicula pelicula;
  int filas;
  int columnas;
  std::vector<std::vector<bool> > asientos; // true: ocupado, false: libre

  Funcion(int id, Pelicula& pelicula, int filas, int columnas);

  void ReservarAsiento(int fila, int columna);
  bool VerificarDisponibilidad(int fila, int columna);
};

#endif // FUNCION_PELICULA_H
