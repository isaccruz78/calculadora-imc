// Calculadora de �ndice de Massa Corporal (IMC) simples, que calcula e mostra o IMC, al�m de exibir a condi��o de sa�de do usu�rio conforme o resultado

#include <stdio.h>

// Fun��o que calcula o IMC do usu�rio
float CalcularIMC(float peso, float altura){
    return peso / (altura * altura);
}

// Fun��o que exibe a condi��o de sa�de do usu�rio atrav�s do resultado do IMC
void ExibirCondicaoIMC(float peso, float altura){

    // Atribui � vari�vel "resultadoIMC" pela fun��o "CalcularIMC"
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

// Fun��o principal
int main(){

    // Declara��o de vari�veis para armazenar o peso, altura e o resultado do IMC
    float peso, altura, resultadoIMC;

    // Mensagem de boas-vindas ao usu�rio
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

    // Chama a fun��o para calcular o IMC e armazena o resultado na vari�vel "resultadoIMC"
    resultadoIMC = CalcularIMC(peso, altura);

    // Exibe o resultado do IMC
    printf("\nSeu IMC: %.2f\n", resultadoIMC);

    // Chama a fun��o para exibir a condi��o de sa�de do usu�rio
    ExibirCondicaoIMC(peso, altura);

    return 0;
}
