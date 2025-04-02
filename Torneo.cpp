

#include "Torneo.h"
using namespace std;


Torneo::Torneo(int contarJugadores, int contarvideojuegos) {
  this->contarjugadores = contarJugadores;
  this->contarvideojuegos = contarvideojuegos;
}

void Torneo::registrarVideojuego(string codigoJuego,string nombre, int dificultad, string genero) {
  string codigo = to_string(contarvideojuegos);
  video_juego *v = new video_juego(codigoJuego,nombre, dificultad, genero);
  videoJuegosDisponibles[codigo] = v;

  contarvideojuegos++;
  }

void Torneo::registrarJugador(string nickname, int ranking) {
  string codigo = to_string(contarjugadores);
   jugador *j = new jugador(nickname, ranking);
   jugadorRegistros[codigo] = j;

   contarjugadores++;

}