#include<stdio.h>

void derivada(){
    float a, b ,c;

    printf("\nDigite o coeficiente a: ");
    scanf("%f", &a);
    printf("\nDigite o coeficiente b: ");
    scanf("%f", &b);
    printf("\nDigite o coeficiente c: ");
    scanf("%f", &c);
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

    
    return 0;
}