#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char palavra[20], resultado[20], letra;
  int n, chances;
  int acerto;
  
  printf ("Jogo da Forca\n\n");
  printf ("Digite uma palavra para iniciar:\n");
  gets (palavra); // Recebe a palavra para uma string
  printf ("Quantas chances de errar?\n");
  scanf ("%d", &chances);
  
  n = 0; // Inicia N em 0
  
  // Enquanto palavra[n] não for o fim da string...
  while (palavra[n] != '\0'){
		resultado[n] = '_'; // preenche a string RESULTADO com "_" até o fim do número de letras
		n++;
	}
	resultado [n] = '\0'; // Finaliza a string RESULTADO (Sem isso a string não teria um final)

	printf ("Chame um amigo para adivinhar a palavra!\n");
  	system("PAUSE");
	
	// Inicia a parte de adivinhação:
	
	while (chances > 0 && strcmp(palavra, resultado)) {
		system ("cls");
		n=0;
		printf("Digite uma letra!\n\n");
		while (resultado[n] != '\0') {
			printf ("%c ", resultado[n]);
			n++;
		}
		printf("\nChances de errar: %d\n", chances);
		letra = getch();
		n=0;
		acerto = 0;
		while (palavra[n] != '\0'){
			if (palavra [n] == letra){
				resultado [n] = letra;
				acerto = 1;
			}
			n++;
		}
		if (!acerto) chances--;
	}
	
	system ("cls");
	printf("FIM DE JOGO!\n\n");
	if (strcmp(palavra, resultado)) printf ("VOCE ERROU MUITAS VEZES!\n\n");
	else printf ("PARABENS!!! VOCE ACERTOU!\n\n");
	printf ("A PALAVRA ERA: %s\n\n", palavra);
	system ("PAUSE");
	
	
  return 0;
}
