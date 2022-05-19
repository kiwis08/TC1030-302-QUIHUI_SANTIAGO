//
//  Medico.hpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#ifndef Medico_hpp
#define Medico_hpp

#include <stdio.h>
#include "Persona.hpp"

class Medico: public Persona {
public:
    Medico();
    Medico(string, int, string, int);
    
    string getEspecialidad();
    int getPacientes();
    
    void setEspecialidad(string);
    void setPacientes(int);
    
    string str();
    
private:
    string especialidad;
    int pacientes;
    
};

#endif /* Medico_hpp */
