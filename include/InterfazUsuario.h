// include/InterfazUsuario.h
#ifndef INTERFAZ_USUARIO_H
#define INTERFAZ_USUARIO_H

#include "ControllerFunciones.h"
#include "ControllerEntradas.h"
#include "Cine.h"
using namespace std;

class InterfazUsuario {
  private:
    Cine& cine;

  public:
    // Constructor
    /**
     * @brief Clase que representa la interfaz de usuario.
     * 
     * Esta clase proporciona métodos para interactuar con el usuario y administrar el software de cine.
     * Toma una referencia a un objeto Cine como parámetro en el constructor.
     */
    InterfazUsuario(Cine& cine);

    // Methods
    /**
     * @brief Permite al usuario seleccionar un modo.
     * 
     * Esta función solicita al usuario que seleccione un modo de una lista de opciones.
     * El modo seleccionado se utilizará para operaciones posteriores en el programa.
     */
    void seleccionarModo();
    /**
     * Muestra el menú de administración.
     */
    void mostrarMenuAdmin();
    /**
     * Muestra el menú para el cliente.
     */
    void mostrarMenuCliente();
    /**
     * Ejecuta la opción de administrador.
     */
    void ejecutarOpcionAdmin();
    /**
     * Ejecuta la opción del cliente.
     */
    void ejecutarOpcionCliente();
    /**
     * @brief Esta función se encarga de agregar una funcion.
     * 
     * Realiza las operaciones necesarias para agregar una funcion al sistema.
     */
    void opcionCrear();
    /**
     * @brief Elimina una funcion.
     * 
     * Esta función se encarga de eliminar una funcion.
     * Realiza las operaciones necesarias para eliminar la funcion del sistema.
     * 
     * @return void
     */
    void opcionEliminar();
    /**
     * Muestra la opción seleccionada.
     */
    void opcionMostrar();
    /**
     * @brief Ejecuta la opción de vender un boleto.
     * 
     * Esta función se encarga de ejecutar la lógica para vender un boleto.
     * Puede solicitar información al usuario, validar la entrada y actualizar las funciones y entradas.
     */
    void opcionVender();
    /**
     * @brief Ejecuta la opción de mostrar la recaudación.
     * 
     * Esta función se encarga de ejecutar la lógica para mostrar la recaudación.
     * Puede solicitar información al usuario, validar la entrada y actualizar las funciones y entradas.
     */
    void opcionMostrarRecaudacion();
};

#endif // INTERFAZ_USUARIO_H
