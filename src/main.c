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
    escolher:
    printf("\n\n Escolha uma Opcao: ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Opcao 1 selecionada: Inserir Notas\n");
    int opcao;
float nota1, nota2, nota3;

if (opcao == 1) {
    printf("Opcao 1 selecionada: Inserir Notas\n");

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nNotas inseridas com sucesso!\n");
}
    } else if (opcao == 2) {
        printf("Opcao 2 selecionada: Calcular Media\n");
    } else if (opcao == 3) {
        printf("Opcao 3 selecionada: Verificar Situacao\n");
    } else if (opcao == 4) {
        printf("Opcao 4 selecionada: Exibir Resultado\n");
    } else if (opcao == 5) {
        printf("Opcao 5 selecionada: Calcular Derivada\n");
    } else if (opcao == 6) {
        printf("Opcao 6 selecionada: Sair\n");
    } else {
        printf("Opcao invalida. Por favor, escolha uma opcao entre 1 e 6.\n");
        goto escolher;
    }
    
    return 0;
}
