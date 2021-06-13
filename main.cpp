#include <iostream>
#include <string>
#include "Videoteca.h"

int main() {
  Videoteca videoteca1;

  //------- Videos sin calificar -------//

  Pelicula pelicula1("Shrek", "Misterio", 1000, 0, 145);
  Pelicula pelicula2("Titanic", "Drama", 1001, 0, 120);
  
  Episodio episodio1("Prólogo", 1, 1);
  Episodio episodio2("El niño en el iceberg", 1, 2);
  Episodio episodio3("Prisioneros", 1, 3);
  Episodio episodio4("El cañón de la muerte", 2, 1);
  Episodio episodio5("El espíritu azul", 2, 2);
  Episodio episodio6("El maestro del agua control", 2, 3);
  Episodio episodio7("El regreso a Omashu", 3, 1);
  Episodio episodio8("La persecución", 3, 2);
  Episodio episodio9("A de appa", 3, 3);
  Episodio episodio10("El gurú", 3, 1);
  Episodio episodio11("Los invasores del sur", 3, 2);
  Episodio episodio12("Felina", 3, 3);

  Episodio episodiosT1[3] = {episodio1, episodio2, episodio3};
  Episodio episodiosT2[3] = {episodio4, episodio5, episodio6};
  Episodio episodiosT3[3] = {episodio7, episodio8, episodio9};
  Episodio episodiosT4[3] = {episodio10, episodio11, episodio12};
  
  Temporada temporada1(episodiosT1, 1, 0);
  Temporada temporada2(episodiosT2, 2, 0);
  Temporada temporada3(episodiosT3, 1, 0);
  Temporada temporada4(episodiosT4, 2, 0);

  Temporada temporadaS1[2] = {temporada1, temporada2};
  Temporada temporadaS2[2] = {temporada3, temporada4};

  Serie serie1("The Rain", "Terror", 1002, 1054, temporadaS1, 2);
  Serie serie2("Ozark", "Thriller", 1003, 1043, temporadaS2, 2);

  Serie arrSeries[2] = {serie1, serie2};
  Pelicula arrPelis[2] = {pelicula1, pelicula2};

  //Videoteca videoteca1(arrPelis, 2, arrSeries, 2);
  
  videoteca1.agregarPelicula(pelicula1);
  videoteca1.agregarPelicula(pelicula2);
  videoteca1.agregarSerie(serie1);
  videoteca1.agregarSerie(serie2);

  videoteca1.enlistar();

  cout << "=============================================\n\n" << endl;

  //------- Videos calificados -------// 

  videoteca1.calificarPelicula(1000, 10);
  videoteca1.calificarPelicula(1001, 8);

  videoteca1.calificarTemporada(1002, 1, 10);
  videoteca1.calificarTemporada(1002, 2, 8);
  cout << "\n" << endl;
  videoteca1.calificarTemporada(1003, 1, 9);
  videoteca1.calificarTemporada(1003, 2, 6);

  videoteca1.calificarSerie(1002);
  videoteca1.calificarSerie(1003);

  cout << "\n" << endl;

  /*
  temporada1.setCalificacion(5);
  temporada2.setCalificacion(6);
  temporada3.setCalificacion(9);
  temporada4.setCalificacion(8);

  serie1.calificaSerie();
  serie2.calificaSerie();

  pelicula1.calificaPelicula(9);
  pelicula2.calificaPelicula(7);
  */
  
  videoteca1.enlistar();
}