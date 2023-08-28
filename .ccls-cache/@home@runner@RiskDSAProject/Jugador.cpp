#include "TAD.h"
#include <bits/stdc++.h>
#include <string>


Jugador::Jugador(const string &nombre, const string &color, int ejercitos)
    : nombreJugador(nombre), colorJugador(color), ejercitosJugador(ejercitos) {
  territorios.clear(); // Inicializa la lista de territorios
  cartas.clear();      // Inicializa la lista de cartas
}

string Jugador::getNombre() const { return nombreJugador; }

string Jugador::getColor() const { return colorJugador; }

int Jugador::getEjercitos() const { return ejercitosJugador; }

void Jugador::agregarEjercitos(int cantidad) { ejercitosJugador += cantidad; }

bool Jugador::ocuparTerritorio(Territorio *territorio) {
  territorios.push_back(territorio);
  return true;
}

bool Jugador::tomarCarta(Carta *carta) {
  cartas.push_back(carta);
  return true;
}

bool Jugador::obtenerNuevasUnidades() {
  // Implementa esta función según tu lógica
}

bool Jugador::atacarTerritorioVecino() {
  return true;
  // Implementa esta función según tu lógica
}

void Jugador::agregarPuntuacion(int puntuacion) {
  this->puntuacion = puntuacion;
}

vector<Territorio *> Jugador::getTerritorio() const {
  return this->territorios;
}

void Jugador::setTerritorio(Territorio *territorio) {
  territorios.push_back(territorio);
}

void Jugador::colocarEjercitos(Jugador &jugador) {
  int cantidad;
  cout << "Turno de " << jugador.getNombre() << endl;
  cout << "Cantidad de ejércitos disponibles: " << jugador.getEjercitos()
       << endl;

  cout << "Ingrese la cantidad de ejércitos que desea colocar: ";
  cin >> cantidad;

  while (cantidad > jugador.getEjercitos()) {
    cout << "No tiene suficientes ejércitos. Ingrese una cantidad válida: ";
    cin >> cantidad;
  }

  cout << "Territorios disponibles para colocar ejércitos: " << endl;
  vector<Territorio *> territorios = jugador.getTerritorio();
  for (int i = 0; i < territorios.size(); ++i) {
    cout << i + 1 << ". " << territorios[i]->getNombre() << endl;
  }

  int territorioIndex;
  cout << "Ingrese el número del territorio donde desea colocar ejércitos: ";
  cin >> territorioIndex;
  territorioIndex--;

  while (territorioIndex < 0 || territorioIndex >= territorios.size()) {
    cout << "Número de territorio inválido. Ingrese un número válido: ";
    cin >> territorioIndex;
    territorioIndex--;
  }

  territorios[territorioIndex]->agregarEjercitos(cantidad);
  jugador.agregarEjercitos(jugador.getEjercitos() - cantidad);

  cout << "Se han colocado " << cantidad << " ejércitos en "
       << territorios[territorioIndex]->getNombre() << endl;
}

int imprimirDados(int caso) {
  // Funcion para imprimir los dados cada vez que son lanzados.
  // recibe como parametro un entero con el caso del dado y retorna
  // el valor correspondiente al dado.
  int suma = 0;
  switch (caso) {
  case 1:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|      (*)     |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 1;
    break;
  case 2:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)         |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|          (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 2;
    break;
  case 3:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)         |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|      (*)     |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|          (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 3;
    break;
  case 4:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)     (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)     (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 4;
    break;
  case 5:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)     (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|      (*)     |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)     (*) |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 5;
    break;
  case 6:
    cout << setfill(' ') << setw(6) << " "
         << " ______________" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|              |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)    (*)  |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)    (*)  |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|  (*)    (*)  |" << endl;
    cout << setfill(' ') << setw(6) << " "
         << "|______________|" << endl;
    suma = 6;
    break;
  }
  return suma;
}

void lanzarDados(string turno, vector<int>resultsDadoAtacante, int resultDadosDefensor) {
  // Funcion lanzar dados. Recibe un string para identificar quien va a lanzar
  //  los dados, si el ATANCANTE o DEFENSOR. Si es atacante, lanza los dados 3
  //  veces y los almacena cada resultado de manera individual en un vector
  //  creado con este fin. Si es defensor, lanza los dados 2 veces y almacena el
  //  resultado dentro de la variable creada con este fin.
  int dado = 0;
  if (turno == "atacante") {
    int i = 3;
    while (i > 0) {
      dado = rand() % 6;
      resultsDadoAtacante.push_back(imprimirDados(dado));
      i--;
    }
  } else if (turno == "defensor") {
    int i = 2;
    while (i > 0) {
      dado = rand() % 6;
      resultDadosDefensor += imprimirDados(dado);
      i--;
    }
  }
}

