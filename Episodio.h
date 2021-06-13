#define EPISODIO_H
#include <iostream>
#include <string>

using namespace std;

class Episodio{
  private:
  string titulo;
  int numeroEpisodio;
  int temporada;

  public:
  //constructores
  Episodio();
  Episodio(string, int, int);
  //getters
  string getTitulo();
  int getTemporada();
  //setters
  void setTitulo(string);
  void setTemporada(int);
  void muestraDatos();  
};