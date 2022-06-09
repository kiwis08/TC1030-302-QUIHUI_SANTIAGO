//
//  Serie.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#include "Serie.hpp"

Serie::Serie() : Video() {
    cantidad = 0;
}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio) {
    cantidad = _cantidad;
}


void Serie::setEpisodio(int _index, Episodio _episodio) {
    if (_index >= 0) {
        episodios[_index] = _episodio;
    }
}

void Serie::setCantidad(int _cantidad) {
    cantidad = _cantidad;
}


Episodio Serie::getEpisodio(int _index) {
    if (_index >= 0 and _index < cantidad) {
        return episodios [_index];
    }
    else {
        return Episodio();
    }
}

int Serie::getCantidad() {
    return cantidad;
}

double Serie::calculaCalPromedio() {
    double acum = 0;
    for (int index = 0; index < cantidad; index ++) {
        acum = acum + episodios[index].getCalificacion();
    }
    if (cantidad > 0) {
        return acum / cantidad;
    }
    else {
        return 0;
    }
}

string Serie::str() {
    string acum= "\n";
    for (int index = 0; index < cantidad; index ++) {
        acum = acum + "  ->  " + episodios[index].str() + "\n";
    }
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + acum;
}

ostream& operator<<(ostream &out, const Serie &serie) {
    string acum = "\n";
    for (int index = 0; index < serie.cantidad; index++) {
        acum += " -> " + to_string(index) + '-' + serie.episodios[index].str() + '\n';
    }
    out << serie.iD << ',' << serie.titulo << ',' << serie.duracion << ',' << serie.genero << ',' << serie.calificacionPromedio << ',' << acum;
    return out;
}
