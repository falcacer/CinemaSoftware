#include "../include/Cine.h"
#include "Cine.h"

Cine::Cine() : recaudacionTotal(0), contadorSalas(1) {}

Cine::Cine(vector<Funcion> funcionesProgramadas)
{
  this->funcionesProgramadas = funcionesProgramadas;
  this->contadorSalas = funcionesProgramadas.size();
}

void Cine::setFuncionesProgramadas(vector<Funcion> funcionesProgramadas)
{
  this->funcionesProgramadas = funcionesProgramadas;
}

vector<Funcion> Cine::getFuncionesProgramadas()
{
  return funcionesProgramadas;
}

void Cine::setRecaudacionTotal(float recaudacionTotal)
{
  this->recaudacionTotal = recaudacionTotal;
}

float Cine::getRecaudacionTotal()
{
  return recaudacionTotal;
}

void Cine::setContadorSalas(int contadorSalas)
{
  this->contadorSalas = contadorSalas;
}

int Cine::getContadorSalas()
{
  return contadorSalas;
}

void Cine::agregarFuncion(Funcion funcion)
{
  funcionesProgramadas.push_back(funcion);
}
