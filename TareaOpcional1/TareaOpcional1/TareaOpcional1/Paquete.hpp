//
//  Paquete.hpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#ifndef Paquete_hpp
#define Paquete_hpp

#include <stdio.h>
#include "Envio.hpp"

class Paquete: public Envio {
public:
    Paquete();
    Paquete(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar, double _largo, double _ancho, double _profundidad, double _peso, double _costoPorKg);
    
    double getLargo();
    double getAncho();
    double getProfundidad();
    double getPeso();
    
    void setLargo(double);
    void setAncho(double);
    void setProfundidad(double);
    void setPeso(double);
    
    double calculaCosto();
    
    string str();
    
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoPorKg;
};

#endif /* Paquete_hpp */
