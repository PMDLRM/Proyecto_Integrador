#define TEMPORADA_H
#include <iostream>
#include <string>

#ifndef EPISODIO_H
#include "Episodio.h"
#endif

#ifndef VIDEO_H
#include "Video.h"
#endif

using namespace std;

class Temporada{
  private:
  Episodio *arregloEpisodios;
  int calificacion;
  int numeroTemporada;
  const int NUMEROEPISODIOS = 3;

  public:
  Temporada();
  Temporada(Episodio *arr, int num, int cali);
  ~Temporada();
  //getters
  int getCalificacion();
  int getNumero();
  //setters
  void setCalificacion(int cali);
  void setNumero(int num);
  //otros metodos
  void mostrarDatos();
};