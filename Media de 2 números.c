#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float num1, num2, resultado1, resultado2, media;
		
		puts("digite um valor aleatorio");
		scanf("%f",&num1);
		resultado1=(num1*4);
	
		puts("digite outro valor aleatorio");
		scanf("%f",&num2);
		resultado2=(num2*6);
		
		media = (resultado1+resultado2)/2;
		
		puts("==================");
		printf("Valores lidos %.2f e %.2f\n", num1,num2);
		printf("Valores calculados %.2f e %.2f\n", resultado1,resultado2);
		printf("a media eh: %.2f", media);
}
