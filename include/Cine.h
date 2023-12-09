#ifndef CINE_H
#define CINE_H

#include "Funcion.h"
#include "Entrada.h"
#include "ControllerEntradas.h"
#include "ControllerFunciones.h"
using namespace std;

class Cine 
{      
  private:
    ControllerEntradas& controllerEntradas;
    ControllerFunciones& controllerFunciones;
    
  public:
    // Constructor
    /**
     * @brief Constructor de objeto Cine.
     * @param controllerEntradas ControllerEntradas objeto usado para manejar las entradas.
     * @param controllerFunciones ControllerFunciones objetos usado para manejar las funciones.
     */
    Cine(ControllerEntradas& controllerEntradas, ControllerFunciones& controllerFunciones);


    // Properties
    /**
     * @return La referencia de un objeto ControllerEntradas.
     */
    ControllerEntradas& getControllerEntradas();
    /**
     * @return La referencia de un objeto ControllerFunciones.
     */
    ControllerFunciones& getControllerFunciones();

    // Methods
    /**
     * Recupera la lista de funciones programadas..
     *
     * @return Un vector de objetos Funcion que representan las funciones programadas.
     */
    vector<Funcion> getFuncionesProgramadas();

    /**
     * Valida la entrada dada para una función de película específica.
     *
     * @param entrada La entrada a validar.
     * @param funcion La función de película para validar la entrada.
     * @return Verdadero si la entrada es válida para la función dada; falso en caso contrario.
     */
    bool validarEntrada(Entrada entrada, Funcion funcion);
    /**
     * @brief Vende la entrada y asigna el asiento en la funcion.
     * 
     * @param entrada La entrada a vender.
     * @param funcion La función de película para la cual se vende la entrada.
     */
    void venderEntrada(Entrada entrada);
    /**
     * @brief Recupera los ingresos totales del cine.
     * 
     * @return Los ingresos totales del cine como valor flotante.
     */
    float getRecaudacionTotal();
    /**
     * Recupera los ingresos totales de una sala de cine específica.
     *
     * @param sala El número de sala para el cual recuperar los ingresos.
     * @return Los ingresos totales de la sala especificada.
     */
    float getRecaudacionTotalPorSala(int sala);
};
#endif // CINE_H
