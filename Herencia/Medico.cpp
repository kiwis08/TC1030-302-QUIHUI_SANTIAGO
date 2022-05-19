//
//  Medico.cpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#include "Medico.hpp"


Medico::Medico(): Persona() {
    especialidad = "Tecnología Financiera";
    pacientes = 10000;
}

//Llamar al constructor default de la clase base.
// Constructor con parámetros
Medico::Medico(string _nombre, int _edad, string _especialidad, int _pacientes) : Persona(_nombre, _edad)
{ // de pref. no usar - prefijo this-> para diferenciar el nombre del atributo al nombre del parámetro
    especialidad = _especialidad;
    pacientes = _pacientes;
}

string Medico::getEspecialidad() {
    return especialidad;
}

int Medico::getPacientes() {
    return pacientes;
    
}
string Medico::str( ) {
    return "Nombre: " + nombre + ", Edad: " + to_string(edad) + ", Especialidad: " + especialidad + ", Pacientes: " + to_string(pacientes);
}
