#include <stdio.h>

int main() {
    int N;
    int i;
    float suma;
    
    printf("Ingrese el número de términos de la serie: ");
    scanf("%d", &N);
    
    // Verificar que N sea positivo
    if (N <= 0) {
        printf("\nEl número debe ser positivo.\n");
        return 0;
    }
    
    suma = 0;
    
    printf("\nSerie: ");
    
    // Calcular la serie: 1/2 + 1/3 + 1/4 + ... + 1/N
    for (i = 2; i <= N + 1; i++) {
        suma = suma + (1.0 / i);
        printf("1/%d", i);
        if (i < N + 1) {
            printf(" + ");
        }
    }
    
    printf("\n\nResultado de la serie: %.6f\n", suma);
    
    return 0;
}