#include <stdio.h>
#include <conio.h>
#include <math.h>

main()

{
	
	int i;
	float a,b,c,maior,menor;
	
	puts("Digite um numero (1 ordem crescente, 2 ordem descrecente, 3 maior no meio) ");
	scanf("%i",&i);				
	puts("Digite tres valores");
	scanf("%f %f %f",&a, &b, &c);
	
	maior=a;
	menor=a;
	
	if (i == 1) //cresc
	{
		if (b > a)
			maior = b;
		if (b < a)
			menor = b;
		if (c > maior)
			printf("%f %f %f",menor,maior,c);
		else 
		if (c < menor)
			printf("%f %f %f",c,menor,maior);
		else
			printf("%f %f %f",menor,c,maior); 
			}	

	if (i == 2) //decresc
	{
		if (b > a)
			maior = b;
		if (b < a)
			menor = b;
		if (c > maior)
			printf("%f %f %f",c,maior,menor);
		else 
		if (c < menor)
			printf("%f %f %f",maior,menor,c);
		else
			printf("%f %f %f",maior,c,menor);
	}

	if (i == 3) //maior no meio
	{
		if (b > a)
			maior = b;
		if (b < a)
			menor = b;
		if (c > maior)
			printf("%f %f %f",maior,c,menor);
		else 
		if (c < menor)
			printf("%f %f %f",c,maior,menor);
		else
			printf("%f %f %f",menor,maior,c); 
	}	
	
				
		getch();
}
