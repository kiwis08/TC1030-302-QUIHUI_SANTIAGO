//
//  Paquete.cpp
//  TareaOpcional1
//
//  Created by Santiago Quihui on 22/05/22.
//

#include "Paquete.hpp"

Paquete::Paquete() : Envio() {
    largo = 20;
    ancho = 20;
    profundidad = 20;
    peso = 10;
    costoPorKg = 30;
}

Paquete::Paquete(string _remitente, string _direccionRemitente, string _ciudadRemitente, string _estadoRemitente, string _cpRemitente, string _destinatario, string _direccionDestinatario, string _ciudadDestinatario, string _estadoDestinatario, string _cpDestinatario, double _costoEstandar, double _largo, double _ancho, double _profundidad, double _peso, double _costoPorKg) : Envio(_remitente, _direccionRemitente, _ciudadRemitente, _estadoRemitente, _cpRemitente, _destinatario, _direccionDestinatario, _ciudadDestinatario, _estadoDestinatario, _cpDestinatario, _costoEstandar) {
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoPorKg = _costoPorKg;
}

double Paquete::getLargo() {
    return largo;
}
double Paquete::getAncho() {
    return ancho;
}
double Paquete::getProfundidad() {
    return profundidad;
}
double Paquete::getPeso() {
    return peso;
}


void Paquete::setLargo(double _largo) {
    largo = _largo;
}

void Paquete::setAncho(double _ancho) {
    ancho = _ancho;
}

void Paquete::setProfundidad(double _profundidad) {
    profundidad = _profundidad;
}

void Paquete::setPeso(double _peso) {
    peso = _peso;
}


double Paquete::calculaCosto() {
    return costoEstandar * costoPorKg * peso;
}

string Paquete::str() {
    return "Remitente: " + nombreRemitente + "\n" +
    "Destinatario: " + nombreDestinatario + "\n" +
    "Largo: " + to_string(largo) + "\n" +
    "Ancho: " + to_string(ancho) + "\n" +
    "Profundidad: " + to_string(profundidad) + "\n" +
    "Costo: $" + to_string(calculaCosto());
}
