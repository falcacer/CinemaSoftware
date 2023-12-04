#ifndef CINE_H
#define CINE_H

#include <vector>
#include "Funcion.h"

class Cine 
{      
  public:
    std::vector<Funcion> funcionesProgramadas;
    float recaudacionTotal;
    int contadorIds;

    Cine();
};
#endif // CINE_H
