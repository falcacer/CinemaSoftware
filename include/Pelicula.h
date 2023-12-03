#ifndef PELICULA_H
#define PELICULA_H

#include <string>

class Pelicula
{
public:
  std::string titulo;
  float precio;

  Pelicula(std::string titulo, float precio);
  float getPrecio();
  std::string getTitulo();

};
#endif // PELICULA_H
