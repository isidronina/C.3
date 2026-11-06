#include <stdio.h>

int main() {
    char palavra[50], letra[10];
    
    scanf("%s", palavra);
    printf("Palavra original:\n%s\n", palavra);
    printf("Palavra soletrada:\n");
    
    while (1) {
        scanf("%s", letra);
        if (letra[0] == '0') {
            break;
        }
        printf("%s\n", letra);
    }
    
    return 0;
}
