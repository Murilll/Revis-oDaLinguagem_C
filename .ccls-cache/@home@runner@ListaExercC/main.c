#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ExercÃ­cio 1 (XP 7): FaÃ§a um programa em C (F.U.P) que pergunta um valor em metros e imprime o correspondente em decÃ­metros, centÃ­metros e milÃ­metros.

/*
int main(int argc, char *argv[]) {
	int metro = 0;
	printf("Insira um valor em metros para ver o ocorrespondente em decÃ­metros, centÃ­metros e milÃ­metros: \n");
	scanf("%i", &metro);
	
	int decimetro = metro * 10;
	int centimetros = metro * 100;
	int milimetros = metro * 1000;
	
	printf("\nMetro: %i", metro);
	printf("\nDecÃ­metro: %i", decimetro);
	printf("\nCentÃ­metros: %i", centimetros);
	printf("\nMilÃ­metros: %i", milimetros);
}
*/


// ExercÃ­cio 2 (XP 10): F.U.P que imprime uma tabela com a tabuada de 1 a 9.

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


// ExercÃ­cio 3 (XP 15): F.U.P que leia 10 nÃºmeros decimais e armazene-os em um vetor, (i) calcule a mÃ©dia dos nÃºmeros lidos, (ii) mostre o maior e o (iii) menor nÃºmero.

/*
void Exerc3(){	
	int vetor[10];
	int maior = 0;
	int menor = vetor[0];
	int media;
	
	for (int i = 0; i < 11; i++)
	{
		printf("Insira o %d Âº nÃºmero: ", i);
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

// ExercÃ­cio 4 (XP 17): F.U.P que leia os lados de um triÃ¢ngulo que classifique o triÃ¢ngulo em: equilÃ¡tero, isÃ³sceles e escaleno.

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

// ExercÃ­cio 5 (XP 20): F.U.P que simule um jogo de adivinhaÃ§Ã£o. O programa inicializa sorteando um nÃºmero de 1 a 100. Depois, o usuÃ¡rio digita um palpite atÃ© acertar o nÃºmero. Para cada palpite, o
// programa indica se o nÃºmero digitado Ã© maior ou menor que o nÃºmero sorteado. No final, o programa mostra quantas tentativas o usuÃ¡rio precisou para acertar

/*
void Exerc3(){	
	int tentativa;
	int randNumber = rand() % 100;
	int count = 0;
		
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
			printf("Ã‰ menor");
		}
		
		else if (tentativa < randNumber)
		{
			printf("Ã‰ maior ");
		}	
	}
	printf("Parabens, voce acertou com: %i tentativas", count);
}

int main(){
	Exerc3();
	return 0;
}
*/


// ExercÃ­cio 6 (XP 17): F.U.P que (i) implemente uma funÃ§Ã£o recursiva para calcular o fatorial de um nÃºmero; (ii) Leia o nÃºmero â€œnâ€ e retorne o fatorial correspondente.

/*
int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main() {
    int num;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);
    int resultado = fatorial(num);
    printf("%d! = %d\n", num, resultado);
    return 0;
}
*/

// ExercÃ­cio 12 (XP 150): F.U.P que implemente um jogo da velha para dois jogadores humanos no prompt de comando.

void mostrarTabuleiro(int matriz[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
       printf("%i", matriz[i][j]); 
    }
    printf("\n");
  }
}

void Jogar(int jogador, int matriz[3][3])
{
  int X, Y;
  printf("Escolha o y: ");
  scanf("%d", &X);
  printf("\nEscolha o x: ");
  scanf("%d", &Y);
  matriz[X][Y] = jogador;
}


void VerificarNaDiagonal(int matriz[3][3])
{
  int x = 0;
  for (int i = 0; i < 3; i++)
  {
    if (matriz[x][i] == 1 && matriz[x+1][i] == 1 && matriz[x+2][i] == 1)
      prinf("Ganhou!");
  }
}

void VerificarNaColuna(int matriz[3][3])
{
  int x = 0;
  for (int i = 0; i < 3; i++)
  {
    if (matriz[x][i] == 1 && matriz[x][i+1] == 1 && matriz[x][i+2] == 1)
      prinf("Ganhou!");
  }
}

void VerificarNaLinha(int matriz[3][3])
{
  int y = 0;
  for (int j = 0; j < 3; j++)
  {
    if (matriz[j][y] == 1 && matriz[j+1][y] == 1 && matriz[j+2][y] == 1)
      prinf("Ganhou!");
  }
}

int main() {
  int X, Y, jogada;
  int matriz[3][3];

  matriz[0][0] = 0;
  matriz[0][1] = 0;
  matriz[0][2] = 0;
  matriz[1][0] = 0;
  matriz[1][1] = 0;
  matriz[1][2] = 0;
  matriz[2][0] = 0;
  matriz[2][1] = 0;
  matriz[2][2] = 0;

  while(1)
  {
    mostrarTabuleiro(matriz);
    Jogar(1, matriz);
    mostrarTabuleiro(matriz);
    Jogar(7, matriz);
    VerificarNaLinha(matriz);
    VerificarNaDiagonal(matriz);
    VerificarNaColuna(matriz);
  }
  

  return 0;
  

  
}



