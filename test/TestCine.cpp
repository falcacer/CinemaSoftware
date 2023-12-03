#include "../include/Cine.h"
#include <iostream>
#include <cassert>
using namespace std;

void testRecaudacionTotalEsCero() {
  Cine cine;
  assert(cine.recaudacionTotal == 0);
  cout << "testRecaudacionTotalEsCero passed" << endl;
}

void testFuncionesProgramadasEsVacio() {
  Cine cine;
  assert(cine.funcionesProgramadas.size() == 0);
  cout << "testFuncionesProgramadasEsVacio passed" << endl;
}

int main() {
  testRecaudacionTotalEsCero();
  testFuncionesProgramadasEsVacio();
  return 0;
}