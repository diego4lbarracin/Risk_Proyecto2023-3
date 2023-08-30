#ifndef TAD_H
#define TAD_H

#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <list>
using namespace std;

typedef list<string> Paises;
typedef list<Paises> Continentes;

// Clase Territorio y Carta
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
  bool obtenerNuevasUnidades();
  bool atacarTerritorioVecino();
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

  //int calcularInfanteria(int cantidad);

  bool validarEnCurso();

  void establecerTurnos();

private:
  vector<Jugador> jugadores;
  Continentes mundo;
  stack<Carta> cartas;
  int intercambios;
};

// Implementa más métodos según sea necesario
#endif
