//
// Created by alesso on 1/04/2025.
//

#include "jugador.h"

jugador::jugador(string nickname, int ranking){
  this->nickname = nickname;
  this->ranking = ranking;
  }


  string jugador::getNickname(){
    return nickname;
  }


  int jugador::getRanking(){
    return ranking;
  }


void jugador::agregarVideojuego(video_juego* videojuego){
  videojuegosIncritos.push_back(videojuego);
}

void jugador::mostrarVideojuego(){
  if (videojuegosIncritos.size() == 0){
    cout << "no hay videojuegos incritos" << endl;
  }

  else{
    for (auto it = videojuegosIncritos.begin(); it != videojuegosIncritos.end(); it++){
      int indice = distance(videojuegosIncritos.begin(), it);
	cout << indice << videojuegosIncritos[indice] << "\n";
    }
  }

}

int jugador::mostrarPromedioDificultad(){
  if(videojuegosIncritos.size() == 0){
    cout << "no hay videojuegos incritos" << endl;
  }
  else{
    int promedio = 0;
    for(auto it = videojuegosIncritos.begin(); it != videojuegosIncritos.end(); it++){
      int indice = distance(videojuegosIncritos.begin(), it);
      promedio += (*it)->getDificultad();
    }
    return promedio;
  }
}




