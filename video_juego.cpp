//
// Created by alesso on 1/04/2025.
//

#include "video_juego.h"
#include <iostream>




video_juego::video_juego(string codigo, string nombre, string genero, int dificultad){
    this->codigo = codigo;
    this->nombre = nombre;
    this->dificultad = dificultad;
    this->genero = genero;

}



string video_juego::getCodigo(){
    return codigo;
}

string video_juego::getNombre(){
    return nombre;
}

string video_juego::getGenero(){
    return genero;
}

int video_juego::getDificultad(){
    return dificultad;
}


