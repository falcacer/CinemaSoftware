#include "../include/ControllerFunciones.h"
#include "../include/ControllerEntradas.h"
#include "../include/Cine.h"
#include "../include/Pelicula.h"
#include "../include/InterfazUsuario.h"
#include <iostream>
using namespace std;

int main() 
{
  string titulo1 = "El Padrino";
  Pelicula pelicula1(titulo1, 100);
  Funcion funcion1(1, pelicula1, 5, 5);
  vector<Funcion> funcionesProgramadas = {funcion1};
  
  ControllerFunciones controllerFunciones(funcionesProgramadas);
  ControllerEntradas controllerEntradas;
  Cine metropolitano(controllerEntradas, controllerFunciones);
  InterfazUsuario interfazUsuario(metropolitano);
  interfazUsuario.seleccionarModo();

  return 0;
}