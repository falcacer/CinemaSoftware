#include "../include/ControllerEntradas.h"
#include <iostream>
#include "ControllerEntradas.h"

ControllerEntradas::ControllerEntradas() : entradas() {}
ControllerEntradas::ControllerEntradas(vector<Entrada> entradas) : entradas(entradas) {}

vector<Entrada> ControllerEntradas::getEntradas()
{
  return entradas;
}

void ControllerEntradas::setEntradas(vector<Entrada> entradas)
{
  this->entradas = entradas;
}

void ControllerEntradas::crearEntrada(Entrada entrada)
{
  entradas.push_back(entrada);
}

void ControllerEntradas::mostrarEntradas()
{
  cout << "------ Entradas ------\n";
  for (int i = 0; i < getEntradas().size(); i++) {
    Entrada entrada = getEntradas()[i];
    cout << "Nombre: " << entrada.getNombrePersona() << "\n";
    cout << "Fila: " << entrada.getFila() << "\n";
    cout << "Columna: " << entrada.getColumna() << "\n";
  }
}
void ControllerEntradas::mostrarEntradasPorSala(int sala)
{
  cout << "------ Entradas ------\n";
  for (int i = 0; i < getEntradas().size(); i++) {
    Entrada entrada = getEntradas()[i];
    if (entrada.getSala() == sala) {
      cout << "Nombre: " << entrada.getNombrePersona() << "\n";
      cout << "Fila: " << entrada.getFila() << "\n";
      cout << "Columna: " << entrada.getColumna() << "\n";
    }
  }
}
