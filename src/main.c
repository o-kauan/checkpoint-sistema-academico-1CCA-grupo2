#include<stdio.h>

void derivada(){
    float a, b ,c;

    printf("\nDigite o coeficiente a: ");
    scanf("%f", &a);
    printf("\nDigite o coeficiente b: ");
    scanf("%f", &b);
    printf("\nDigite o coeficiente c: ");
    scanf("%f", &c);

    float novo_termo_a = 2 * a;
    printf("\nFuncao original: f(x) = %.2fx^2 + %.2fx + %.2f", a, b, c);
    printf("\nDerivada: f'(x) = %.2fx + %.2f\n", novo_termo_a, b);
}

int main() {
    printf("===========================================\n");
    printf("            SISTEMA EQUIPE 2               \n");
    printf("===========================================\n");
    printf("\n1 - Inserir Notas ");
    printf("\n2 - Calcular Media ");
    printf("\n3 - Verificar Situacao ");
    printf("\n4 - Exibir Resultado ");
    printf("\n5 - Calcular Derivada ");
    derivada();

    printf("\n6 - Sair ");
    printf("\n\n Escolha uma Opcao: ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Opcao 1 selecionada: Inserir Notas\n");
    } else if (opcao == 2) {
        printf("Opcao 2 selecionada: Calcular Media\n");
    } else if (opcao == 3) {
        printf("Opcao 3 selecionada: Verificar Situacao\n");
    } else if (opcao == 4) {
        printf("Opcao 4 selecionada: Exibir Resultado\n");
    }

    
    return 0;
}
