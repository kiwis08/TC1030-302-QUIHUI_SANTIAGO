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
        arrPtrSeries[cantidad]->str(); //TODO: BORRAR
        cantidad++;
    }
    lectura.close();
    
    
    lectura.open("Episodio2021.csv", ios::in);
    while (getline(lectura, linea)) {
        // cout << linea << endl; //TODO: BORRAR
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
        cout << arrPtrSeries[iS]->str() << endl;
    }
    lectura.close();
    
    for (int iS = 0; iS<cantidad; iS++) {
        cout << arrPtrSeries[iS]->str() << endl;
    }
    
}

void Series::setPtrSerie(Serie* serie) {
    cout << "Cantidad vieja: " << cantidad << endl;
    arrPtrSeries[cantidad++] = serie;
    cout << "Cantidad nueva: " << cantidad << endl;
}

void Series::setCantidadSeries(int _cantidad) {
    cantidad = _cantidad;
}

Serie* Series::getPtrSerie(string sId) {
    for (int i = 0; i < cantidad; i++) {
        if (arrPtrSeries[i]->getId() == sId) {
            return arrPtrSeries[i];
        }
    }
    return nullptr;
}

int Series::getCantidadSeries() {
    return cantidad;
}

void Series::reporteTodasLasSeries() {
    
}
void Series::reporteConCalificacion(double _calificacion){ }
void Series::reporteGenero(string _genero){ }
void Series::calcularCalificacionSeries(){ }
