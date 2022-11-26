#include <conio.h>
#include <stdio.h>
#include <math.h>
 
main()

{
		int a, b, v;
		
			printf("digite um numero: ");
			scanf("%i",&a);
			
			//fflush(stdin);
			
			printf("digite um outro numero: ");
			scanf("%i",&b);
		
		if (a > b) {
			v= a-b;	
			printf("A diferenca de %i e %i eh: %i ",a,b,v);
		}
		else {
			v= b-a;	
			printf("A diferenca de %i e %i eh: %i ",a,b,v);
				
			}
	
	getch();
	
	
	
	
}
