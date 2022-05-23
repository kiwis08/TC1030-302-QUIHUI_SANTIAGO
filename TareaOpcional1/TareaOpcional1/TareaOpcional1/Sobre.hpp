//
//  Sobre.hpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#ifndef Sobre_hpp
#define Sobre_hpp

#include <stdio.h>
#include "Envio.hpp"

class Sobre: public Envio {
public:
    Sobre();
    Sobre(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar, double _largo, double _ancho, double _cargoAdicional);
    
    double getLargo();
    double getAncho();
    
    void setLargo(double);
    void setAncho(double);
    
    double calculaCosto();
    
    string str();
    
private:
    double largo;
    double ancho;
    double cargoAdicional;
};
#endif /* Sobre_hpp */
