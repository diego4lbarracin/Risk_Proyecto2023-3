#include "TAD.h"

void Carta::mostrarContenido() const {
  cout << "Tipo: " << tipo << endl;
  cout << "Territorio: " << territorio << endl;
}

char Carta::getTipo() {
  if (!tipo) {
    return tipo;
  } else {
    return -1;
  }
}

string Carta::getTerritorio() {
  if (territorio != "") {
    return territorio;
  } else {
    return "";
  }
}