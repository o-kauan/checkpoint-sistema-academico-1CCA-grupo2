#include<stdio.h>
void calcularMediaMenu();
void verificarSituacaoMenu();

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

    printf("\nDigite a primeira nota (0 a 10): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (0 a 10): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (0 a 10): ");
    scanf("%f", &nota3);

    if(nota1 < 0 || nota1 > 10){
    printf("Nota invalida!\n");
}

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

void calcularMediaMenu() {
    float n1, n2, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\nMedia: %.2f\n", media);
}

void verificarSituacaoMenu() {
    float media;

    printf("\nDigite a media: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Resultado: Aprovado\n");
    } else if (media >= 5) {
        printf("Resultado: Recuperacao\n");
    } else {
        printf("Resultado: Reprovado\n");
    }
}
