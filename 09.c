#include <conio.h>
#include <stdio.h>
#include <math.h>
main()

{
	float n1,n2,n3,media;
	
	printf("Digite suas tres notas: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	media = (n1+n2+n3)/3;
	
	
	printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3 :%.2f\nMedia: %.2f\n",n1,n2,n3,media);
	if (media >= 9.0) 
		printf("Conceito A, Media, APROVADO"); 
	if (media >= 7.5 && media < 9.0) 
		printf("Conceito B, Media, APROVADO"); 	
	if (media >=6.0 && media < 7.5) 
		printf("Conceito C, Media, APROVADO"); 
	if	(media >= 4.0 && media < 6.0) 
		printf("Conceito D, Media, REPROVADO"); 
	if (media < 4.0)
		printf("Conceito D, Media, REPROVADO"); 
	
	getch ();
}
