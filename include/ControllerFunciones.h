#ifndef CONTROLLER_FUNCIONES_H
#define CONTROLLER_FUNCIONES_H

#include "Pelicula.h"
#include "Funcion.h"
#include "Cine.h"
using namespace std;

class ControllerFunciones {
  private:
    Cine& cine;

  public:
    // Constructor
    ControllerFunciones(Cine& cine);

    // Methods
    void crearFuncion(Pelicula& pelicula, float precio, int filas, int columnas);
    void eliminarFuncion(int sala);
    void mostrarFunciones();
    void comprarEntrada(int sala, int fila, int columna);
};

#endif // CONTROLLER_FUNCIONES_H
