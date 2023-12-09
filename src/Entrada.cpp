#include "../include/Entrada.h"
#include <iostream>

Entrada::Entrada(string nombrePersona, int fila, int columna, int sala) : nombrePersona(nombrePersona), fila(fila), columna(columna), sala(sala) {}


string Entrada::getNombrePersona() const 
{
  return nombrePersona;
}

int Entrada::getFila() const 
{
  return fila;
}

int Entrada::getColumna() const 
{
  return columna;
}

int Entrada::getSala() const
{
  return sala;
}
