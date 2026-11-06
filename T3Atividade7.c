#include <stdio.h>

int main() {
    int n, i, fat = 1;
    
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Parâmetro inválido.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fat *= i;
        }
        printf("O fatorial de %d é %d.\n", n, fat);
    }
    
    return 0;
}
