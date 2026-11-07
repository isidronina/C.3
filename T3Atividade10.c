#include <stdio.h>

int main() {
    int altura, i, j;
    
    scanf("%d", &altura);
    
    if (altura <= 0) {
        printf("Triângulo inválido\n");
    } else {
        for (i = 1; i <= altura; i++) {
            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
