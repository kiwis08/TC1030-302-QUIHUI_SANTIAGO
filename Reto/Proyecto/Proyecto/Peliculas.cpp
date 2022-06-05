//
//  Peliculas.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#include <iostream>
#include <fstream>
#include <sstream>

#include "Peliculas.hpp"

Peliculas::Peliculas() {
    cantidad = 0;
}

void Peliculas::setPtrPelicula(Pelicula *_pelicula) {
    arrPtrPeliculas[cantidad++] = _pelicula;
}
void Peliculas::setCantidadPeliculas(int _cantidad) {
    cantidad = _cantidad;
}

Pelicula* Peliculas::getPtrPelicula(string sId) {
    for (int index = 0; index < cantidad; index++) {
        if (arrPtrPeliculas[index]->getId() == sId) {
            return arrPtrPeliculas[index];
        }
    }
    return nullptr;
}
int Peliculas::getCantidadPeliculas() {
    return cantidad;
}

void Peliculas::leerArchivo() {
    fstream fin; // File input
    string row[6], line, word;


    fin.open("Pelicula.csv", ios::in); // Abrir el archivo
    cantidad = 0;

    while (getline(fin,line)) {
        stringstream s(line);
        int iR = 0;
        while (getline(s,word, ',')) {
            row[iR++] = word;
        }
        arrPtrPeliculas[cantidad] = new Pelicula(row[0],row[1],stoi(row[2]),row[3],stod(row[4]), stoi(row[5]));

        cantidad ++;
    }
    fin.close();
}

void Peliculas::reporteTodasLasPeliculas() {
    double calPromedio = 0;
    for (int index = 0; index < cantidad; index++) {
        calPromedio += arrPtrPeliculas[index]->getCalificacion();
        cout << arrPtrPeliculas[index]->str() << endl;
    }
    cout << "Calificacion promedio: " << calPromedio / cantidad << endl;
}
void Peliculas::reporteConCalificacion(double _calificacionPromedio) {
    for (int index = 0; index < cantidad; index++) {
        if (arrPtrPeliculas[index]->getCalificacion() == _calificacionPromedio) {
            cout << arrPtrPeliculas[index]->str() << endl;
        }
    }
}

void Peliculas::reporteGenero(string _genero) {
    for (int index = 0; index < cantidad; index++) {
        if (arrPtrPeliculas[index]->getGenero() == _genero) {
            cout << arrPtrPeliculas[index]->str() << endl;
        }
    }
}
