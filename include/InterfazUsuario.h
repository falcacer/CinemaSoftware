// include/InterfazUsuario.h
#ifndef INTERFAZ_USUARIO_H
#define INTERFAZ_USUARIO_H

#include "ControllerFunciones.h"
using namespace std;

class InterfazUsuario {
private:
  ControllerFunciones &controllerFunciones;

public:
  // Constructor
  InterfazUsuario(ControllerFunciones &controllerFunciones);

  // Methods
  void seleccionarModo();
  void mostrarMenuAdmin();
  void mostrarMenuCliente();
  void ejecutarOpcionAdmin();
  void ejecutarOpcionCliente();
  void opcionCrear();
  void opcionEliminar();
  void opcionMostrar();
  void opcionComprar();
};

#endif // INTERFAZ_USUARIO_H
