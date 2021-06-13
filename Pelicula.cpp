#include <iostream>
#include <string>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula(){
  id = 0;
  nombre = "-";
  genero = "-";
  calificacion = 0;
  duracion = 0;
}

Pelicula::Pelicula(string Nombre, string Genero, int Id, float Calificacion, int Duracion){
  nombre = Nombre;
  id = Id;
  genero = Genero;
  calificacion = Calificacion;
  duracion = Duracion;
} 

int Pelicula::getId(){
  return id;
}

void Pelicula::calificaPelicula(int cali)
{
    cout << "//----- Calificar Película -----//\n" << endl;
    cout << "Id: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificación: " << cali << endl;
    cout << "\n" << endl;
  calificacion = cali;
}

void Pelicula::muestraDatos(){
  cout << "-----" << nombre << "-----" << endl;
  cout << "ID: " << id << endl;
  cout << "Género: " << genero << endl;
  cout << "Calificación: " << calificacion << endl;
  cout << "Duración: " << duracion << " minutos\n" << endl;
}