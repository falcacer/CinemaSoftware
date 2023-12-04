#ifndef CINE_H
#define CINE_H

#include <vector>
#include "Funcion.h"
using namespace std;

class Cine 
{      
  private:
    vector<Funcion> funcionesProgramadas;
    float recaudacionTotal;
    int contadorSalas;

  public:
    // Constructor
    Cine();
    Cine(vector<Funcion> funcionesProgramadas);
    // Properties
    void setFuncionesProgramadas(vector<Funcion> funcionesProgramadas);
    vector<Funcion> getFuncionesProgramadas();

    void setRecaudacionTotal(float recaudacionTotal);
    float getRecaudacionTotal();

    void setContadorSalas(int contadorSalas);
    int getContadorSalas();

    // Methods
    void agregarFuncion(Funcion funcion);

};
#endif // CINE_H
