#include "../include/Cine.h"
#include <iostream>
#include "Cine.h"

Cine::Cine(ControllerEntradas &controllerEntradas, ControllerFunciones &controllerFunciones) : controllerEntradas(controllerEntradas), controllerFunciones(controllerFunciones) {}

ControllerEntradas &Cine::getControllerEntradas()
{
  return controllerEntradas;
}

ControllerFunciones &Cine::getControllerFunciones()
{
  return controllerFunciones;
}

vector<Funcion> Cine::getFuncionesProgramadas()
{
  return getControllerFunciones().getFuncionesProgramadas();
}

bool Cine::validarEntrada(Entrada entrada, Funcion funcion)
{
  int entradaFila = entrada.getFila();
  int entradaColumna = entrada.getColumna();
  int entradaSala = entrada.getSala();
  int funcionFila = funcion.getFilas();
  int funcionColumna = funcion.getColumnas();
  int funcionSala = funcion.getSala();
  
  return !(entradaFila < 0 || entradaFila >= funcionFila || entradaColumna < 0 
         || entradaColumna >= funcionColumna || entradaSala != funcionSala ||
        funcion.verificarDisponibilidad(entradaFila, entradaColumna));
}

void Cine::venderEntrada(Entrada entrada)
{
  getControllerEntradas().crearEntrada(entrada);
  getControllerFunciones().getFuncionBySala(entrada.getSala()).reservarAsiento(entrada.getFila(), entrada.getColumna());
}

float Cine::getRecaudacionTotal()
{
  float recaudacion = 0;
  vector<Entrada> entradas = getControllerEntradas().getEntradas();
  vector<Funcion> funciones = getControllerFunciones().getFuncionesProgramadas();
  for (int i = 0; i < entradas.size(); i++)
  {
    for (int j = 0; j < funciones.size(); j++)
    {
      if (entradas[i].getSala() == funciones[j].getSala())
      {
        recaudacion += funciones[j].getPelicula().getPrecio();
      }
    }
  }
  return recaudacion;
}

float Cine::getRecaudacionTotalPorSala(int sala)
{
  float recaudacion = 0;
  vector<Entrada> entradas = getControllerEntradas().getEntradas();
  vector<Funcion> funciones = getControllerFunciones().getFuncionesProgramadas();
  for (int i = 0; i < entradas.size(); i++)
  {
    for (int j = 0; j < funciones.size(); j++)
    {
      if (entradas[i].getSala() == funciones[j].getSala() && entradas[i].getSala() == sala)
      {
        recaudacion += funciones[j].getPelicula().getPrecio();
      }
    }
  }
  return recaudacion;
}