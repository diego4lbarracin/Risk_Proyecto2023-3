#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Clase Territorio y Carta
// Define las clases Territorio y Carta si aún no lo has hecho

class Jugador {
public:
    Jugador(const string& nombre, const string& color, int ejercitos);

    string getNombre() const;
    string getColor() const;
    int getEjercitos() const;
    void agregarEjercitos(int cantidad);
    void ocuparTerritorio(Territorio* territorio);
    void tomarCarta(Carta* carta);
    void obtenerNuevasUnidades();  // Implementa esta función según tu lógica
    void atacarTerritorioVecino();  // Implementa esta función según tu lógica
    void fortificarTerritorio();    // Implementa esta función según tu lógica

private:
    string nombreJugador;
    string colorJugador;
    int ejercitosJugador;
    vector<Territorio*> territorios;
    vector<Carta*> cartas;
};

Jugador::Jugador(const string& nombre, const string& color, int ejercitos)
    : nombreJugador(nombre), colorJugador(color), ejercitosJugador(ejercitos) {
    territorios.clear(); // Inicializa la lista de territorios
    cartas.clear();      // Inicializa la lista de cartas
}

string Jugador::getNombre() const {
    return nombreJugador;
}

string Jugador::getColor() const {
    return colorJugador;
}

int Jugador::getEjercitos() const {
    return ejercitosJugador;
}

void Jugador::agregarEjercitos(int cantidad) {
    ejercitosJugador += cantidad;
}

void Jugador::ocuparTerritorio(Territorio* territorio) {
    territorios.push_back(territorio);
}

void Jugador::tomarCarta(Carta* carta) {
    cartas.push_back(carta);
}

void Jugador::obtenerNuevasUnidades() {
    // Implementa esta función según tu lógica
}

void Jugador::atacarTerritorioVecino() {
    // Implementa esta función según tu lógica
}

void Jugador::fortificarTerritorio() {
    // Implementa esta función según tu lógica
}
// Implementa más métodos según sea necesario
#endif



