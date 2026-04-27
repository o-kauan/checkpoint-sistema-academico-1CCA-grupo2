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
    float nota1 = -1, nota2 = -1, nota3 = -1;
    float medias = -1;
    int opcao;
    menu:
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
    scanf("%d", &opcao);

if (opcao == 1) {
        printf("\n- Opcao 1 selecionada:\n");
        printf("- INSERIR NOTAS\n");
        do {
            printf("\nDigite a primeira nota (0 a 10): ");
            scanf("%f", &nota1);
            if (nota1 < 0  || nota1 > 10){
                printf("Erro! Insira uma nota valida!");
                }
            } while ((nota1 < 0) || (nota1 > 10));          
        do {
            printf("\nDigite a segunda nota (0 a 10): ");
            scanf("%f", &nota2);
            if (nota2 < 0  || nota2 > 10){
                printf("Erro! Insira uma nota valida!");
                }
            } while ((nota2 < 0) || (nota2 > 10));  
        do {
            printf("\nDigite a terceira nota (0 a 10): ");
            scanf("%f", &nota3);
            if (nota3 < 0  || nota3 > 10){
                printf("Erro! Insira uma nota valida!");
                }
            }while ((nota3 < 0) || (nota3 > 10));
        printf("\nNotas atribuidas com sucesso!");
        printf("\nCaso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    }else if (opcao == 2) {
        printf("\n- Opcao 2 selecionada:\n");
        printf("- CALCULAR MEDIA\n");
        if (nota1 < 0 || nota2 < 0 || nota3 < 0){
            printf("Nao e possivel calcular a media sem notas!\n");
            printf("Caso queira voltar ao menu, digite 1: \n");
            scanf("%d", &opcao);
            switch (opcao){
                case 1:
                goto menu;
                default:
                break;
        }
            }
        medias = (nota1 + nota2 + nota3) / 3;
        printf("Media calculada com sucesso!\n");
        printf("Media das notas = %.2f", medias);
        printf("\nCaso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    }else if (opcao == 3){
        printf("\n- Opcao 3 selecionada:\n");
        printf("- VERIFICAR SITUACAO\n");
        if (medias < 0){
            printf("Erro: A media ainda não foi calculada!\n");
            printf("Selecione a opcao 2 no menu para defini-las!\n");
        }else if (medias < 6){
            printf("SITUACAO DO ALUNO: REPROVADO\n");
        }else{
            printf("SITUACAO DO ALUNO: APROVADO\n");
        }
        printf("Caso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    }else if (opcao == 4) {
        printf("\n- Opcao 4 selecionada:\n");
        printf("- EXIBIR RESULTADO\n");
        if (nota1 < 0 || nota2 < 0 || nota3 <0){
            printf("---------------------\n");
            printf("NOTA 1: NAO ATRIBUIDA\n");
            printf("NOTA 2: NAO ATRIBUIDA\n");
            printf("NOTA 3: NAO ATRIBUIDA\n");
            printf("---------------------\n");
        }else{
            printf("---------------------\n");
            printf("NOTA 1: %.2f", nota1);
            printf("\nNOTA 2: %.2f", nota2);
            printf("\nNOTA 3: %.2f", nota3);
            printf("\n---------------------\n");
        }
        if (medias < 0){
        printf("MEDIA: NAO ATRIBUIDA\n");
        printf("---------------------\n");
        }else{
            printf("MEDIA: %.2f", medias);
            printf("\n---------------------\n");
        }
        if (medias < 0){
            printf("SITUACAO: NAO ATRIBUIDA\n");
            printf("---------------------\n");
        }else if (medias < 6){
            printf("SITUACAO: REPROVADO\n");
            printf("---------------------\n");
        }else{
            printf("SITUACAO: APROVADO\n");
            printf("---------------------\n");
        }
        printf("Caso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    }else if (opcao == 5) {
        printf("Opcao 5 selecionada: Calcular Derivada\n");
        derivada();
        printf("Caso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    } else if (opcao == 6) {
        printf("Opcao 6 selecionada: Sair\n");
        printf("Ate Logo!");
        return 0;
    } else {
        printf("Opcao invalida. Por favor, escolha uma opcao entre 1 e 6.\n");
        printf("Caso queira voltar ao menu, digite 1: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            goto menu;
            default:
            break;
        }
    }
    
    return 0;
}