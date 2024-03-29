//
//  Series.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 08/06/22.
//

#include <fstream>
#include <sstream>
#include "Series.hpp"

Series::Series() {
    cantidad = 0;
}

void Series::leerArchivo() {
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea;
    string dato;
    string row[6];
    
    int iRow;
    int iS;
    int cantEpisodios;
    
    fstream lectura;
    Episodio* episodio;
    
    lectura.open("Serie2021.csv", ios::in);
    
    cantidad = 0;
    
    while (getline(lectura, linea)) {
        //cout << linea << endl; //TODO: BORRAR
        std:stringstream registro(linea);
        iRow = 0;
        
        while (getline(registro, dato, ',')) {
            row[iRow++] = dato;
        }
        
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), 0);
        cantidad++;
    }
    lectura.close();
    
    
    lectura.open("Episodio2021.csv", ios::in);
    while (getline(lectura, linea)) {
        stringstream registro(linea);
        iRow = 0;
        
        while (getline(registro, dato, ',')) {
            row[iRow++] = dato;
        }
        
        iS = stoi(row[0]) - 500;
        episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));
        cantEpisodios = arrPtrSeries[iS]->getCantidad();
        
        if (cantEpisodios < 5) {
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *episodio);
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
    }
    lectura.close();
}

void Series::setPtrSerie(Serie* serie) {
    arrPtrSeries[cantidad++] = serie;
}

void Series::setCantidadSeries(int _cantidad) {
    cantidad = _cantidad;
}

Serie* Series::getPtrSerie(string sId) {
    for (int iR = 0; iR < cantidad; iR++) {
        if (arrPtrSeries[iR]->getId() == sId) {
            return arrPtrSeries[iR];
        }
    }
    return nullptr;
}

int Series::getCantidadSeries() {
    return cantidad;
}

void Series::reporteTodasLasSeries() {
    if (cantidad <= 0) {
        return;
    }
    double calPromedio = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        calPromedio += arrPtrSeries[iR]->getCalificacion();
        cout << "*" << *arrPtrSeries[iR] << endl;
    }
    cout << "Promedio Series: " << calPromedio / cantidad << endl;
}

void Series::reporteConCalificacion(double _calificacion){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if (arrPtrSeries[iR]->getCalificacion() == _calificacion) {
            cout << "*" << *arrPtrSeries[iR] << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "No hay series con esa calificación" << endl;
    }
}

void Series::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if (arrPtrSeries[iR]->getGenero() == _genero) {
            cout << "*" << *arrPtrSeries[iR] << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "No hay series con esa calificación" << endl;
    }
}

void Series::calcularCalificacionSeries() {
    double calPromedio = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        calPromedio = arrPtrSeries[iR]->calculaCalPromedio();
        arrPtrSeries[iR]->setCalificacion(calPromedio);
    }
}
