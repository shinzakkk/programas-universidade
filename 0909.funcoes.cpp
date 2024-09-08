#include <stdio.h>
int meu_scan(int x, int y){
	int n;
	do{
		printf("insira um valor no intervalo [%d, %d]: ", x, y);
		scanf("%d", &n);
	}while(n < x || n > y);
	printf("%d", n);
}
void Q1(){
	int x, y;
	printf("insira, respectivamente, o valor minimo e maximo do intervalo: ");
	scanf("%d %d", &x, &y);
	meu_scan(x, y);
}

int inverte_num(int n){
	int a, b, c;
	a=n/100;
	b=(n%100)/10;
	c=(n%10);
	printf("o inverso de %d e %d", n, c*100+b*10+a);
}
void Q2(){
	int n;
	do{
		printf("insira um numero de tres algarismos: ");
		scanf("%d", &n);
	}while( n < 100 || n > 999);
	inverte_num(n);
}

int main(){
	Q2();
	
	return 0;
}
