#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#define tam 10 //Altere o valor de tam para mudar a quantidade de alunos e testar com maior facilidade

typedef struct Aluno{
    int idade;
    float peso, altura;
    char genero;
    struct Aluno *proximo;
}Aluno;

void Pausar()
{
    printf("\n\n");
	system("pause");
}

void CadastraAluno(Aluno **turma)
{
	Aluno *A = (Aluno*) malloc(sizeof(Aluno));
	
	fflush(stdin);
    system("cls");

    do
    {
        puts("Digite seu gênero:");
        scanf("%c", &A->genero);
        fflush(stdin);

        if (A->genero != 'm' && A->genero != 'f')
            puts("[Atenção!] Digite 'm' para Masculino ou 'f' para Feminino (minúsculo)\n");
    } while (A->genero != 'm' && A->genero != 'f');

    puts("Digite sua idade");
    scanf("%i", &A->idade);
    puts("Sua altura:");
    scanf("%f", &A->altura);
    puts("Seu peso:");
    scanf("%f", &A->peso);
    A->proximo = NULL;
	
	
	if (*turma == NULL) 
	{
        *turma = A;
    } 
	else 
	{
        // Se a estrutura de nodos não estiver vazia, adicione o novo nodo no final
        Aluno *atual = *turma;
        while (atual->proximo != NULL) 
		{
            atual = atual->proximo;
        }
        atual->proximo = A;
    }

}


void MaiorIdade(Aluno **lista)
{
    system("cls");
	
	Aluno *turma = *lista;
	

    int maior = 0;
    while (turma != NULL)
    {
        if (turma->idade > maior)
            maior = turma->idade;
        turma = turma->proximo;
    }
    printf("A Maior Idade é: %i", maior);

    Pausar();
}

void Porcentagem(Aluno **lista)
{
    system("cls");
    
    Aluno *turma = *lista;

    int numm = 0, numf = 0;
    float porcm, porcf;
    while (turma != NULL)
    {
        if (turma->genero == 'm')
            numm++;
        if (turma->genero == 'f')
            numf++;
        turma = turma->proximo;
    }

    porcm = numm * 100 / (numm + numf);
    porcf = numf * 100 / (numm + numf);

    printf("Porcentagem de Homens: %.2f%%\n", porcm);
    printf("Porcentagem de mulheres: %.2f%%", porcf);

    Pausar();
}

void ContAltura(Aluno **lista)
{
    system("cls");
    Aluno *turma = *lista;

    int cont = 0;
    while (turma != NULL)
    {
        if (turma->altura < 170 && turma->genero == 'm')
            cont++;
        turma = turma->proximo;
    }
    printf("O Número de Homens com Menos de 1,70 é: %i", cont);

    Pausar();
}

void PesoMedio(Aluno **lista)
{
	system("cls");
	Aluno *turma = *lista;
	
	int cont=0, i;
	float media, soma;
	while (turma != NULL)
	{
		if (turma->genero == 'f')
		{
			cont++;
			soma+= turma->peso;
		}
		turma = turma->proximo;
	}
	media=soma/cont;
	printf("A Média de Peso das Mulheres é: %.2f", media);
	
	Pausar();
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *turma = NULL;
	int i, opcao;
	
	for(i=0;i<tam;i++)
	{
		CadastraAluno(&turma);
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
	            MaiorIdade(&turma);
	            break;
	        case 2:
	            Porcentagem(&turma);
	            break;
	        case 3:
	            ContAltura(&turma);
	            break;
	        case 4:
	            PesoMedio(&turma);
	            break;
	        case 5:
	            break;
	        default:
	            printf("Opção inválida.");
	            Pausar();
	    }
	}while(opcao != 5);
		
}
