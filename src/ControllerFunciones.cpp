#include "../include/ControllerFunciones.h"
#include "../include/Funcion.h"
#include <iostream>

ControllerFunciones::ControllerFunciones() : funcionesProgramadas(), contadorSalas(0) {}

ControllerFunciones::ControllerFunciones(vector<Funcion> funcionesProgramadas) 
{
  this->funcionesProgramadas = funcionesProgramadas;
  this->contadorSalas = funcionesProgramadas.size();
}

int ControllerFunciones::getContadorSalas()
{
  return contadorSalas;
}

vector<Funcion>& ControllerFunciones::getFuncionesProgramadas()
{
  return funcionesProgramadas;
}

void ControllerFunciones::setContadorSalas(int contadorSalas)
{
  this->contadorSalas = contadorSalas;
}

void ControllerFunciones::crearFuncion(Pelicula& pelicula, int filas, int columnas) {
  int nuevaSala = getContadorSalas() + 1;
  setContadorSalas(nuevaSala);
  Funcion nuevaFuncion(nuevaSala, pelicula, filas, columnas);
  getFuncionesProgramadas().push_back(nuevaFuncion);
}

void ControllerFunciones::eliminarFuncion(int sala) {
  
  if (getFuncionesProgramadas().size() == 0) {
    cout << "No hay funciones programadas.\n";
    return;
  }

  if (sala > getFuncionesProgramadas().size()) {
    cout << "No se encontró la sala.\n";
    return;
  }
  getFuncionesProgramadas().erase(getFuncionesProgramadas().begin() + sala - 1);
}

void ControllerFunciones::mostrarFunciones()
{
  cout << "------ Funciones Programadas ------\n";
  for (int i = 0; i < getFuncionesProgramadas().size(); i++) {
    Funcion funcion = getFuncionesProgramadas()[i];
    cout << "Sala: " << funcion.getSala() << "\n";
    cout << "Película: " << funcion.getPelicula().getTitulo() << "\n";
    cout << "Precio: " << funcion.getPelicula().getPrecio() << "\n";
    funcion.mostrarAsientos();
    cout << "------------------------\n";
  }
}

Funcion& ControllerFunciones::getFuncionBySala(int sala)
{
  return getFuncionesProgramadas()[sala - 1];
}
