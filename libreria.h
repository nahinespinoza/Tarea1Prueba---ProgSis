#ifndef LIBRERIA_H
#define LIBRERIA_H

// Cálculos de área y perímetro

float calcular_area_triangulo(float base, float altura);
float calcular_perimetro_triangulo(float lado1, float lado2, float lado3);

float calcular_area_paralelogramo(float base, float altura);
float calcular_perimetro_paralelogramo(float ladoA, float ladoB);

float calcular_area_cuadrado(float lado);
float calcular_perimetro_cuadrado(float lado);

float calcular_area_rectangulo(float largo, float ancho);
float calcular_perimetro_rectangulo(float largo, float ancho);

float calcular_area_rombo(float diagonal1, float diagonal2);
float calcular_perimetro_rombo(float lado);

float calcular_area_trapecio(float baseMayor, float baseMenor, float altura);
float calcular_perimetro_trapecio(float ladoA, float ladoB, float ladoC, float ladoD);

float calcular_area_circulo(float radio);
float calcular_perimetro_circulo(float radio);

float calcular_area_poligono_regular(int n, float lado, float apotema);
float calcular_perimetro_poligono_regular(int nLados, float longitud);

// Cálculos de superficie y volumen

float calcular_superficie_cubo(float lado);
float calcular_volumen_cubo(float lado);

float calcular_superficie_cuboide(float largo, float ancho, float alto );
float calcular_volumen_cuboide(float largo, float ancho, float alto);

float calcular_superficie_cilindro_recto(float radio, float altura);
float calcular_volumen_cilindro_recto(float radio, float altura);

float calcular_superficie_esfera(float radio);
float calcular_volumen_esfera(float radio);

float calcular_superficie_cono_circular_recto(float radio, float generatriz);
float calcular_volumen_cono_circular_recto(float radio, float altura);

// Solicitud y muestra de información

void mostrar_menu();
int solicitar_presentar_datos(int eleccion);
int mostrar_elegir_AP();
int mostrar_elegir_SV();
void mostrar_resultado(const char *figura, float resultado);
int continuar();

#endif