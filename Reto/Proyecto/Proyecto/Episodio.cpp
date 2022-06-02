//
//  Episodio.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#include "Episodio.hpp"

Episodio::Episodio () {
    title = "Pilot";
    temporada = 1;
    calificacion = 100;
}

Episodio::Episodio (string _title, int _temporada, int _calificacion) {
    title = _title;
    temporada = _temporada;
    calificacion = _calificacion ;
}

void Episodio::setTitle (string _title) {
    title = _title;
}
void Episodio::setTemporada (int _temporada) {
    temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion) {
    calificacion = _calificacion;
}

string Episodio::getTitle () {
    return title;
}
int Episodio::getTemporada() {
    return temporada;
}

int Episodio::getCalificacion() {
    return calificacion;
}

string Episodio::str() {
    return title + "," + to_string(temporada) + "," + to_string(calificacion);
}

