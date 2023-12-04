#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include "../include/Funcion.h"
#include <iostream>
using namespace std;

ControllerFunciones::ControllerFunciones(Cine& cine) : cine(cine) {
}

void ControllerFunciones::crearFuncion(Pelicula& pelicula, int filas, int columnas) {
  Funcion nuevaFuncion(cine.contadorIds++, pelicula, filas, columnas);
  cine.funcionesProgramadas.push_back(nuevaFuncion);
}

void ControllerFunciones::eliminarFuncion(int id) {
  for (int i = 0; i < cine.funcionesProgramadas.size(); i++) {
    if (cine.funcionesProgramadas[i].id == id) {
      cine.funcionesProgramadas.erase(cine.funcionesProgramadas.begin() + i);
      break;
    }
  }
}

void ControllerFunciones::mostrarFunciones() const
{
  for (size_t i = 0; i < cine.funcionesProgramadas.size(); ++i) {
    Funcion funcion = cine.funcionesProgramadas[i];
    cout << "Sala: " << funcion.id << "\n";
    cout << "Película: " << funcion.pelicula.titulo << "\n";
    cout << "Precio: " << funcion.pelicula.precio << "\n";
    cout << "------------------------\n";
  }
}
