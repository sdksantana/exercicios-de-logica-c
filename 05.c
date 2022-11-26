#include <stdio.h>
#include <conio.h>
#include <math.h>

main()

{
	int a,b;
	
		printf("digite um numero ");
		scanf("%i",&a);
	
	if (a % 2 == 0)
		printf("%i eh multiplo de 2\n",a);
	
	else 
		printf("%i nao eh multiplo de 2\n",a);	
	
	
		printf("digite um numero ");
		scanf("%i",&b);
	
	if (b % 2 == 0)
		printf("%i eh multiplo de 2",b);
	
	else 
		printf("%i nao eh multiplo de 2",b);
		
		getch();
	
	
}
