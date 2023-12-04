#ifndef INTERFAZ_USUARIO_H
#define INTERFAZ_USUARIO_H

#include "ControllerFunciones.h"

class InterfazUsuario {
private:
    ControllerFunciones* controlador;

public:
    InterfazUsuario(ControllerFunciones* controlador);
    void mostrarMenu();
    void mostrarMenuAdministrador();
};


#endif // INTERFAZ_USUARIO_H
