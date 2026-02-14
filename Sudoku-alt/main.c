#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int matriz[9][9], numero, x, y;
	
	// Preenchendo os espaços com 0:
	for (x=0; x<9; x++){
		for (y=0; y<9; y++){
			matriz[x][y] = 0;
		}
	}
	// FIM
	
	// Preenchendo os lugares que devem começar ja preenchidos:
	matriz[0][0] = 9;
	matriz[1][0] = 4;
	matriz[3][0] = 1;
	matriz[5][0] = 2;
	matriz[7][0] = 5;
	matriz[8][0] = 8;
	matriz[0][1] = 6;
	matriz[4][1] = 5;
	matriz[8][1] = 4;
	matriz[2][2] = 2;
	matriz[3][2] = 4;
	matriz[5][2] = 3;
	matriz[6][2] = 1;
	matriz[1][3] = 2;
	matriz[7][3] = 6;
	matriz[0][4] = 5;
	matriz[2][4] = 8;
	matriz[4][4] = 2;
	matriz[6][4] = 4;
	matriz[8][4] = 1;
	matriz[1][5] = 6;
	matriz[7][5] = 8;
	matriz[2][6] = 1;
	matriz[3][6] = 6;
	matriz[5][6] = 8;
	matriz[6][6] = 7;
	matriz[0][7] = 7;
	matriz[4][7] = 4;
	matriz[8][7] = 3;
	matriz[0][8] = 4;
	matriz[1][8] = 3;
	matriz[3][8] = 5;
	matriz[5][8] = 9;
	matriz[7][8] = 1;
	matriz[8][8] = 2;
	// FIM
	
	while (1){
		system ("cls");
		y = 0;
		while (y<9){
			x = 0;
			while (x<9){
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("-  ");
				}
				else {
					printf("%d  ", matriz[x][y]);
				}
				x = x+1;
			}
			y = y+1;
			printf ("\n");
			x = 0;
			while (x<9){
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("-  ");
				}
				else {
					printf("%d  ", matriz[x][y]);
				}
				x = x+1;
			}
			y = y+1;
			printf ("\n");
			x = 0;
			while (x<9){
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("- ");
				}
				else {
					printf("%d ", matriz[x][y]);
				}
				x = x+1;
				if ( matriz[x][y] == 0) {
					printf ("-  ");
				}
				else {
					printf("%d  ", matriz[x][y]);
				}
				x = x+1;
			}
			y = y+1;
			printf ("\n\n");
		}

		printf ("Digite as coordenadas(x y): ");
		scanf ("%d %d", &x, &y);
		while (x<1 || y<1 || x>9 || y>9) {
			printf ("\nAs coordenadas devem ser numeros entre 1 e 9\n");
			printf ("Digite as coordenadas(x y): ");
			scanf ("%d %d", &x, &y);
		}
		
		printf ("Digite o numero: ");
		scanf ("%d", &numero);
		while (numero<0 || numero>9) {
			printf ("\nO numero deve estar entre 0 e 9\n");
			printf ("Digite o numero: ");
			scanf ("%d", &numero);
		}
		
		matriz [x-1][y-1] = numero;
	}
	
	system("PAUSE");	
	return 0;
}
