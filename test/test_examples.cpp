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

  string cliente = "nombreTest";
  int fila = 1;
  int columna = 1;
  int sala = 1;
  
  Entrada entrada(cliente, fila, columna, sala);
  Funcion funcion = metropolitano.getControllerFunciones().getFuncionBySala(sala);
  if (metropolitano.validarEntrada(entrada, funcion)) 
  {
    metropolitano.venderEntrada(entrada);
    cout << "Entrada vendida exitosamente.\n";
  } else {
    cout << "Entrada no válida.\n";
  }

  cout << "Recaudacion Total: " <<  metropolitano.getRecaudacionTotal();

  metropolitano.getControllerEntradas().mostrarEntradasPorSala(sala);

  return 0;
}