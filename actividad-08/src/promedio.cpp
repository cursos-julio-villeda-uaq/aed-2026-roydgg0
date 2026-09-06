#include "promedio.hpp"

#include <stdexcept>

namespace aed {

double calcularSuma(const std::vector<double>& calificaciones) {
    double total = 0.0;
    // TODO: recorre el vector con un for basado en rango y devuelve la suma.
    for (double calif : calificaciones) {
        total = total + calif;
    }
    
    return total;
}

double calcularPromedio(const std::vector<double>& calificaciones) {
    if (calificaciones.empty()) {
        throw std::invalid_argument("No se puede promediar un vector vacío");
    }

    // TODO: usa calcularSuma y devuelve el promedio.
    double suma = calcularSuma(calificaciones);
    return suma / calificaciones.size();
}

}  // namespace aed

