#include "../include/Funcion.h"
#include <iostream>

Funcion::Funcion(int sala, Pelicula& pelicula, int filas, int columnas) 
    : sala(sala), pelicula(pelicula), filas(filas), columnas(columnas), 
      asientos(filas, vector<bool>(columnas, false)) {}

int Funcion::getSala() 
{ 
  return sala;
}

Pelicula Funcion::getPelicula() 
{
  return pelicula;
}

int Funcion::getFilas() 
{
  return filas;
}

int Funcion::getColumnas() 
{ 
  return columnas;
}

void Funcion::setAsientos(vector<vector<bool>> asientos)
{
  this->asientos = asientos;
}

vector< vector<bool> > Funcion::getAsientos() 
{ 
  return asientos;
}

void Funcion::reservarAsiento(int fila, int columna) 
{
  asientos[fila][columna] = true;
}

bool Funcion::verificarDisponibilidad(int fila, int columna) 
{
  return asientos[fila][columna];
}

void Funcion::mostrarAsientos()
{
  cout << "Asientos: \n";

  for (int i = 0; i < filas; i++) 
  {
    for (int j = 0; j < columnas; j++) 
    {
      if (asientos[i][j]) 
      {
        cout << "X ";
      } 
      else 
      {
        cout << "O ";
      }
    }
    cout << "\n";
  }
}

float Funcion::obtenerRecaudacion() 
{
  float recaudacion = 0;
  for (int i = 0; i < filas; i++) 
  {
    for (int j = 0; j < columnas; j++) 
    {
      if (asientos[i][j]) 
      {
        recaudacion += getPelicula().getPrecio();
      }
    }
  }
  return recaudacion;
}



