//
//  Serie.hpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#ifndef Serie_hpp
#define Serie_hpp


#include <stdio.h>
#include <iostream>
#include "Video.hpp"
#include "Episodio.hpp"

using namespace std;

class Serie: public Video {
public:
    // Constructores
    Serie ();
    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad);
    
    ~Serie();
    
    // Setters
    void setEpisodio(int _index, Episodio _episodio);
    void setCantidad(int _cantidad);
    
    // Getters
    Episodio getEpisodio(int _index);
    int getCantidad();
    
    // Otros Metodos
    double calculaCalPromedio();
    string str();
    
private:
    Episodio episodios[5];
    int cantidad;
    
};


#endif // Serie_hpp
