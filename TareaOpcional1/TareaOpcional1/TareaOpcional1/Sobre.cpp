//
//  Sobre.cpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#include "Sobre.hpp"

Sobre::Sobre() : Envio() {
    largo = 30;
    ancho = 30;
    cargoAdicional = 80;
}

Sobre::Sobre(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar, double _largo, double _ancho, double _cargoAdicional) : Envio(_remitente, _direccionRemitente, _ciudadRemitente, _estadoRemitente, _cpRemitente, _destinatario, _direccionDestinatario, _ciudadDestinatario, _estadoDestinatario, _cpDestinatario, _costoEstandar) {
    largo = _largo;
    ancho = _ancho;
    cargoAdicional = _cargoAdicional;
}

double Sobre::getLargo() {
    return largo;
}
double Sobre::getAncho() {
    return ancho;
}

void Sobre::setLargo(double _largo) {
    largo = _largo;
}

void Sobre::setAncho(double _ancho) {
    ancho = _ancho;
}



double Sobre::calculaCosto() {
    if (largo > 25 || ancho > 30) {
        return costoEstandar + cargoAdicional;
    };
    return costoEstandar;
}

string Sobre::str() {
    return "Remitente: " + nombreRemitente + "\n" +
    "Destinatario: " + nombreDestinatario + "\n" +
    "Largo: " + to_string(largo) + "\n" +
    "Ancho: " + to_string(ancho) + "\n" +
    "Costo: $" + to_string(calculaCosto());
}
