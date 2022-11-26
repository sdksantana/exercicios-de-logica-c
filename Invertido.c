#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int num = 0, aux1, aux2, aux3, auxreserva, invertido;
	
		
	while(num <100 || num >999)
	{
		puts("Digite um numero de tres digitos");
		scanf("%i",&num);
		
		if(num <100 || num >999)
			puts("Valor incoreto");
	}
	
	/*aux1 = num/100;
	aux2 = ((num-(aux1*100))/10);
	aux3 = (num-(aux1*100)-(aux2*10));*/
	
	aux1 = num/100;
	auxreserva = num%100;
	aux2 = auxreserva/10;
	aux3 = auxreserva%10;
		
	invertido = aux3*100 + aux2 * 10 + aux1;
	
	printf("%i", invertido);
		
}
