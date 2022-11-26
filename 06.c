#include <stdio.h>
#include <conio.h>
#include <math.h>

main()

{
	
	int a,b,c;
			
		puts("digite tres valores");
			scanf("%i",&a);
			scanf("%i",&b);	
			scanf("%i",&c);
	
		if (a > b && a > c)		
			printf("o maior numero eh %i",a);
		 	else
		
		if (b > a && b > c)
			printf("o maior numero eh %i",b);
		else 
		
		if (c >= a && c >= b)
			printf("o maior numero eh %i",c);
		else
			printf("o maior numero eh %i",a);
			
			
		getch();
}
