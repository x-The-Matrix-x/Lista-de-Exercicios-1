//Questão 6: 

#include <stdio.h> //biblioteca para os comandos printf e scanf

    float main()
{
float nota1, nota2, media;

    printf("Digite suas notas para saber a media: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
     
    media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;
    printf("sua media e %f", media);
    
return 0;

} //fim
