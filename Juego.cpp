#include "TAD.h"

void llenarJugadores() {
  // Lógica para llenar el vector de jugadores
}

void llenarMundo() {
  // Lógica para llenar la multi-lista mundo
}

void llenarBarajaCartas() {
  // Lógica para barajar las cartas y llenar la pila de cartas
}

void calcularInfanteria(vector<Jugador> *jugadores) {
  int totalEjercitos = 0;
  switch (jugadores->size()) {
  case 3:
    totalEjercitos = 35;
    break;
  case 4:
    totalEjercitos = 30;
    break;
  case 5:
    totalEjercitos = 25;
    break;
  case 6:
    totalEjercitos = 20;
    break;
  }

  // Asignar ejércitos a los jugadores
  for (auto &jugador : *jugadores) {
    jugador.agregarEjercitos(totalEjercitos / jugadores->size());
  }
}

bool validarEnCurso() {
  // Lógica para verificar si el juego debe finalizar
}

void establecerTurnos() {
  // Lógica para establecer los turnos de los jugadores
}