#include "../include/ControllerFunciones.h"
#include "../include/Cine.h"
#include "../include/Funcion.h"
#include <iostream>
#include "ControllerFunciones.h"

ControllerFunciones::ControllerFunciones(Cine& cine) : cine(cine) {}

void ControllerFunciones::crearFuncion(Pelicula& pelicula, float precio, int filas, int columnas) {
  int nuevaSala = cine.getContadorSalas() + 1;
  Funcion nuevaFuncion(nuevaSala, pelicula, precio, filas, columnas);
  cine.agregarFuncion(nuevaFuncion);
  cine.setContadorSalas(nuevaSala);
}

void ControllerFunciones::eliminarFuncion(int sala) {
  vector<Funcion> funcionesProgramadas = cine.getFuncionesProgramadas();
  if (funcionesProgramadas.size() == 0) {
    cout << "No hay funciones programadas.\n";
    return;
  }

  if (sala > funcionesProgramadas.size()) {
    cout << "No se encontró la sala.\n";
    return;
  }

  funcionesProgramadas.erase(funcionesProgramadas.begin() + sala - 1);
  cine.setFuncionesProgramadas(funcionesProgramadas);
}

void ControllerFunciones::mostrarFunciones()
{
  cout << "------ Funciones Programadas ------\n";
  for (int i = 0; i < cine.getFuncionesProgramadas().size(); i++) {
    Funcion funcion = cine.getFuncionesProgramadas()[i];
    cout << "Sala: " << funcion.getSala() << "\n";
    cout << "Película: " << funcion.getPelicula().getTitulo() << "\n";
    cout << "Precio: " << funcion.getPrecio() << "\n";
    funcion.mostrarAsientos();
    cout << "------------------------\n";
  }
}
void ControllerFunciones::comprarEntrada(int sala, int fila, int columna)
{
  for (int i = 0; i < cine.getFuncionesProgramadas().size(); i++) {
    if (cine.getFuncionesProgramadas()[i].getSala() == sala) {
      if (cine.getFuncionesProgramadas()[i].verificarDisponibilidad(fila, columna)) {
        cout << "El asiento ya está reservado.\n";
        return;
      }
      else {
        cine.getFuncionesProgramadas()[i].reservarAsiento(fila, columna);
        cout << "Asiento reservado exitosamente.\n";
        return;
      }
    }
  }
  cout << "No se encontró la sala.\n";
}
