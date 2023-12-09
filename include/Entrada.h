#ifndef ENTRADA_H
#define ENTRADA_H

#include <string>
using namespace std;

class Entrada
{
  private:
    string nombrePersona;
    int fila;
    int columna;
    int sala;
    
  public:
    // Constructor
    /**
     * @brief Representa una entrada para una entrada de cine.
     * 
     * Esta clase almacena información sobre el nombre de la persona, la ubicación del asiento y la sala de cine.
     */
    Entrada(string nombrePersona, int fila, int columna, int sala);

    // Properties
    /**
     * @brief Obtiene el nombre de la persona.
     * 
     * @return El nombre de la persona.
     */
    string getNombrePersona() const;
    /**
     * @brief Obtiene la fila de la entrada.
     * 
     * @return La fila de la entrada.
     */
    int getFila() const;
    /**
     * @brief Obtiene el valor de la columna de la entrada.
     * 
     * @return El valor de la columna de la entrada.
     */
    int getColumna() const;
    /**
     * @brief Obtiene el número de sala.
     * 
     * @return El número de sala.
     */
    int getSala() const;
};

#endif // ENTRADAS_H
