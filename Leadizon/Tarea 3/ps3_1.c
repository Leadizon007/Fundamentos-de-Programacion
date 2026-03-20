#include <stdio.h>

int main() {
    int N;
    int i;
    int producto;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);
    
    // Verificar que el número sea positivo
    if (N <= 0) {
        printf("\nEl número debe ser positivo.\n");
        return 0;
    }
    
    printf("\nTabla de multiplicar del %d:\n", N);
    printf("========================\n");
    
    // Generar la tabla de multiplicar del 1 al 10
    for (i = 1; i <= 10; i++) {
        producto = N * i;
        printf("%d x %d = %d\n", N, i, producto);
    }
    
    printf("========================\n");
    
    return 0;
}