//
//  Pelicula.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#include "Pelicula.hpp"

Pelicula::Pelicula() : Video() {
    oscares = 0;
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares) : Video(_iD, _titulo, _duracion, _genero, _calificacion) {
    oscares = _oscares;
}

void Pelicula::setOscares(int _oscares) {
    oscares = _oscares;
}

int Pelicula::getOscares() {
    return oscares;
}

string Pelicula::str() {
    return Video::str() + ',' + to_string(oscares);
}

ostream& operator<<(ostream &out, const Pelicula &peli) {
    out << peli.iD << ',' << peli.titulo << ',' << peli.duracion << ',' << peli.genero << ',' << peli.calificacionPromedio << ',' << peli.oscares << endl;
    return out;
}
