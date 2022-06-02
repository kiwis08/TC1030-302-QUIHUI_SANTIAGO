#ifndef Video_hpp
#define Video_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Video {
public:
    // Constructores
    Video();
    Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion);

    // Setters
    void setId(string _id);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    // Getters
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    // Otros métodos
    string str();

protected:
    string id;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;
};

#endif /* Video_hpp */
