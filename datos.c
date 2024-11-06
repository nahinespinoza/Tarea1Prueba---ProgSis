#include <stdio.h>
#include "libreria.h"

void mostrar_menu()
{
    printf("Seleccione una figura para calcular:\n");
    printf("1. Triángulo\n");
    printf("2. Paralelogramo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("5. Rombo\n");
    printf("6. Trapecio\n");
    printf("7. Círculo\n");
    printf("8. Polígono Regular\n");
    printf("9. Cubo\n");
    printf("10. Cuboide\n");
    printf("11. Cilindro Recto\n");
    printf("12. Esfera\n");
    printf("13. Cono Circular Recto\n");
    printf("0. Salir\n");
}

int mostrar_elegir_AP()
{
    int opcion;
    printf("Indique el tipo de cálculo que quiere realizar:\n");
    printf("1. Área\n");
    printf("2. Perímetro\n");

    do
    {
        printf("Digite una opción: ");
        scanf("%d", &opcion);
    } while (opcion == 0 || opcion > 2);

    return opcion;
}

int mostrar_elegir_SV()
{
    int opcion;
    printf("Indique el tipo de cálculo que quiere realizar:\n");
    printf("1. Superficie\n");
    printf("2. Volumen\n");

    do
    {
        printf("Digite una opción: ");
        scanf("%d", &opcion);
    } while (opcion == 0 || opcion > 2);

    return opcion;
}

void mostrar_resultado(const char *figura, float resultado)
{
    printf("\nResultados para %s:\n", figura);
    printf("El resultado de su cálculo es %.2f\n", resultado);
}

int solicitar_presentar_datos(int eleccion)
{
    int respuesta;
    switch (eleccion){
        case 1:
        {
            respuesta = mostrar_elegir_AP();
            if (respuesta == 1)
            {
                float base, altura;
                printf("Ingrese la base del triángulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del triángulo: ");
                scanf("%f", &altura);
                return calcular_area_triangulo(base, altura);
                break;
            } else{
                float a, b, c;
                printf("Ingrese el lado 1 del triángulo: ");
                scanf("%f", &a);
                printf("Ingrese el lado 2 del triángulo: ");
                scanf("%f", &b);
                printf("Ingrese el lado 3 del triángulo: ");
                scanf("%f", &c);
                return calcular_perimetro_triangulo(a, b, c);
                break;
            }
        }

        case 2:
        {
            respuesta = mostrar_elegir_AP();
            if (respuesta == 1)
            {
                float base, altura;
                printf("Ingrese la base del paralelogramo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del paralelogramo: ");
                scanf("%f", &altura);
                return calcular_area_paralelogramo(base, altura);
                break;
            } else{
                float a, b;
                printf("Ingrese el lado a del paralelogramo: ");
                scanf("%f", &a);
                printf("Ingrese el lado b del paralelogramo: ");
                scanf("%f", &b);
                return calcular_perimetro_paralelogramo(a, b);
                break;
            }
        }

        case 3: 
        {
            respuesta = mostrar_elegir_AP();
            if (respuesta == 1)
            {
                float lado;
                printf("Ingrese un lado del cuadrado: ");
                scanf("%f", &lado);
                return calcular_area_cuadrado(lado);
                break;
            } else{
                float lado;
                printf("Ingrese un lado del cuadrado: ");
                scanf("%f", &lado);
                return calcular_perimetro_cuadrado(lado);
                break;
            }
        }

        case 4:
        {
            respuesta = mostrar_elegir_AP();
            if(respuesta == 1)
            {
                float largo, ancho;
                printf("Ingrese el largo del rectángulo: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho del rectángulo: ");
                scanf("%f", &ancho);
                return calcular_area_rectangulo(largo, ancho);
                break;
            } else{
                float largo, ancho;
                printf("Ingrese el largo del rectángulo: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho del rectángulo: ");
                scanf("%f", &ancho);
                return calcular_perimetro_rectangulo(largo, ancho);
                break;
            }
        }

        case 5:
        {
            respuesta = mostrar_elegir_AP();
            if(respuesta == 1)
            {
                float d1, d2;
                printf("Ingrese la diagonal 1 del rombo: ");
                scanf("%f", &d1);
                printf("Ingrese la diagonal 2 del rombo: ");
                scanf("%f", &d2);
                return calcular_area_rombo(d1, d2);
                break;
            } else{
                float lado;
                printf("Ingrese un lado del rombo: ");
                scanf("%f", &lado);
                return calcular_perimetro_rombo(lado);
                break;
            }
        }

        case 6:
        {
            respuesta = mostrar_elegir_AP();
            if(respuesta == 1)
            {
                float baseMayor, baseMenor, altura;
                printf("Ingrese la Base Mayor del trapecio: ");
                scanf("%f", &baseMayor);
                printf("Ingrese la Base Menor del trapecio: ");
                scanf("%f", &baseMenor);
                printf("Ingrese la altura del trapecio: ");
                scanf("%f", &altura);
                return calcular_area_trapecio(baseMayor, baseMenor, altura);
                break;
            } else{
                float a, b, c, d;
                printf("Ingrese el lado 1 del trapecio: ");
                scanf("%f", &a);
                printf("Ingrese el lado 2 del trapecio: ");
                scanf("%f", &b);
                printf("Ingrese el lado 3 del trapecio: ");
                scanf("%f", &c);
                printf("Ingrese el lado 4 del trapecio: ");
                scanf("%f", &d);
                return calcular_perimetro_trapecio(a, b, c, d);
                break;
            }
        }

        case 7:
        {
            respuesta = mostrar_elegir_AP();
            if(respuesta == 1)
            {
                float radio;
                printf("Ingrese el radio del círculo: ");
                scanf("%f", &radio);
                return calcular_area_circulo(radio);
                break;
            } else{
                float radio;
                printf("Ingrese el radio del círculo: ");
                scanf("%f", &radio);
                return calcular_perimetro_circulo(radio);
                break;
            }
        }

        case 8:
        {
            respuesta = mostrar_elegir_AP();
            if(respuesta == 1)
            {
                float lado, apotema; int n;
                printf("Ingrese el número de lados del polígono: ");
                scanf("%d", &n);
                printf("Ingrese la longitud de un lado del polígono: ");
                scanf("%f", &lado);
                printf("Ingrese la el apotema del polígono: ");
                scanf("%f", &apotema);
                return calcular_area_poligono_regular(n, lado, apotema);
                break;
            } else{
                float longitud; int n;
                printf("Ingrese el número de lados del polígono: ");
                scanf("%d", &n);
                printf("Ingrese la longitud de un lado del polígono: ");
                scanf("%f", &longitud);
                return calcular_perimetro_poligono_regular(n, longitud);
                break;
            }
        }

        case 9:
        {
            respuesta = mostrar_elegir_SV();
            if(respuesta == 1)
            {
                float lado;
                printf("Ingrese un lado del cubo: ");
                scanf("%f", &lado);
                return calcular_superficie_cubo(lado);
                break;
            } else{
                float lado;
                printf("Ingrese un lado del cubo: ");
                scanf("%f", &lado);
                return calcular_volumen_cubo(lado);
                break;
            }
        }

        case 10:
        {
            respuesta = mostrar_elegir_SV();
            if(respuesta == 1)
            {
                float largo, ancho, alto;
                printf("Ingrese el largo del cuboide: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho del cuboide: ");
                scanf("%f", &ancho);
                printf("Ingrese el alto del cuboide: ");
                scanf("%f", &alto);
                return calcular_superficie_cuboide(largo, ancho, alto);
                break;
            } else{
                float largo, ancho, alto;
                printf("Ingrese el largo del cuboide: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho del cuboide: ");
                scanf("%f", &ancho);
                printf("Ingrese el alto del cuboide: ");
                scanf("%f", &alto);
                return calcular_volumen_cuboide(largo, ancho, alto);
                break;
            }
        }

        case 11:
        {
            respuesta = mostrar_elegir_SV();
            if(respuesta == 1)
            {
                float radio, altura;
                printf("Ingrese el radio del cilindro: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cilindro: ");
                scanf("%f", &altura);
                return calcular_superficie_cilindro_recto(radio, altura);
                break;
            } else{
                float radio, altura;
                printf("Ingrese el radio del cilindro: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cilindro: ");
                scanf("%f", &altura);
                return calcular_volumen_cilindro_recto(radio, altura);
                break;
            }
        }

        case 12:
        {
            respuesta = mostrar_elegir_SV();
            if(respuesta == 1)
            {
                float radio;
                printf("Ingrese el radio de la esfera: ");
                scanf("%f", &radio);
                return calcular_superficie_esfera(radio);
                break;
            } else{
                float radio;
                printf("Ingrese el radio de la esfera: ");
                scanf("%f", &radio);
                return calcular_volumen_esfera(radio);
                break;
            }
        }

        case 13:
        {
            respuesta = mostrar_elegir_SV();
            if(respuesta == 1)
            {
                float radio, generatriz;
                printf("Ingrese el radio del cono: ");
                scanf("%f", &radio);
                printf("Ingrese la generatriz del cono: ");
                scanf("%f", &generatriz);
                return calcular_superficie_cono_circular_recto(radio, generatriz);
                break;
            } else{
                float radio, altura;
                printf("Ingrese el radio del cono: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cono: ");
                scanf("%f", &altura);
                return calcular_volumen_cono_circular_recto(radio, altura);
                break;
            }
        }

        case 0:
        {
            printf("Programa finalizado.");
            break;
        }

        default:
            printf("Opción no válida. Intente de nuevo.\n");
            break;
       
    }
    return 0;
}

int continuar() {
    char respuesta;
    printf("¿Desea realizar otro cálculo? (s/n): ");
    scanf(" %c", &respuesta);  
    if (respuesta != 's' && respuesta != 'S') {
        return 0;
    }
    return 1;
}