#ifndef PELICULA_H
#define PELICULA_H

#include <string>
using namespace std;

class Pelicula
{
  private:
    string titulo;

  public:
    // Constructor
    Pelicula(string& titulo);

    // Properties
    void setTitulo(string& titulo);
    string getTitulo();

};
#endif // PELICULA_H