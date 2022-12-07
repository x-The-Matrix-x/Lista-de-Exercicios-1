//Questão 1: Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
//correspondente em minutos e segundos destas horas.

#include <stdio.h> //biblioteca para os comandos printf e scanf
int main(){ //inicio calculaHora - exercicio 1;

    int horas;
    printf("Digite a quantidade de horas: "); 
    scanf("%d", &horas);
    printf("Minutos: %d/n", horas * 60);
    printf("Segundos: %d", horas * 3600); 
    
} //fim

