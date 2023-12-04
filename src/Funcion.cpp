#include "../include/Funcion.h"
#include "Funcion.h"
#include <iostream>

Funcion::Funcion(int sala, Pelicula& pelicula, float precio, int filas, int columnas) 
    : sala(sala), pelicula(pelicula), precio(precio), filas(filas), columnas(columnas), 
      asientos(filas, vector<bool>(columnas, false)) {}

int Funcion::getSala() { return sala;}

Pelicula Funcion::getPelicula() { return pelicula;}

float Funcion::getPrecio() { return precio;}

int Funcion::getFilas() { return filas;}

int Funcion::getColumnas() { return columnas;}

void Funcion::setAsientos(vector<vector<bool>> asientos)
{
  this->asientos = asientos;
}

vector< vector<bool> > Funcion::getAsientos() { return asientos;}

void Funcion::reservarAsiento(int fila, int columna) {
  vector< vector<bool> > nuevosAsientos = asientos;
  for (int i = 0; i < filas; i++) 
  {
    for (int j = 0; j < columnas; j++) 
    {
      if (i == fila && j == columna) 
      {
        asientos[i][j] = true;
      }
    }
  }
  setAsientos(nuevosAsientos);
}

bool Funcion::verificarDisponibilidad(int fila, int columna) {
  return asientos[fila][columna];
}

void Funcion::mostrarAsientos()
{
  cout << "Asientos: \n";

  cout << "  ";
  for (int i = 0; i < getColumnas(); i++) {
      cout << i << " ";
  }
  cout << "\n";

  for (int i = 0; i < getFilas(); i++) 
  {
    cout << i << " ";
    for (int j = 0; j < getColumnas(); j++) 
    {
      if (getAsientos()[i][j]) 
      {
        cout << j << " ";
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
        recaudacion += precio;
      }
    }
  }
  return recaudacion;
}



