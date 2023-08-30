#include "TAD.h"
#include <fstream>
#include <string.h>
#include <algorithm>

void llenarJugadores() {
  bool inicio = true;
}

void llenarMundo() {
Continentes mundo;
    ifstream myFile;
    myFile.open("world.txt");

    if(!myFile.is_open())
    {
        cout << "no se pudo abrir" << endl;
    }
  
    list<string> myList;
    while(!myFile.eof())
    { 
      string line;
      getline(myFile, line);
      int size = line.size();
      char str[size];
      strcpy(str, line.c_str());

      myList.clear();
      char* token = strtok(str, "\t");
      int i = 1;
      
      while (token != NULL)
      {
        myList.push_back(token);
        token = strtok(NULL, "\t");
        i++;
      }
      mundo.push_back(myList);
    }
}

void llenarBarajaCartas() {
  ifstream myFile;
  myFile.open("world.txt");

  if(!myFile.is_open())
  {
      cout << "no se pudo abrir" << endl;
  }
  vector<string> myVector;
  while(!myFile.eof())
  { 
    string line;
    getline(myFile, line);
    int size = line.size();
    char str[size];
    strcpy(str, line.c_str());

    char* token = strtok(str, "\t");
    
    while (token != NULL)
    {
      myVector.push_back(token);
      token = strtok(NULL, "\t");
    }
  }

  random_shuffle(myVector.begin(), myVector.end());
  
  vector<char> tipos = {'I', 'C', 'A'};
  char tipo;
  string territorio;

  vector<Carta> cartas;
  
  for(int i = 0; i < 42; i++)
    {
      tipo = tipos[i % tipos.size()];
      territorio = myVector[i];
      Carta carta = Carta(tipo, territorio);

      cartas.push_back(carta);
    }

  for(int k = 0; k < 12; k++)
    {
      Carta carta = Carta('M', "N/A");
      cartas.push_back(carta);
    }

  Carta carta = Carta('J', "N/A");
  cartas.push_back(carta);
  cartas.push_back(carta);

  random_shuffle(cartas.begin(), cartas.end());

  stack<Carta> baraja;
  for(Carta c : cartas)
    {
      baraja.push(c);
    }
}

int calcularInfanteria(int cantidad){
  int totalEjercitos = 0;
  switch (cantidad) {
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
  return totalEjercitos;
}

bool validarEnCurso(vector<Jugador> jugadores) {
  string ganador;
  vector<Jugador>::iterator it = jugadores.begin();
  for( ; it != jugadores.end(); it++)
  {
    if(it->getTerritorio().size() == 42)
    {
      ganador = it->getNombre();
      return true;
    }
  }
  return false;
}

void establecerTurnos(vector<Jugador> jugadores) {
  vector<Jugador>::iterator it = jugadores.begin();
  for( ; it != jugadores.end(); it++)
    {
      cout << "Turno de: " << it->getNombre() << endl;
    }
}