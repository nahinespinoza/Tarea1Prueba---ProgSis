#include <stdio.h>
#include "libreria.h"

int main(){
    int opcion;
    int continuar_programa = 1;
    float resultado;

    do {
        mostrar_menu();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        resultado = solicitar_presentar_datos(opcion);
        switch(opcion){
            case 1: {
                mostrar_resultado("Triángulo", resultado);
                break;
            }
            case 2: {
                mostrar_resultado("Paralelogramo", resultado);
                break;
            }
            case 3: {
                mostrar_resultado("Cuadrado", resultado);
                break;
            }
            case 4: {
                mostrar_resultado("Rectángulo", resultado);
                break;
            }
            case 5: {
                mostrar_resultado("Rombo", resultado);
                break;
            }
            case 6: {
                mostrar_resultado("Trapecio", resultado);
                break;
            }
            case 7: {
                mostrar_resultado("Círculo", resultado);
                break;
            }
            case 8: {
                mostrar_resultado("Polígono Regular", resultado);
                break;
            }
            case 9: {
                mostrar_resultado("Cubo", resultado);
                break;
            }
            case 10: {
                mostrar_resultado("Cuboide", resultado);
                break;
            }
            case 11: {
                mostrar_resultado("Cilindro Recto", resultado);
                break;
            }
            case 12: {
                mostrar_resultado("Esfera", resultado);
                break;
            }
            case 13: {
                mostrar_resultado("Cono Circular Recto", resultado);
                break;
            }
            case 0: {
                break;
            }
            default:
                printf("Opción no válida.\n");
                break;
        }

        if(opcion == 0){
            break;
        } else{
                continuar_programa = continuar();
        }



    } while(continuar_programa != 0);

    return 0;
}