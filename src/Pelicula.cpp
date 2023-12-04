#include "../include/Pelicula.h"
#include "Pelicula.h"

Pelicula::Pelicula(string& titulo) : titulo(titulo) {}

void Pelicula::setTitulo(string &titulo)
{
  this->titulo = titulo;
}

string Pelicula::getTitulo()
{
  return titulo;
}
