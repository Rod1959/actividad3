#include <stdio.h>


// Definición de las tasas de cambio
#define GTQ_TO_USD 0.12801
#define USD_TO_GTQ 7.81174
#define USD_TO_EUR 0.91861
#define EUR_TO_USD 1.08860
#define GTQ_TO_EUR (GTQ_TO_USD * USD_TO_EUR)
#define EUR_TO_GTQ (1 / GTQ_TO_EUR)

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Seleccione la moneda de entrada:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f GTQ son %.2f USD\n", cantidad, resultado);
            printf("%.2f GTQ son %.2f EUR\n", cantidad, cantidad * GTQ_TO_EUR);
            break;
        case 2:
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f USD son %.2f GTQ\n", cantidad, resultado);
            printf("%.2f USD son %.2f EUR\n", cantidad, cantidad * USD_TO_EUR);
            break;
        case 3:
            resultado = cantidad * EUR_TO_USD;
            printf("%.2f EUR son %.2f USD\n", cantidad, resultado);
            printf("%.2f EUR son %.2f GTQ\n", cantidad, cantidad * EUR_TO_GTQ);
            break;
        default:
            printf("Opción no válida\n");
            return 1;
    }

    return 0;
}

