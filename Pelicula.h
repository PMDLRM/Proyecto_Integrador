#define PELICULA_H
#include <iostream>
#include <string>

#ifndef VIDEO_H
#include "Video.h"
#endif

using namespace std;

class Pelicula : public Video{
    public:
    Pelicula();
    Pelicula(string Nombre, string Genero, int Id, float Calificacion, int Duracion);
    int getId();
    void calificaPelicula(int);
    void muestraDatos();
};