//
//  main.cpp
//  Herencia
//
//  Created by Santiago Quihui on 19/05/22.
//

#include <iostream>
#include "Persona.hpp"
#include "Estudiante.hpp"
#include "Medico.hpp"

using namespace std;

int main() {
    Persona santiago;
    Estudiante quihui("Santiago Quihui", 18, "ITC"), santi;
    Medico drChapa("Fernando Contreras", 55, "Pediatra", 123);

    cout << santiago.str() << endl;
    cout << quihui.str() << endl;
    cout << santi.str() << endl;
    cout << drChapa.str() << endl;
    
    return 0;
}
