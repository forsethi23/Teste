#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Numero entre 1 a 100

    //Inicio do jogo
    printf("Bem-vindo ao jogo maior, menor ou igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparaçao: ");
    scanf(" %c" , &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d" , &numeroJogador);

    //Exibir numero do computador
   
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
         printf ("Voce escolheu a opçao maior\n");
         resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf ("Voce escolheu a opçao menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf ("Voce escolheu a opçao igual\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
    printf("Opção de jogo invalida\n");
        break;
    }
    printf("O numero do computador e: %d\n O numero do jogador e:  %d\n" , numeroComputador, numeroJogador);


    if (resultado == 1)
    {
        printf("Voce vence\n");
    } else {
        printf ("Voce perdeu\n");
    }
    

























}