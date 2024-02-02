// Calculadora de Índice de Massa Corporal (IMC) simples, que calcula e mostra o IMC, além de exibir a condição de saúde do usuário conforme o resultado

#include <stdio.h>

// Função que calcula o IMC do usuário
float CalcularIMC(float peso, float altura){
    return peso / (altura * altura);
}

// Função que exibe a condição de saúde do usuário através do resultado do IMC
void ExibirCondicaoIMC(float peso, float altura){

    // Atribui à variável "resultadoIMC" pela função "CalcularIMC"
    float resultadoIMC = CalcularIMC(peso, altura);

    if(resultadoIMC < 18.50){
        printf("\nSeu peso esta abaixo do normal.\n");
    }
    else if(resultadoIMC >= 18.50 && resultadoIMC < 25){
        printf("\nSeu peso e considerado saudavel.\n");
    }
    else if(resultadoIMC >= 25 && resultadoIMC < 30){
        printf("\nVoce esta com sobrepeso.\n");
    }
    else if(resultadoIMC >= 30 && resultadoIMC < 35){
        printf("\nVoce esta com obesidade grau I.\n");
    }
    else if(resultadoIMC >= 35 && resultadoIMC < 40){
        printf("\nVoce esta com obesidade grau II.\n");
    }
    else if(resultadoIMC >= 40){
        printf("\nVoce esta com obesidade grau III.\n");
    }
    else{
        printf("\nHouve um erro inesperado...\n");
    }
}

// Função principal
int main(){

    // Declaração de variáveis para armazenar o peso, altura e o resultado do IMC
    float peso, altura, resultadoIMC;

    // Mensagem de boas-vindas ao usuário
    printf("Seja bem-vindo(a) a calculadora de IMC!\n");

    // Solicita o peso
    printf("\nInforme seu peso em (KG) - (Ex: 64):\n");
    scanf("%f", &peso);

    // Solicita a altura
    printf("Informe sua altura em (M) - (Ex: 1.72):\n");
    scanf("%f", &altura);

    // Se peso ou altura forem iguais, ou menores que zero, finalize o programa
    if(peso <= 0 || altura <= 0){
        printf("\nErro: informe um numero maior que zero!\n");
        return 1;
    }

    // Chama a função para calcular o IMC e armazena o resultado na variável "resultadoIMC"
    resultadoIMC = CalcularIMC(peso, altura);

    // Exibe o resultado do IMC
    printf("\nSeu IMC: %.2f\n", resultadoIMC);

    // Chama a função para exibir a condição de saúde do usuário
    ExibirCondicaoIMC(peso, altura);

    return 0;
}
