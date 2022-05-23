//
//  Envio.cpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#include "Envio.hpp"

Envio::Envio() {
    nombreRemitente = "Santiago";
    direccionRemitente = "Mi direccion 123";
    ciudadRemitene = "Hermosillo";
    estadoRemitente = "Sonora";
    cpRemitente = "12345";
    nombreDestinatario = "Andrés";
    direccionDestinatario = "Mi dirección 456";
    ciudadDestinatario = "Monterrey";
    estadoDestinatario = "Nuevo León";
    cpDestinatario = "67890";
    costoEstandar = 50;
}

Envio::Envio(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar) {
    nombreRemitente = _remitente;
    direccionRemitente = _direccionRemitente;
    ciudadRemitene = _ciudadRemitente;
    estadoRemitente = _estadoRemitente;
    cpRemitente = _cpRemitente;
    nombreDestinatario = _destinatario;
    direccionDestinatario = _direccionDestinatario;
    ciudadDestinatario = _ciudadDestinatario;
    estadoDestinatario = _estadoDestinatario;
    cpDestinatario = _cpDestinatario;
    costoEstandar = _costoEstandar;
}

string Envio::getRemitente() {
    return nombreRemitente;
}
string Envio::getDireccionRemitente() {
    return direccionRemitente;
}
string Envio::getCiudadRemitente() {
    return ciudadRemitene;
}
string Envio::getEstadoRemitente() {
    return estadoRemitente;
}
string Envio::getCpRemitente() {
    return cpRemitente;
}
string Envio::getDestinatario() {
    return nombreDestinatario;
}
string Envio::getDireccionDestinatario() {
    return direccionDestinatario;
}
string Envio::getCiudadDestinatario() {
    return ciudadDestinatario;
}
string Envio::getEstadoDestinatario() {
    return estadoDestinatario;
}
string Envio::getCpDestinatario() {
    return cpDestinatario;
}


void Envio::setRemitente(string _nombre) {
    nombreRemitente = _nombre;
}

void Envio::setDireccionRemitente(string _direccion) {
    direccionRemitente = _direccion;
}

void Envio::setCiudadRemitente(string _ciudad) {
    ciudadRemitene = _ciudad;
}

void Envio::setEstadoRemitente(string _estado) {
    estadoRemitente = _estado;
}

void Envio::setCpRemitente(string _cp) {
    cpRemitente = _cp;
}

void Envio::setDestinatario(string _nombre) {
    nombreDestinatario = _nombre;
}

void Envio::setDireccionDestinatario(string _direccion) {
    direccionDestinatario = _direccion;
}

void Envio::setCiudadDestinatario(string _ciudad) {
    ciudadDestinatario = _ciudad;
}

void Envio::setEstadoDestinatario(string _estado) {
    estadoDestinatario = _estado;
}


double Envio::calculaCosto() {
    return costoEstandar;
}

string Envio::str() {
    return "Remitente: " + nombreRemitente + "\n" +
    "Destinatario: " + nombreDestinatario + "\n" +
    "Costo estándar: $" + to_string(costoEstandar);
}
