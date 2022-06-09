//
//  Pelicula.hpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include "Video.hpp"

class Pelicula: public Video {
public:
    // Constructores
    Pelicula();
    Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares);
    ~Pelicula();
    // Setters
    void setOscares(int _oscares);
    
    // Getters
    int getOscares();
    
    // Otros métodos
    string str();
    
    friend ostream& operator<<(ostream &out, const Pelicula &peli);
private:
    int oscares;
};

#endif /* Pelicula_hpp */
