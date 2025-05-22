#include<stdio.h>

int main (){
    int idade,matrícula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matrícula);
    
    printf("nome do aluno: %s - matrícula: %d \n", nome, matrícula);
    printf("idade: %d - altura:%.2f \n", idade, altura);

return 0;
}