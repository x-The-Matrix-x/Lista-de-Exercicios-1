//Questão 2: Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
//usuário (use área= 3.14 x raio2)

#include <stdio.h>
#include<math.h> //BIBLIOTECA MATEMATICA

int main(){ 
//inicio exercicio 2 calcular a area do circulo -> area = pi * raio2 

    float area, raio, PI;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area == PI * pow(raio,2);
    printf("Area: %f", area);

} //fim
