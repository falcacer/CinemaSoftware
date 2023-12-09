#ifndef CONTROLLER_FUNCIONES_H
#define CONTROLLER_FUNCIONES_H

#include "Pelicula.h"
#include "Funcion.h"
using namespace std;

class ControllerFunciones {
  private:
    vector<Funcion> funcionesProgramadas;
    int contadorSalas;
  public:
    // Constructor
    /**
     * @brief Constructor predeterminado para la clase ControllerFunciones.
     */
    ControllerFunciones();
    /**
     * @brief Construye un objeto ControllerFunciones con el vector dado de funciones programadas.
     *
     * @param funcionesProgramadas El vector de funciones programadas.
     */
    ControllerFunciones(vector<Funcion> funcionesProgramadas);

    // Properties
    /**
     * @brief Establece el valor de la variable contadorSalas.
     * 
     * @param contadorSalas El nuevo valor de la variable contadorSalas.
     */
    void setContadorSalas(int contadorSalas);
    /**
     * @brief Obtenga el número de salas.
     * 
     * @return El número de salas.
     */
    int getContadorSalas();
    /**
     * Devuelve una referencia al vector de funciones programadas.
     *
     * @return Una referencia al vector de funciones programadas.
     */
    vector<Funcion>& getFuncionesProgramadas();

    // Methods
    /**
     * @brief Crea una nueva función para una película determinada con un número específico de filas y columnas.
     * 
     * @param pelicula La película para la que se está creando la función.
     * @param filas El número de filas en la disposición de asientos para la función.
     * @param columnas El número de columnas en la disposición de los asientos para la función.
     */
    void crearFuncion(Pelicula& pelicula, int filas, int columnas);
    /**
     * @brief Elimina una función del sistema.
     * 
     * Esta función elimina una función del sistema según el parámetro sala dado.
     * 
     * @param sala El número de sala de la función que se va a eliminar.
     */
    void eliminarFuncion(int sala);
    /**
     * @brief Muestra la lista de funciones.
     */
    void mostrarFunciones();
    /**
     * Recupera la función asociada con la sala especificada.
     *
     * @param sala El número de sala.
     * @return Una referencia al objeto Funcion asociado con la sala.
     */
    Funcion& getFuncionBySala(int sala);
};

#endif // CONTROLLER_FUNCIONES_H
