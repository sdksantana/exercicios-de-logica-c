#include <stdio.h>
#include <locale.h>
#include <string.h>
#define tam 10 //Altere o valor de tam para mudar a quantidade de alunos e testar com maior facilidade

typedef struct
{	int idade;
	float peso, altura;
	char genero;
}Aluno;

void Pausar()
{
	printf("\n\nDigite Algo Para Continuar...");
	getch();
}

Aluno CadastraAluno()
{
	Aluno A;
	fflush(stdin);
	system("cls");
	
	do
	{
	puts("Digite seu gênero:");
	scanf("%c", &A.genero);
	fflush(stdin);
	
	if(A.genero != 'm' && A.genero != 'f')
		puts("[Atenção!] Digite 'm' para Masculino ou 'f' para Feminino (minúsculo)\n");
	}while(A.genero != 'm' && A.genero != 'f');
	
	puts("Digite sua idade");
	scanf("%i", &A.idade);
	puts("Sua altura:");
	scanf("%f", &A.altura);
	puts("Seu peso:");
	scanf("%f", &A.peso);
	
	return(A);
}

void MaiorIdade(Aluno *turma)
{
	system("cls");
	
	int maior=0, i;
	for (i=0;i<tam;i++) 
	{
		if (turma[i].idade > maior)
			maior = turma[i].idade;
	}
	printf("A Maior Idade é: %i", maior);
	
	
	Pausar();
}

void Porcentagem(Aluno *turma)
{
	system("cls");
	
	int numm=0, numf=0, i;
	float porcm, porcf; 

	for (i=0;i<tam;i++) 
	{
		if (turma[i].genero == 'm')
		{
			numm++;
		}
		if (turma[i].genero == 'f')
		{ 
			numf++;
		} 
		
	}
	
	porcm = numm*100/(numm+numf);
	porcf = numf*100/(numm+numf);
	
	printf("Porcentagem de Homens: %.2f%%\n", porcm);
	printf("Porcentagem de mulheres: %.2f%%", porcf);
	
	Pausar();
}

void ContAltura(Aluno *turma)
{
	system("cls");
	
	int cont=0, i;
	for (i=0;i<tam;i++) 
	{
		if (turma[i].altura < 170 && turma[i].genero == 'm')
		cont++;
	}
	printf("O Número de Homens com Menos de 1,70 é: %i", cont);
	
	Pausar();
}

void PesoMedio(Aluno *turma)
{
	system("cls");
	
	int cont=0, i;
	float media, soma;
	for (i=0;i<tam;i++) 
	{
		if (turma[i].genero == 'f')
		{
			cont++;
			soma+= turma[i].peso;
		}
	}
	media=soma/cont;
	printf("A Média de Peso das Mulheres é: %.2f", media);
	
	Pausar();
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Aluno turma[tam];
	int i, opcao;
	
	for(i=0;i<tam;i++)
	{
		turma[i] = CadastraAluno();
		
	}
	
	
	do
	{
		system("cls");
		puts("Digite um Número entre 1 a 5: ");
		puts("Opção 1 - Maior Idade Entre Alunos.");
		puts("Opção 2 - Porcentagem Homens e Mulheres.");
		puts("Opção 3 - Contagem Homens com Menos de 170.");
		puts("Opção 4 - Peso Médio das Mulheres.");
		puts("Opção 5 - Sair");
		
	    scanf("%d", &opcao);
	    switch(opcao)
	    {
	        case 1:
	            MaiorIdade(turma);
	            break;
	        case 2:
	            Porcentagem(turma);
	            break;
	        case 3:
	            ContAltura(turma);
	            break;
	        case 4:
	            PesoMedio(turma);
	            break;
	        case 5:
	            break;
	        default:
	            printf("Opção inválida.");
	            Pausar();
	    }
	}while(opcao != 5);
		
}
