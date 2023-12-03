#include "../include/Pelicula.h"
#include <iostream>
#include <cassert>
using namespace std;

void testPeliculaTitulo() {
  Pelicula pelicula("El Padrino", 100);
  assert(pelicula.getTitulo() == "El Padrino");
  cout << "testPeliculaTitulo passed" << endl;
}

void testPeliculaPrecio() {
  Pelicula pelicula("El Padrino", 100);
  assert(pelicula.getPrecio() == 100);
  cout << "testPeliculaPrecio passed" << endl;
}

int main() {
  testPeliculaTitulo();
  testPeliculaPrecio();
  return 0;
}