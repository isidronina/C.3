#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;
    
    do {
        scanf("%d", &opcao);
        
        if (opcao == 0) {
            printf("Fim.\n");
            break;
        }
        
        if (opcao >= 1 && opcao <= 4) {
            scanf("%f", &n1);
            scanf("%f", &n2);
        }
        
        if (opcao == 1) {
            printf("Resultado: %.0f + %.0f = %.0f\n", n1, n2, n1 + n2);
        } else if (opcao == 2) {
            printf("Resultado: %.0f - %.0f = %.0f\n", n1, n2, n1 - n2);
        } else if (opcao == 3) {
            printf("Resultado: %.0f * %.0f = %.0f\n", n1, n2, n1 * n2);
        } else if (opcao == 4) {
            if (n2 == 0) {
                printf("Divisão por zero não permitida\n");
            } else {
                printf("Resultado: %.1f / %.1f = %.1f\n", n1, n2, n1 / n2);
            }
        } else {
            printf("Opção inválida\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}
