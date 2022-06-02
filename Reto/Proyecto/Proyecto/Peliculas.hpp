//
//  Peliculas.hpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#ifndef Peliculas_hpp
#define Peliculas_hpp
#include <stdio.h>

#include "Pelicula.hpp"

const int MAX_PEL = 50;

class Peliculas {
public:
    // Constructores
    Peliculas();
    
    // Setters
    void setPtrPeliculas(Pelicula *_pelicula);
    void setCantidadPeliculas(int _cantidad);
    
    // Getters
    Pelicula *getPtrPelicula(string sId);
    int getCantidadPeliculas();
    
    // Otros metodos
    void leerArchivo();
    void reporteTodasLasPeliculas();
    void reporteConCalificacion(double _calificacionPromedio);
    void reporteGenero(string _genero);
    
    
private:
    // Atributos
    Pelicula *arrPtrPeliculas[MAX_PEL];
    int cantidad;
    
};
#endif /* Peliculas_hpp */


