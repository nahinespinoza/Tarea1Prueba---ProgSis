#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
#include "libreria.h"

// Cálculos de perímetros

float calcular_perimetro_triangulo(float lado1, float lado2, float lado3){
    return lado1 + lado2 + lado3;
}

float calcular_perimetro_paralelogramo(float ladoA, float ladoB){
    return (2 * ladoA) + (2 * ladoB);
}

float calcular_perimetro_cuadrado(float lado){
    return 4 * lado;
}

float calcular_perimetro_rectangulo(float largo, float ancho){
    return (2 * largo) + (2 * ancho);
}

float calcular_perimetro_rombo(float lado){
    return 4 * lado;
}

float calcular_perimetro_trapecio(float ladoA, float ladoB, float ladoC, float ladoD){
    return ladoA + ladoB + ladoC + ladoD;
}

float calcular_perimetro_circulo(float radio){
    return 2 * MPI * radio;
}

float calcular_perimetro_poligono_regular(int nLados, float longitud){
    return nLados * longitud;
}

// Cálculos de áreas

float calcular_area_triangulo(float base, float altura){
    return (base * altura)/2;
}

float calcular_area_paralelogramo(float base, float altura){
    return base * altura;
}

float calcular_area_cuadrado(float lado){
    return pow(lado, 2); 
}

float calcular_area_rectangulo(float largo, float ancho){
    return largo * ancho;
}

float calcular_area_rombo(float diagonal1, float diagonal2){
    return (diagonal1 * diagonal2)/2;
}

float calcular_area_trapecio(float baseMayor, float baseMenor, float altura){
    return ((baseMayor + baseMenor) * altura)/2;
}

float calcular_area_circulo(float radio){
    return MPI * pow(radio, 2);
}

float calcular_area_poligono_regular(int n, float lado, float apotema){
    float perimetro = calcular_perimetro_poligono_regular(n, lado);
    return (perimetro * apotema)/2;
}

// Cálculos de superficies y volúmenes

float calcular_superficie_cubo(float lado){
    return 6 * pow(lado, 2);
}

float calcular_volumen_cubo(float lado){
    return pow(lado, 3);
}

float calcular_superficie_cuboide(float largo, float ancho, float alto ){
    return (largo * ancho) + (2 * (ancho * alto)) + (2 * (largo * alto));
}

float calcular_volumen_cuboide(float largo, float ancho, float alto){
    return largo * ancho * alto;
}

float calcular_superficie_cilindro_recto(float radio, float altura){
    return (2 * MPI * radio) * (altura + radio);
}

float calcular_volumen_cilindro_recto(float radio, float altura){
    return MPI * pow(radio, 2) * altura;
}

float calcular_superficie_esfera(float radio){
    return 4 * MPI * pow(radio, 2);
}

float calcular_volumen_esfera(float radio){
    return (4/3) * MPI * pow(radio, 3);
}

float calcular_superficie_cono_circular_recto(float radio, float generatriz){
    return (MPI * pow(radio, 2)) + (MPI * radio * generatriz);
}

float calcular_volumen_cono_circular_recto(float radio, float altura){
    return (MPI * pow(radio, 2) * altura)/3;
}



