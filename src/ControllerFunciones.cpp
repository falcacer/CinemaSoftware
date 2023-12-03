#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include "../include/Funcion.h"
#include <iostream>
using namespace std;

ControllerFunciones::ControllerFunciones(Cine& cine) : cine(cine) {
  contadorIds = 0;
}

void ControllerFunciones::crearFuncion(Pelicula pelicula, int filas, int columnas) {
  Funcion nuevaFuncion(contadorIds++, pelicula, filas, columnas);
  cine.funcionesProgramadas.push_back(nuevaFuncion);
}

void ControllerFunciones::eliminarFuncion(Funcion funcion) {
  int functionId = funcion.id;
  for (int i = 0; i < cine.funcionesProgramadas.size(); i++) {
    if (cine.funcionesProgramadas[i].id == functionId) {
      cine.funcionesProgramadas.erase(cine.funcionesProgramadas.begin() + i);
      break;
    }
  }
}

void ControllerFunciones::mostrarFunciones() const
{
  for (size_t i = 0; i < cine.funcionesProgramadas.size(); ++i) {
    Funcion& funcion = cine.funcionesProgramadas[i];
    cout << "Sala: " << funcion.id << "\n";
    cout << "Película: " << funcion.pelicula.titulo << "\n";
    cout << "Precio: " << funcion.pelicula.precio << "\n";
    cout << "------------------------\n";
  }
}
