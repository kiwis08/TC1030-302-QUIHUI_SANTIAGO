//
//  main.cpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#include <iostream>
#include "Paquete.hpp"
#include "Sobre.hpp"

int main() {
    Paquete miPaquete;
    Sobre miSobre;
    
    cout << "--- Paquete --- " << endl;
    cout << miPaquete.str() << endl;
    cout << "--- Sobre --- " << endl;
    cout << miSobre.str() << endl;
    
    return 0;
}
