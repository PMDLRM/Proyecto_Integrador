#define VIDEOTECA_H
#include <iostream>
#include <string>

#include "Pelicula.h"
#include "Serie.h"

using namespace std;

class Videoteca{
  private:
  int tamP;
  int tamS;
  Pelicula *peliculas;
  Serie *series;

  public:
  Videoteca();
  Videoteca(Pelicula *pelis, int numPelis, Serie *sers, int numSeries);
  ~Videoteca();
  void agregarPelicula(Pelicula nueva);
  void agregarSerie(Serie nueva);
  void calificarPelicula(int id,int calif);
  void calificarTemporada(int idSerie, int numTemp, int calif);
  void calificarSerie(int id);
  void enlistar();
};