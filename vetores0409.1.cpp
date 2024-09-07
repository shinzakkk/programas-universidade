#include <stdio.h>
int main(){
	int n, i, par, impar;
	float total, mediana;
	do{
		printf("insira a quantidade de posicoes que deseja no vetor: ");
		scanf("%d", &n);
	}while(n < 5 || n > 200);
	
	int vetor[n];
	total = 0;
	for(i=0; i < n; i++){
		printf("digite o valor numero %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		total += vetor[i];
	}
	
	printf("a media do vetor e %.2f\n", total/n);
	
	if(n%2==0){
		mediana = vetor[n/2] + vetor[(n/2) - 1];
		printf("a mediana do vetor e %.2f\n", mediana/2);
	} else {
		printf("a mediana do vetor e %d\n", vetor[n/2]);
	}
	par = 0;
	impar = 0;
	for(i=0; i < n; i++){
		if(vetor[i]%2==0){
			par++;
		} else {
			impar++;
		}
	}
	printf("o vator tem %d numeros pares e %d numeros impares", par, impar);
	return 0;
}
