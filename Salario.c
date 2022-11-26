#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{ 
		int funcionario;
		float horas, valorhora, salario;
		
		puts("digite o numero do funcionario");
		scanf("%i",&funcionario);
	
		puts("digite o valor por hora");
		scanf("%f",&horas);
		
		puts("digite o numero de horas trabalhadas");
		scanf("%f",&valorhora);
		salario = horas*valorhora;
		printf("salario do funcionario %i eh R$: %.2f por dia",funcionario,salario);

		getch();
}
