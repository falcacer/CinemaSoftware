#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include "../include/Pelicula.h"
#include "../include/InterfazUsuario.h"

int main() {
  string titulo1 = "El Padrino";
  Pelicula pelicula1(titulo1);
  Funcion funcion1(1, pelicula1, 100, 5, 5);
  vector<Funcion> funcionesProgramadas = {funcion1};
  
  Cine metropolitano(funcionesProgramadas);
  ControllerFunciones controllerFunciones(metropolitano);
  InterfazUsuario interfazUsuario(controllerFunciones);
  interfazUsuario.seleccionarModo();
  return 0;
}