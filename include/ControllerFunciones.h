#ifndef CONTROLLER_FUNCIONES_H
#define CONTROLLER_FUNCIONES_H

#include "Pelicula.h"
#include "Funcion.h"
#include "Cine.h"

class ControllerFunciones {
  private:
    Cine cine;

  public:
    ControllerFunciones(Cine& cine);
    void crearFuncion(Pelicula& pelicula, int filas, int columnas);
    void eliminarFuncion(int id);
    void mostrarFunciones() const;
};

#endif // CONTROLLER_FUNCIONES_H
