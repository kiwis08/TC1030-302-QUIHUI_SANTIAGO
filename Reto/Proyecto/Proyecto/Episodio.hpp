//
//  Episodio.hpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#ifndef Episodio_hpp
#define Episodio_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio {
public:
    // Constructores
    Episodio ();
    Episodio (string _title, int _temporada, double _calificacion);
    
    // Setters
    void setTitle(string _title);
    void setTemporada (int _temporada);
    void setCalificacion(int _calificacion);
    
    // Getters
    string getTitle ();
    int getTemporada();
    double getCalificacion();

    //Str
    string str() const;
    
private:
    string title;
    int temporada;
    double calificacion;
};

#endif // Episodio_hpp
