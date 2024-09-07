#include <stdio.h>
int main(){
	int m, n, i, j, opcao;
	float escalar;
	do{
		printf("insira a quantidade de linhas na matriz: ");
		scanf("%d", &m);
		printf("insira a quantidade de colunas na matriz: ");
		scanf("%d", &n);
	}while(m < 2 || m > 300 || n < 2 || n > 300);
	float matriz[m][n];
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("insira o elemento %d,%d da matriz: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}	
	}

	do{
		printf("aperte 1 para imprimir a diagonal principal da sua matriz\n");
		printf("aperte 2 para imprimir a matriz transposta de sua matriz\n");
		printf("aperte 3 para imprimir a sua matriz com os elementos multiplicados por um escalar\n");
		printf("aperte 4 para imprimir a sua matriz com os elementos somados a um escalar\n");
		printf("aperte 5 para sair\n");
		scanf("%d", &opcao);
	switch(opcao){
		case 1:
			for(i=0; i<m; i++){
				for(j=0; j<n; j++){
					if(i==j){
						printf("%.2f ", matriz[i][j]);
					} else {
						printf("0 ");
					}
				}
				printf("\n");
			}
			break;
		case 2:
			for(j=0; j<n; j++){
				for(i=0; i<m; i++){
					printf("%.2f ", matriz[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			printf("digite o valor que voce deseja multplicar com os elementos de sua matriz: ");
			scanf("%f", &escalar);
			for(i=0; i<m; i++){
				for(j=0; j<n; j++){
					printf("%.2f ", escalar * matriz[i][j]);
				}
				printf("\n");
			}
			break;
		case 4:
			printf("digite o valor que voce deseja somar aos elementos de sua matriz: ");
			scanf("%f", &escalar);
			for(i=0; i<m; i++){
				for(j=0; j<n; j++){
					printf("%.2f ", escalar + matriz[i][j]);
				}
				printf("\n");
			}
			
		default:
			printf("saindo. . .\n");
			break;
	}
	}while(opcao > 6 );
	return 0;
}
