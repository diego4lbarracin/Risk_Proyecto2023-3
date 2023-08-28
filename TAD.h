#ifndef TAD_H
#define TAD_H

#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Clase Territorio y Carta
// Define las clases Territorio y Carta si aún no lo has hecho
class Territorio {
public:
  Territorio(const string &nombre, int ejercitos)
      : nombre(nombre), ejercitos(ejercitos) {}

  void recopilarVecinos(const vector<Territorio *> &vecinosList);

  void mostrarVecinos() const;

  string getNombre();

  void agregarEjercitos(int cantidad);

private:
  string nombre;
  int ejercitos;
  vector<Territorio *> vecinos;
};

class Carta {
public:
  Carta(char tipo, const string &territorio)
      : tipo(tipo), territorio(territorio) {}

  void mostrarContenido() const;

  char getTipo();

  string getTerritorio();

private:
  char tipo;
  string territorio;
};
class Jugador {
public:
  Jugador(const string &nombre, const string &color, int ejercitos);

  string getNombre() const;
  string getColor() const;
  int getEjercitos() const;
  vector<Territorio *> getTerritorio() const;
  void agregarEjercitos(int cantidad);
  bool ocuparTerritorio(Territorio *territorio);
  bool tomarCarta(Carta *carta);
  bool obtenerNuevasUnidades();  // Implementa esta función según tu lógica
  bool atacarTerritorioVecino(); // Implementa esta función según tu lógica
  void agregarPuntuacion(int puntuacion);
  void colocarEjercitos(Jugador &jugador);
  void setTerritorio(Territorio *territorio);
  void lanzarDados(string turno);

private:
  string nombreJugador;
  string colorJugador;
  int ejercitosJugador;
  int puntuacion;
  vector<Territorio *> territorios;
  vector<Carta *> cartas;
};

class Juego {
public:
  void llenarJugadores();

  void llenarMundo();

  void llenarBarajaCartas();

  void calcularInfanteria(vector<Jugador> *jugadores) const;

  bool validarEnCurso();

  void establecerTurnos();

private:
  vector<Jugador> jugadores;
  // Implementación de la multi-lista mundo
  stack<Carta> cartas;
  int intercambios;
};

// Implementa más métodos según sea necesario
#endif
