//Questão 7:

#include <stdio.h> //biblioteca para os comandos printf e scanf
int main(){
char nome[10];
char sexo;
int matricula;
float horas, salarioHora, salarioMes, salario;


    printf("qual seu nome? ");
	scanf("%s", &nome);
		//printf("%s", nome);
     getchar();
     printf("Digite seu sexo ");
     scanf("%c", &sexo);
	      sexo = toupper(sexo);
	      getchar();

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

       printf("quantas horas vc trabalha por dia? ");
       scanf("%f", &horas);
       printf("quantas vc ganha por hora em R$? ");
       scanf("%f", &salarioHora);	
    salarioMes = salarioHora * horas * 30;


    printf("\n[NOME]-----> %s\n[SEXO]-----> %c\n[MATRICULA]-----> %i\n[HORAS-DIARIAS]----->%f\n[SALARIO-HORA]----->%f\n[SALARIO-MES]----->%f", nome, sexo, matricula, horas, salarioHora,salarioMes);
	
	
	return (0);
}
