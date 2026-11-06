#include <stdio.h>

int main() {
    int base, altura, i, j;
    
    scanf("%d", &base);
    scanf("%d", &altura);
    
    if (base <= 0 || altura <= 0) {
        printf("Retângulo inválido\n");
    } else {
        for (i = 0; i < altura; i++) {
            for (j = 0; j < base; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
