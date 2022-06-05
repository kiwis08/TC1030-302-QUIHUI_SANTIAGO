#include "Video.hpp"

Video::Video() {
    iD = "000";
    titulo = "Mi Video";
    duracion = 10;
    genero = "Comedia";
    calificacionPromedio = 10;
}

Video::Video(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio) {
    iD = _id;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

void Video::setId(string _iD) {
    iD = _iD;
}

void Video::setTitulo(string _titulo) {
    titulo = _titulo;
}

void Video::setDuracion(int _duracion) {
    duracion = _duracion;
}

void Video::setGenero(string _genero) {
    genero = _genero;
}

void Video::setCalificacion(double _calificacionPromedio) {
    calificacionPromedio = _calificacionPromedio;
}

string Video::getId() {
    return iD;
}

string Video::getTitulo() {
    return titulo;
}

string Video::getGenero() {
    return genero;
}

int Video::getDuracion() {
    return duracion;
}

double Video::getCalificacion() {
    return calificacionPromedio;
}

string Video::str() {
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio);
}
