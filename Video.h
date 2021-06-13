#define VIDEO_H
#include <iostream>
#include <string>

using namespace std;

class Video{
  protected:
  string nombre;
  string genero;
  float calificacion;
  int duracion;
  int id;

  public:
  //constructores
  Video(); //vacio
  Video(string nombre, string gen, int id, float cali, int dur); //con todos los datos
  ~Video();
  //getters
  string getNombre();
  string getGenero();
  float getCalificacion();
  int getDuracion();
  int getId();
  //setters
  void setNombre(string);
  void setGenero(string);
  void setCalificacion(float);
  void setDuracion(int);
  void setId(int);
  //otros métodos
  void muestraDatos();
};