//
//  Estudiante.hpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#ifndef Estudiante_hpp
#define Estudiante_hpp

#include <stdio.h>
#include "Persona.hpp"
// clase derivada de la clase Persona

class Estudiante: public Persona {
public:
    Estudiante();
    Estudiante(string _nombre, int _edad, string _carrera);
    string getCarrera();
    void setCarrera(string);
    string str();
    
private:
    string carrera;
};


#endif /* Estudiante_hpp */
