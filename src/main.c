#include<stdio.h>

int main() {
    printf("===========================================\n");
    printf("            SISTEMA EQUIPE 2               \n");
    printf("===========================================\n");
    printf("\n1 - Inserir Notas ");
    printf("\n2 - Calcular Media ");
    printf("\n3 - Verificar Situacao ");
    printf("\n4 - Exibir Resultado ");
    printf("\n5 - Calcular Derivada ");
    printf("\n6 - Sair ");
    printf("\n\n Escolha uma Opcao: ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Opcao 1 selecionada: Inserir Notas\n");
    } else if (opcao == 2) {
        printf("Opcao 2 selecionada: Calcular Media\n");
    }
    
    return 0;
}
