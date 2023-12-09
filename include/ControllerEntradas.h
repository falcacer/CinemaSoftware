#ifndef CONTROLLER_ENTRADAS_H
#define CONTROLLER_ENTRADAS_H

#include "Entrada.h"
using namespace std;

class ControllerEntradas {
  private:
    vector<Entrada> entradas;

  public:
    // Constructor
    /**
     * @brief Construye un nuevo objeto ControllerEntradas.
     */
    ControllerEntradas();
    /**
     * @brief Construye un objeto ControllerEntradas con el vector dado de objetos Entrada.
     *
     * @param entradas El vector de objetos Entrada.
     */
    ControllerEntradas(vector<Entrada> entradas);

    // Properties
    /**
     * Recupera la lista de objetos Entrada.
     *
     * @return Un vector que contiene los objetos Entrada.
     */
    vector<Entrada> getEntradas();
    /**
     * @brief Establece las entradas para el controlador.
     * 
     * @param entradas El vector de objetos Entrada a configurar.
     */
    void setEntradas(vector<Entrada> entradas);

    // Methods
    /**
     * @brief Crea una nueva entrada.
     * 
     * Esta función crea una nueva entrada basada en el objeto Entrada proporcionado.
     * 
     * @param entrada El objeto Entrada que contiene los detalles de la entrada.
     */
    void crearEntrada(Entrada entrada);
    /**
     * @brief Muestra la lista de tickets.
     */
    void mostrarEntradas();

    /**
     * @brief Muestra la lista de tickets para una sala específica.
     * 
     * @param sala El número de sala para mostrar las entradas.
     */
    void mostrarEntradasPorSala(int sala);
};

#endif // CONTROLLER_ENTRADAS_H
