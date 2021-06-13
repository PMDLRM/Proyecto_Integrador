#include <iostream>
#include <string>

#include "Videoteca.h"

using namespace std;

Videoteca::Videoteca(){
  tamP = 0;
  tamS = 0;
  peliculas = new Pelicula[1];
  series = new Serie[1];
}

Videoteca::Videoteca(Pelicula *pelis, int numPelis, Serie *sers, int numSeries){
  peliculas = pelis;
  series = sers;
  tamP = numPelis;
  tamS = numSeries;
}

Videoteca::~Videoteca(){
}

void Videoteca::calificarPelicula(int id,int calif){
  bool found = false;
  for(int i = 0; i < tamP; i++){
    if(peliculas[i].getId() == id){
      peliculas[i].calificaPelicula(calif);
      found = true;
    }
  }
  if(!found){
    cout << "ID inválido" << endl;
  }
}

void Videoteca::calificarTemporada(int idSerie, int numTemp, int calif){
  bool found = false;
  for(int i = 0; i < tamS; i++){
    if(series[i].getId() == idSerie){
      found = true;
      if(numTemp == 1){
        cout << "//----- Calificar Serie -----//\n" << endl;
        cout << "Id: " << series[i].getId() << endl;
        cout << "Nombre: " << series[i].getNombre() << endl;
      }
      series[i].calificarTemp(numTemp, calif);
    }
  }
  if(!found){
    cout << "ID inválido" << endl;
  }
}

void Videoteca::calificarSerie(int id){
  bool found = false;
  for(int i = 0; i < tamS; i++){
    if(series[i].getId() == id){
      series[i].calificaSerie();
      found = true;
    }
  }
  if(!found){
    cout << "ID inválido" << endl;
  }
}

void Videoteca::agregarPelicula(Pelicula nueva){
  tamP += 1;
  if(tamP > 1){
    Pelicula *nuevasPeliculas;
    nuevasPeliculas = new Pelicula[tamP];
    for(int i = 0; i < tamP-1; i++){
      nuevasPeliculas[i] = peliculas[i];
    }
    nuevasPeliculas[tamP-1] = nueva;
    peliculas = new Pelicula[tamP];
    peliculas = nuevasPeliculas;
  }
  if(tamP == 1){
    *peliculas = nueva;
  }
}

void Videoteca::agregarSerie(Serie nueva){
  tamS += 1;
  if(tamS > 1){
    Serie *nuevasSeries;
    nuevasSeries = new Serie[tamP];
    for(int i = 0; i < tamP-1; i++){
      nuevasSeries[i] = series[i];
    }
    nuevasSeries[tamP-1] = nueva;
    series = new Serie[tamS];
    series = nuevasSeries;
  }
  if(tamS == 1){
    *series = nueva;
  }
}

void Videoteca::enlistar(){
  cout << "=================== Videoteca ===================\n" << endl;
  cout << "******************* Películas *******************\n" << endl;
  for(int i = 0; i < tamP; i++){
    peliculas[i].muestraDatos();
  }
  cout << "\n******************* Series *******************\n" << endl;
  for(int i = 0; i < tamS; i++){
    series[i].muestraDatos();
  }
  cout << "\n";
}