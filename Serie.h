#define SERIE_H
#include <iostream>
#include <string>

#ifndef VIDEO_H
#include "Video.h"
#endif

#include "Temporada.h"

using namespace std;

class Serie : public Video{
  protected:
  Temporada *temporadas;
  int numTemps;

  public:
  Serie();
  Serie(string Nombre, string Genero, int Id, int Duracion, Temporada *temps, int numTemps);
  ~Serie();

  int getId();
  void calificarTemp(int nTemp,int calif);
  void calificaSerie();
  void muestraDatos();
};