//
//  main.cpp
//  Proyecto
//
//  Created by Santiago Quihui on 02/06/22.
//

#include <iostream>

#include "Video.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"
#include "Peliculas.hpp"

int main(int argc, const char * argv[]) {
    // Declaracion de un video Default:
    Video v1;
    // Declaracion de un video con parametros:
    Video v2("001", "Spider-Man: No Way Home", 120, "Acción", 10.0);
    // Delcaracion de una pelicula Defualt:
    Pelicula p1;
    // Declaracion de una pelicula con parametros:
    Pelicula p2("002", "Doctor Strange", 120, "Acción", 10.0, 1);
    // Declaracion de una serie Defualt:
    Serie s1;
    // Declaracion de una serie con parametros:
    Serie s2("003", "Modern Family", 30, "Comedia", 9.5);
    // Creacion de episodio por Default:
    Episodio ep1;
    // Creacion de episodio con parametros:
    Episodio ep2("The Bicycle Thief",1, 9.7);
    
    Peliculas coleccionPelis;
    
    cout << "---- VIDEOS -----" << endl;
    cout << v1.str() << endl;
    cout << v2.str() << endl;
    
    cout << "---- PELICULAS -----" << endl;
    cout << p1.str() << endl;
    cout << p2.str() << endl;
    
    cout << "---- EPISODIOS -----" << endl;
    cout << ep1.str() << endl;
    cout << ep2.str() << endl;
    
    
    cout << "---- SERIES -----" << endl;
    cout << s1.str();
    
    // Agregar episodios a la serie
    s2.setCantidad(s2.getCantidad() + 1);
    s2.setEpisodio(0,ep1);
    s2.setCantidad(s2.getCantidad() + 1);
    s2.setEpisodio(1,ep2);
    
    cout <<  s2.str() << endl;
    
    cout << "---- PELICULAS2 -----" << endl;
    coleccionPelis.leerArchivo();
    
    return 0;
    
}
