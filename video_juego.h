//
// Created by alesso on 1/04/2025.
//

#ifndef VIDEO_JUEGO_H
#define VIDEO_JUEGO_H
#include <iostream>
using namespace std;


class video_juego {
private:
    string codigo;
    string nombre;
    string genero;
    int dificultad;

public:
    video_juego();
    video_juego(string codigo, string nombre, string genero, int dificultad);

    string getCodigo();
    string getNombre();
    string getGenero();
    int getDificultad();



};



#endif //VIDEO_JUEGO_H
