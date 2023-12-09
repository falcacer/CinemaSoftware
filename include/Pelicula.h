#ifndef PELICULA_H
#define PELICULA_H

#include <string>
using namespace std;

class Pelicula
{
  private:
    string titulo;
    float precio;

  public:
    // Constructor
    /**
     * @brief Representa una película.
     * 
     * Esta clase almacena información sobre una película, incluido su título y precio.
     */
    Pelicula(string& titulo, float precio);

    // Properties
    /**
     * @brief Establece el título de la película.
     * 
     * @param titulo El título de la película.
     */
    void setTitulo(string& titulo);
    /**
     * @brief Recupera el título de la película.
     * 
     * @return El título de la película como una cadena.
     */
    string getTitulo();
    /**
     * @brief Obtenga el precio de la película.
     * 
     * @return El precio de la película como valor flotante.
     */
    float getPrecio();
};
#endif // PELICULA_H