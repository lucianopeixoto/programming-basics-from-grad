#include <stdio.h>

main(){
	
	int numero, x, y, completou;
	
	int solucao[9][9] ={	{9,4,7,1,6,2,3,5,8},
								{6,1,3,8,5,7,9,2,4},
								{8,5,2,4,9,3,1,7,6},
								{1,2,9,3,8,4,5,6,7},
								{5,7,8,9,2,6,4,3,1},
								{3,6,4,7,1,5,2,8,9},
								{2,9,1,6,3,8,7,4,5},
								{7,8,5,2,4,1,6,9,3},
								{4,3,6,5,7,9,8,1,2}};
								// Quando queremos iniciar uma matriz com
								// valores já definidos, é só fazer isso...
								// é bem mais fácil do que sair preenchendo
								// elemento por elemento
	int matriz[9][9] = {	{9,4,0,1,0,2,0,5,8},
								{6,0,0,0,5,0,0,0,4},
								{0,0,2,4,0,3,1,0,0},
								{0,2,0,0,0,0,0,6,0},
								{5,0,8,0,2,0,4,0,1},
								{0,6,0,0,0,0,0,8,0},
								{0,0,1,6,0,8,7,0,0},
								{7,0,0,0,4,0,0,0,3},
								{4,3,0,5,0,9,0,1,2}};
	
	completou = 0;
	
	// CICLO INFINITO PARA MOSTRAR A MATRIZ NA TELA E PERGUNTAR O NUMERO E AS
	// AS COORDENADAS AO USUARIO OU DIZER QUE ELE GANHOU:
	while (1){ 
		system ("cls");
		x = 0;
		printf ("-------------------\n");
		while (x<9){
			y = 0;
			printf("|");
			while (y<9){
				switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X|");
						break;
					case 0:
						printf (" |");
						break;
					default:
						printf("%d|", matriz[x][y]);
						break;
				}
				y = y+1;
			}
			x = x+1;
			printf ("\n|");
			y = 0;
			while (y<9){
				switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X|");
						break;
					case 0:
						printf (" |");
						break;
					default:
						printf("%d|", matriz[x][y]);
						break;
				}
				y = y+1;
			}
			x = x+1;
			printf ("\n|");
			y = 0;
			while (y<9){
			switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X ");
						break;
					case 0:
						printf ("  ");
						break;
					default:
						printf("%d ", matriz[x][y]);
						break;
				}
				y = y+1;
				switch (matriz[x][y]) {
					case -1:
						printf ("X|");
						break;
					case 0:
						printf (" |");
						break;
					default:
						printf("%d|", matriz[x][y]);
						break;
				}
				y = y+1;
			}
			x = x+1;
			printf ("\n-------------------\n");
		}

		if (completou == 1){ // SE TUDO JA TIVER COMPLETADO CERTO ELE MOSTRA ISSO:
			printf ("\nPARABENS! Voce completou o sudoku !!!\n");
			system("PAUSE");	
		}
		else { // SE NAO TIVER COMPLETADO ELE PERGUNTA A COORDENADA E O NUMERO:
			
			// Lê a coordenada que o usuário quer colocar um número
			printf ("Digite as coordenadas(x y): ");
			scanf ("%d %d", &x, &y);
			// esse while abaixo é pra caso o cara digite um valor inválido o jogo 
			// informar que ta errado e perguntar de novo...
			while (x<1 || y<1 || x>9 || y>9) {
				printf ("As coordenadas devem ser numeros entre 1 e 9\n");
				printf ("Digite as coordenadas(x y): ");
				scanf ("%d %d", &x, &y);
			}
			
			// Lê o número que o usuário quer colocar
			printf ("Digite o numero: ");
			scanf ("%d", &numero);
			// esse while abaixo é pra caso o cara digite um valor inválido o jogo 
			// informar que ta errado e perguntar de novo...
			while (numero<0 || numero>9) {
				printf ("O numero deve estar entre 0 e 9\n");
				printf ("Digite o numero: ");
				scanf ("%d", &numero);
			}
		}
		
		// Confere o número que o jogador informou com a matriz resultado, se
		// estiver correto ele preenche a matriz com esse numero, se não ele
		// preenche com -1 que será um código pra indicar que há um erro naquela
		// posição...
		if ((matriz[x-1][y-1] == 0 || matriz[x-1][y-1] == -1) && numero == solucao[x-1][y-1]) {
			matriz [x-1][y-1] = numero;
		}
		if ((matriz[x-1][y-1] == 0 || matriz[x-1][y-1] == -1) && numero != solucao[x-1][y-1]) {
			matriz [x-1][y-1] = -1;
		}
				
		// Confere se a matriz do jogador já está igual a matriz solução, o que
		// significa que o jogador já completou tudo corretamente...
		completou = 1;
		for (x=0; x<9; x++){
			for (y=0; y<9; y++){
				if (matriz[x][y] != solucao[x][y]){
					completou = 0;
				}
			}
		}	
	}
}
