#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Exercício 1 (XP 7): Faça um programa em C (F.U.P) que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

/*
int main(int argc, char *argv[]) {
	int metro = 0;
	printf("Insira um valor em metros para ver o ocorrespondente em decímetros, centímetros e milímetros: \n");
	scanf("%i", &metro);
	
	int decimetro = metro * 10;
	int centimetros = metro * 100;
	int milimetros = metro * 1000;
	
	printf("\nMetro: %i", metro);
	printf("\nDecímetro: %i", decimetro);
	printf("\nCentímetros: %i", centimetros);
	printf("\nMilímetros: %i", milimetros);
}
*/


// Exercício 2 (XP 10): F.U.P que imprime uma tabela com a tabuada de 1 a 9.

/*
int main(int argc, char *argv[]) {
	for (int i = 0; i < 11; i++)
	{
		printf("\n");
		for (int j = 0; j < 11; j++)
		{
			int tabuada = i * j;
			printf("%i X %i = %i\n", i, j, tabuada);
		}
	}
}
*/


// Exercício 3 (XP 15): F.U.P que leia 10 números decimais e armazene-os em um vetor, (i) calcule a média dos números lidos, (ii) mostre o maior e o (iii) menor número.

/*
void Exerc3(){	
	int vetor[10];
	int maior = 0;
	int menor = vetor[0];
	int media;
	
	for (int i = 0; i < 11; i++)
	{
		printf("Insira o %d º número: ", i);
		scanf("%d", &vetor[i]);
		if (maior < vetor[i])
		{
			maior = vetor[i];
		}
		if (vetor[i] < menor)
		{
			menor = vetor[i];
		}

		media = media + vetor[i];	
	}

media = media / 4;

	printf("\nMaior: %d", maior);
	printf("\nMenor: %d", menor);
	printf("\nMedia: %d", media);	
}

int main(){
	Exerc3();
	return 0;
}
*/

// Exercício 4 (XP 17): F.U.P que leia os lados de um triângulo que classifique o triângulo em: equilátero, isósceles e escaleno.

/*
int main(int argc, char *argv[]) {
	int lado[3];
		
	for (int i = 0; i < 3; i++)
	{
		printf("Coloque o primeiro lado de um triangulo: ");
		scanf("%i", &lado[i]);
	}
	
	if (lado[0] == lado[1] && lado[1] == lado[2])
	{
		printf("O triangulo e equilatero!");
	}
	
	else if (lado[0] == lado[1] && lado[1] != lado[2] || lado[0] != lado[1] && lado[1] == lado[2] || lado[0] == lado[2] && lado[2] != lado[1])
	{
		printf("O triangulo e isoceles!");
	}
	
	else
	{
		printf("O triangulo e escaleno!");
	}
}
*/

// Exercício 5 (XP 20): F.U.P que simule um jogo de adivinhação. O programa inicializa sorteando um número de 1 a 100. Depois, o usuário digita um palpite até acertar o número. Para cada palpite, o
// programa indica se o número digitado é maior ou menor que o número sorteado. No final, o programa mostra quantas tentativas o usuário precisou para acertar


void Exerc3(){	
	int tentativa;
	int randNumber = rand() % 100;
	int count = 0;
	
	printf("%i", randNumber);
		
	while (1)
	{
		count++;
		printf("\n-->");
		scanf("%i", &tentativa);
		
		if (tentativa == randNumber)
		{
			printf("Voce acertou");
			break;
		}
			
		else if (tentativa > randNumber)
		{
			printf("É menor");
		}
		
		else if (tentativa < randNumber)
		{
			printf("É maior ");
		}	
	}
	printf("Parabens, voce acertou com: %i tentativas", count);
}

int main(){
	Exerc3();
	return 0;
}























