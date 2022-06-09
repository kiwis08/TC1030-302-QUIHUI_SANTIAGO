//
//  Series.hpp
//  Proyecto
//
//  Created by Santiago Quihui on 08/06/22.
//

#ifndef Series_hpp
#define Series_hpp

#include <stdio.h>
#include "Serie.hpp"

const int MAX_SERIES = 50;

class Series {
public:
    Series();
    
    void leerArchivo();
    void setPtrSerie(Serie* serie);
    void setCantidadSeries(int _cantidad);
    
    Serie* getPtrSerie(string sId);
    int getCantidadSeries();
    
    void reporteTodasLasSeries();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void calcularCalificacionSeries();
private:
    int cantidad;
    Serie* arrPtrSeries[MAX_SERIES];
};


#endif /* Series_hpp */
