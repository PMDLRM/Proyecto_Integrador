#include <iostream>
#include <string>

#include "Serie.h"

using namespace std;

Serie::Serie(){
  id = 0;
  nombre = "-";
  genero = "-";
  calificacion = 0;
  duracion = 0;
  Temporada *temp;
  temp = new Temporada[0];
  temporadas = temp;
  numTemps = 0;
}

Serie::Serie(string Nombre, string Genero, int Id, int Duracion, Temporada *temps, int num){
  nombre = Nombre;
  genero = Genero;
  duracion = Duracion;
  id = Id;
  temporadas = temps;
  numTemps = num;
}

Serie::~Serie(){
}

int Serie::getId(){
  return id;
}

void Serie::calificarTemp(int nTemp,int calif){
  temporadas[nTemp-1].setCalificacion(calif);
  cout << "Calificación temporada " << nTemp << ": " << calif << endl;

}

void Serie::calificaSerie(){
    /* cout << "//----- Calificar Serie -----//\n" << endl;
    cout << "Id: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    for(int i = 1; i == numTemps; i++){
        cout << "Calificación temporada " << i << ": " << temporadas[i-1].getCalificacion();
    }
    cout << "\n" << endl;
    */

  float promedio = 0;
  for (int i = 0; i<numTemps; i++)
  {
    promedio += temporadas[i].getCalificacion();

  }
  promedio = promedio / numTemps;
  this->calificacion = promedio;
}

void Serie::muestraDatos(){
  cout << "-------------"<<nombre<<"-------------" << endl;
  cout << "ID: " << id << endl;
  //cout << "Nombre: " << nombre << endl;
  cout << "Género: " << genero << endl;
  cout << "Calificación: " << calificacion << endl;
  cout << "Duración: " << duracion << " minutos" << endl;
  cout << "\nTemporadas: " << endl;
  for (int i = 0;i < numTemps;i++)
  {
    temporadas[i].mostrarDatos();
  }
  cout << endl;
}