#include "../include/Pelicula.h"

Pelicula::Pelicula(string& titulo, float precio) : titulo(titulo), precio(precio) {}

void Pelicula::setTitulo(string &titulo)
{
  this->titulo = titulo;
}

string Pelicula::getTitulo()
{
  return titulo;
}

float Pelicula::getPrecio()
{
  return precio;
}
