//
// Created by alesso on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H
#include "jugador.h"
#include <iostream>
#include <map>
using namespace std;





class Torneo {
  private:
    map<string,video_juego*> videoJuegosDisponibles;
    map<string,jugador*> jugadorRegistros;
    int contarjugadores;
    int contarvideojuegos;


  public:
    Torneo();
    Torneo(int contarjugadores, int contarjugadoresDisponibles);

  void registrarVideojuego(string codigoJuego, string nombre, int dificultad, string genero);
  void registrarJugador(string nickname, int ranking);



  }
;


#endif //TORNEO_H
