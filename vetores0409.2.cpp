#include <stdio.h>
int main(){
	int m, n, i, j, a;
	do{
		printf("insira os valores de linhas e de colunas da matriz: ");
		scanf("%d %d", &m, &n);
	}while(m < 2 || m > 300 || n < 2 || n > 300);
	int matriz[m][n];
	
	for(i=1; i <= m; i++){
		for(j=1; j <= n; j++){
			printf("digite o valor do elemento na posicao %d, %d na matriz: ", i, j);
			scanf("%d", matriz[m][n]);
		}
	}
	
	do{
		printf("aperte 1 para imprimir a diagonal principal\naperte 2 para imprimir a matriz transposta\naperte 3 para imprimir a multiplicacao dos elemntos da matriz por uma escalar\naperte 4 para imprimir a soma dos elementos de uma matriz com um escalar\n");
		scanf("%d", &a);
	}while(a > 4);
	if(a = 1){
		i = 0;
		j = 0;
		while (m > i && n > j){
			printf("%d ", matriz[m][n]);
			i++;
			j++;
		}
	}
	return 0;
}

