#include <stdio.h>

void convertir(float cantidad, float tasa, char *moneda) {
    printf("%.2f convertido a %s es: %.2f\n", cantidad, moneda, cantidad * tasa);
}

int main() {
    int opcion;
    float cantidad;
    
    printf("Bienvenido al conversor de monedas\n");
    printf("Seleccione una opción:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dólares a Euros\n");
    printf("6. Euros a Dólares\n");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            convertir(cantidad, 0.13, "USD"); // Tasa de ejemplo
            break;
        case 2:
            convertir(cantidad, 0.12, "EUR"); // Tasa de ejemplo
            break;
        case 3:
            convertir(cantidad, 7.5, "GTQ"); // Tasa de ejemplo
            break;
        case 4:
            convertir(cantidad, 8.4, "GTQ"); // Tasa de ejemplo
            break;
        case 5:
            convertir(cantidad, 0.91, "EUR"); // Tasa de ejemplo
            break;
        case 6:
            convertir(cantidad, 1.10, "USD"); // Tasa de ejemplo
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
