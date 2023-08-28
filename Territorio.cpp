#include "TAD.h"

void Territorio::recopilarVecinos(const vector<Territorio *> &vecinosList) {
  vecinos = vecinosList;
}

void Territorio::mostrarVecinos() const {
  cout << "Territorio: " << nombre << endl;
  cout << "Vecinos: ";
  for (const Territorio *vecino : vecinos) {
    cout << vecino->nombre << " ";
  }
  cout << endl;
}

string Territorio::getNombre() { return this->nombre; }