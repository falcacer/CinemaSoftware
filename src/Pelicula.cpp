#include "../include/Pelicula.h"

Pelicula::Pelicula(std::string titulo, float precio) : titulo(titulo), precio(precio) {}

float Pelicula::getPrecio()
{
  return precio;
}

std::string Pelicula::getTitulo()
{
  return titulo;
}