//
//  Persona.hpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Persona {
 public:
  // Constructor default y parámetros
  Persona();
  Persona(string, int);

  // getters
  string getNombre();
  int getEdad();

  // setters
  void setNombre(string);
  void setEdad(int);

  // concatenar toda la info. y la retorna
  string str();

 protected:
  string nombre;
  int edad;
};
#endif /* Persona_hpp */
