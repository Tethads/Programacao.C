#include <stdio.h>

int main (){
    int idade,matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("% [^\n]", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);
    
    printf("nome do aluno: %s - matricula: %d \n", nome, matricula);
    printf("idade: %d - altura:%.2f \n", idade, altura);

return 0;
}