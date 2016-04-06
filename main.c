#include <stdio.h>

double raizq(double);

int main(void)
{

	double n;
	scanf("%lf", &n);	
	printf("%.2lf\n", raizq(n));
}
double raizq(double n)
{
	double x1 ,x2;
	x1 = (n + (n / n)) / 2; //utiliza formula de Heron
	while (x2 != x1){
		x2 = (x1 + (n / x1)) / 2; 
		x1 = (x2 + (n / x2)) / 2;
		/* Compara x1 com x2, utilizando o método da média,
		 caso os dois forem iguais eles serao o resultado 
		 da raiz quadrada. Quanto mais esse ciclo while se repetir
		 mais precisa vai ser a resposta. Sao utilizado dois valores
		 (x1 e x2) para que nao se torne uma funcao infinita. */
		}
	return x1;
}