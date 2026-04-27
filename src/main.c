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
    }
    
    return 0;
}
