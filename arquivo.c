#include <stdio.h>

int main  () {
printf ("Carta1:\n");

char estado = "B" ;
char codigo [50]= "AO1";
char nome_da_cidade [50] = "Salvador"; 
int populacao = 1232500 ;
float area = 1521.11;
float pib = 699.28;
int numero_pontos_turisticos = 50;

printf("Digite o estado:\n") ;
scanf ("%c" , &estado) ;
printf("Digite o codigo:\n") ;
scanf ("%s" , codigo) ;
printf("Digite o nome_da_cidade:\n") ;
scanf ("%s" , nome_da_cidade);
printf("Digite populacao:\n") ;
scanf ("%d" , &populacao) ;
printf("Digite a area:\n") ;
scanf ("%f" , &area);
printf("Digite o pib:\n") ;
scanf ("%f", &pib);
printf("Digite o numero_pontos_turisticos : \n") ;
scanf("%d", &numero_pontos_turisticos);


printf("O estado é : %c\n" , estado) ;
printf("O codigo é : %s\n" , codigo);
printf("O nome_da_cidade é :%s\n" , nome_da_cidade);
printf("Populacao é : %d\n" , populacao);
printf(" A area é : %f\n" , area);
printf("O pib : é %f\n" , pib);
printf("O numero_pontos_turisticos é : %d\n" , numero_pontos_turisticos);


printf ("Carta2:\n") ;

char estad0 = "S";
char codig0 [50] = "A02";
char nomedacidade [50] = "Campinas";
int populaca0 = 142900;
float areA = 1342.11;
float pyb = 500.28;
int pontos_turisticos = 30;

printf("Digite o estad0:\n");
scanf(" %c",&estad0);
printf("Digite o codig0:\n");
scanf("%s", codig0);
printf("Digite o nomedacidade:\n") ;
scanf("%s", nomedacidade);
printf("Digite a populaca0:\n") ;
scanf ("%d", &populaca0);
printf("Digite a areA :\n") ;
scanf ("%f" , &areA) ;
printf("Digite o pyb :\n") ;
scanf("%f", &pyb);
printf("Digite pontos_turisticos :\n") ;
scanf ("%d" , &pontos_turisticos);

printf("O estad0 é :%c\n" , estad0);
printf("O codig0 :%s\n" , codig0);
printf("O nomedacidade é :%s\n" , nomedacidade);
printf("A populaca0 é :%d\n" , populaca0);
printf("A areA é :%f\n" , areA);
printf("O pyb é :%f\n" , pyb);
printf("pontos_turisticos é :%d\n" , pontos_turisticos);

return 0 ;


}