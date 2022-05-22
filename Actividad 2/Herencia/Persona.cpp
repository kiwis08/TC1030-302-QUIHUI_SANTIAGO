//
//  Persona.cpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#include "Persona.hpp"


Persona::Persona() {
    nombre = "Santiago Quihui Rubio";
    edad = 18;
}

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setNombre(string _nombre) {
    nombre = _nombre;
}

void Persona::setEdad(int _edad) {
    edad = _edad;
}

string Persona::str() {
    return "Nombre: " + nombre + ", Edad: " + to_string(edad);
}

