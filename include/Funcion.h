#ifndef FUNCION_PELICULA_H
#define FUNCION_PELICULA_H

#include <vector>
#include "Pelicula.h"
using namespace std;

class Funcion
{
  private:
    int sala;
    Pelicula pelicula;
    float precio;
    int filas;
    int columnas;
    vector< vector<bool> > asientos; // true: ocupado, false: libre

  public:
    // Constructor
    Funcion(int sala, Pelicula& pelicula, float precio, int filas, int columnas);

    // Properties
    int getSala();
    Pelicula getPelicula();
    float getPrecio();
    int getFilas();
    int getColumnas();
    void setAsientos(vector< vector<bool> > asientos);
    vector< vector<bool> > getAsientos();

    // Methods
    void reservarAsiento(int fila, int columna);
    bool verificarDisponibilidad(int fila, int columna);
    void mostrarAsientos();
    float obtenerRecaudacion();
};

#endif // FUNCION_PELICULA_H
