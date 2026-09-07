#include "suma_regresiva.hpp"

long long sumaIterativa(unsigned int n) {
    // TODO: Implementa la suma regresiva usando un ciclo.
    // Estructuras repetitivas
    // for, while, do while

    long long suma = 0;
    for(short int contador = n; n >= 1; n--){
        suma = suma + contador;
    }

    return suma;
}

long long sumaRecursiva(unsigned int n) {
    // TODO: Implementa la suma regresiva usando recursividad y un caso base.
    if(n == 1)
        return 1;
    return n + sumaRecursiva(n-1);
}
