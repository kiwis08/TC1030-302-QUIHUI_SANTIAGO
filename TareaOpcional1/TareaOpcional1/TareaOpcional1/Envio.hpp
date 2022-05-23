//
//  Envio.hpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#ifndef Envio_hpp
#define Envio_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Envio {
public:
    Envio();
    Envio(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar);

    string getRemitente();
    string getDireccionRemitente();
    string getCiudadRemitente();
    string getEstadoRemitente();
    string getCpRemitente();
    string getDestinatario();
    string getDireccionDestinatario();
    string getCiudadDestinatario();
    string getEstadoDestinatario();
    string getCpDestinatario();
    // No es necesario el get ni set de costoEstandar ya que no se utilizará fuera de la clase
    
    void setRemitente(string);
    void setDireccionRemitente(string);
    void setCiudadRemitente(string);
    void setEstadoRemitente(string);
    void setCpRemitente(string);
    void setDestinatario(string);
    void setDireccionDestinatario(string);
    void setCiudadDestinatario(string);
    void setEstadoDestinatario(string);
    
    double calculaCosto();
    
    string str();
    
protected:
    string nombreRemitente;
    string direccionRemitente;
    string ciudadRemitene;
    string estadoRemitente;
    string cpRemitente;
    string nombreDestinatario;
    string direccionDestinatario;
    string ciudadDestinatario;
    string estadoDestinatario;
    string cpDestinatario;
    double costoEstandar;
};

#endif /* Envio_hpp */
