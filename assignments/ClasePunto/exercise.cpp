#include <iostream>
#include "Punto.h"
using namespace std;

int main() 
{
  double nuevaX;
  Punto p;
  Punto p1(0,5);
  cout << "Imprimo el punto p: ";
  p.imprime();
  cout << "Imprimo el punto p1: ";
  p1.imprime();
  cout << "Ingresa el valor de la coordenada x para p: ";
  cin >> nuevaX;
  p.setX(nuevaX);
  p.imprime();
  double dist = p.distancia(p1);
  cout << "La distancia entre p y p1 es: " << dist << endl;
}
