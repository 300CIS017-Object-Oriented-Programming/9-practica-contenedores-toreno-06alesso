//
// Created by alesso on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include "video_juego.h"
#include <iostream>
#include <vector>
using namespace std;



class jugador {
private:
    string nickname;
    int ranking;
    vector<video_juego*> videojuegosIncritos;

    public:
      jugador();
      jugador(string nickname, int ranking);

      string getNickname();
      int getRanking();
      void agregarVideojuego(video_juego* videojuego);

      void mostrarVideojuego();
      int mostrarPromedioDificultad();

};



#endif //JUGADOR_H
