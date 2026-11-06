#include <stdio.h>

int main() {
    int pos, a = 1, b = 1, atual = 1, i;
    
    scanf("%d", &pos);
    
    if (pos <= 0) {
        return 0;
    }
    
    if (pos > 2) {
        for (i = 3; i <= pos; i++) {
            atual = a + b;
            a = b;
            b = atual;
        }
    }
    
    printf("O valor na posição %d da sequência de Fibonacci é %d\n", pos, atual);
    
    return 0;
}
