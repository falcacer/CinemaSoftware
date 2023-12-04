#ifndef PELICULA_H
#define PELICULA_H

#include <string>
using namespace std;

class Pelicula
{
public:
  string titulo;
  float precio;

  Pelicula(string& titulo, float precio);
  float getPrecio();
  string getTitulo();

};
#endif // PELICULA_H
