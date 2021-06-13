#include <iostream>
#include <string>

#include "Temporada.h"

using namespace std;

Temporada::Temporada(){
  Episodio * episodios;
  episodios = new Episodio[1];
  numeroTemporada = 0;
  calificacion = 0;
}

Temporada::Temporada(Episodio *arr, int num, int cali){
  arregloEpisodios = arr;
  numeroTemporada = num;
  calificacion = cali;
}

Temporada::~Temporada(){

}
//getters
int Temporada::getCalificacion()
{
  return calificacion;
}

int Temporada::getNumero()
{
  return numeroTemporada;
}

//setters
void Temporada::setCalificacion(int cali)
{
  calificacion = cali;
  
}
void Temporada::setNumero(int num)
{
  numeroTemporada = num;
}

//otros metodos
void Temporada::mostrarDatos()
{
  cout << "\n--Temporada: " << to_string(numeroTemporada) << "--"<< endl;
  cout << "Calificación: " << to_string(calificacion) << endl;
  cout << "Capítulos: " << endl;

  for(int i=0;i < NUMEROEPISODIOS;i++){
    cout << "\t";
    arregloEpisodios[i].muestraDatos();
  }
}