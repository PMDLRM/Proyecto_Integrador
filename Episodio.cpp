#include <iostream>
#include <string>

#include "Episodio.h"

using namespace std;

//constructores
Episodio::Episodio()
{
  titulo = "-";
  temporada = 0;
}
Episodio::Episodio(string tit, int temp, int num)
{
  titulo = tit;
  temporada = temp;
  numeroEpisodio = num;
}
//getters
string Episodio::getTitulo()
{
    return titulo;
}
int Episodio::getTemporada()
{
    return temporada;
}
//setters
void Episodio::setTitulo(string tit)
{
    titulo = tit;
}
void Episodio::setTemporada(int temp)
{
    temporada = temp;
}
void Episodio::muestraDatos()
{
  cout << "Episodio " << numeroEpisodio << endl;
  cout << "Título: " << titulo << endl;
}