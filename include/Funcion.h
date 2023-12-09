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
    int filas;
    int columnas;
    vector< vector<bool> > asientos; // true: ocupado, false: libre

  public:
    // Constructor
    /**
     * @brief Construye un nuevo objeto Funcion.
     * 
     * @param sala El número de sala de la función.
     * @param pelicula El objeto Pelicula asociado con la función.
     * @param filas El número de filas en la sala.
     * @param columnas El número de columnas de la sala.
     */
    Funcion(int sala, Pelicula& pelicula, int filas, int columnas);

    // Properties
    /**
     * @brief Consigue el objeto sala.
     * 
     * @return El número de sala.
     */
    int getSala();
    /**
     * Recupera la pelicula asociada a esta funcion.
     *
     * @return El objeto pelicula asociado con esta función.
     */
    Pelicula getPelicula();
    /**
     * @brief Obtiene el número de filas de la sala de cine.
     * 
     * @return El número de filas en la sala de cine.
     */
    int getFilas();
    /**
     * @brief Obtiene el número de columnas de la sala de cine.
     * 
     * @return El número de columnas en la sala de cine.
     */
    int getColumnas();
    /**
     * @brief Establece la disposición de los asientos para la función.
     * 
     * @param asientos Un vector que representa la disposición de los asientos.
     * Cada elemento del vector representa una fila de asientos,
     * y cada elemento de la fila representa un asiento.
     * Verdadero indica que el asiento está ocupado, mientras que falso
     * indica que el asiento está disponible.
     */
    void setAsientos(vector< vector<bool> > asientos);
    vector< vector<bool> > getAsientos();

    // Methods
    /**
     * @brief Reserva un asiento en el cine.
     * 
     * @param fila El número de fila del asiento.
     * @param columna El número de columna del asiento.
     */
    void reservarAsiento(int fila, int columna);
    /**
     * @brief Verifica la disponibilidad de un asiento en el cine.
     * 
     * @param fila El número de fila del asiento.
     * @param columna El número de columna del asiento.
     * @return True si el asiento está disponible; False en caso contrario.
     */
    bool verificarDisponibilidad(int fila, int columna);
    /**
     * Muestra la disposición de los asientos para la función.
     */
    void mostrarAsientos();
    /**
     * @brief Obtiene los ingresos totales generados por la función.
     * 
     * @return Los ingresos totales como valor flotante.
     */
    float obtenerRecaudacion();
};

#endif // FUNCION_PELICULA_H
