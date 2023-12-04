#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include "../include/Pelicula.h"
#include "../include/InterfazUsuario.h"

int main() {
  Cine cine;
  ControllerFunciones controllerFunciones(cine);
  // Pelicula titanic("Titanic", 10);
  // Pelicula dracula("Dracula", 15);
  // Pelicula frankenstein("Frankenstein", 20); 
  // controllerFunciones.crearFuncion(titanic, 10, 10);
  // controllerFunciones.crearFuncion(dracula, 10, 10);
  // controllerFunciones.crearFuncion(frankenstein, 10, 10);
  // controllerFunciones.mostrarFunciones();
  InterfazUsuario interfazUsuario(&controllerFunciones);
  interfazUsuario.mostrarMenu();
  return 0;
}