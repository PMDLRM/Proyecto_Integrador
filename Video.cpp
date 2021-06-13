#include <iostream>
#include <string>

#include "Video.h"

using namespace std;

//constructores
Video::Video(){
  id = 0;
  nombre = "-";
  genero = "-";
  calificacion = 0;
  duracion = 0;
}
Video::Video(string Nombre, string Genero, int Id, float Calificacion, int Duracion){
  nombre = Nombre;
  id = Id;
  genero = Genero;
  calificacion = Calificacion;
  duracion = Duracion;
}
Video::~Video(){
}
//getters
string Video::getNombre(){
  return nombre;
}
string Video::getGenero(){
  return genero;
}
float Video::getCalificacion(){
  return calificacion;
}
int Video::getDuracion(){
  return duracion;
}
//setters
void Video::setNombre(string nombre){
  nombre = nombre;
}
void Video::setGenero(string gen){
  genero = gen;
}
void Video::setCalificacion(float cali){
  calificacion = cali;
}
void Video::setDuracion(int dur){
  duracion = dur;
}
//otros métodos
void Video::muestraDatos(){
    cout << "\nMostrando datos del video..." << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Género: " << genero << endl;
    cout << "Calificación: " << calificacion << endl;
    cout << "Duración: " << duracion << " minutos" << endl;
}