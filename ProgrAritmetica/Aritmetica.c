#include <stdio.h>
#include <stdlib.h>

/* Denomina-se progressão aritmética (PA) a sequência 
em que cada termo, a partir do segundo, é obtido 
adicionando-se uma constante r ao termo anterior. 
Essa constante r chama-se razão da progressão 
aritmética.

O n-ésimo termo de uma progressão aritmética, denotado
por an,pode ser obtido por meio da formula: 

an = a1 +(n-1)*r

A sequência (6,10,14,18,22,...) se trabalharmos 
progressão finita,n-ésimo termo é 22 com uma razão 
de 5
a1 = 6
n  = 5
r  = 4
*/

// an = n-ésimo termo ou último termo da PA
// a1 = primeiro termo
// r  = razão
/* n  = quantidade de termos (posição que o número 
   final que você vai procurar está),
   ou seja, quantidade de termos a partir do primeiro 
   termo (a1)*/

/* importante observar que em uma progressão 
aritmética a razão*/ 
//é constante.
int main( ) 
{
	float a1,n,r,an, sn;
	// cabeçalho da interface de comunicacao com o usuário
	printf("Calculo da Progressao Aritmetica Simples");
	printf("\n_______________________________________\n\n");
	
	printf("A formula da PA: an = a1+(n-1)*r\n");
	printf("\nEntre com o valor de [a1] = primeiro termo: "); 
	scanf("%f", &a1);
	printf("\nEntre com o valor de [n]  = quantidade de termos: "); 
	scanf("%f", &n);
	printf("\nEntre com o valor de [r]  = razao: "); 
	scanf("%f", &r);
		// processamento
		an = (a1+(n-1)*r);
		//saída para a tela do computador
	printf("\n\nO valor final da progressao aritmetica: %.0f\n\n", an);
	system("pause");
	
	printf("\n\nCalculo da Soma dos Termos da PA\n");
	printf("________________________________\n\n");
	
	printf("Formula: sn = n*(a1+an)/2)\n\n");
	
		sn = n*(a1+an)/2;
	
	printf("O valor da soma dos termos da PA: %.0f\n\n", sn);
	
	
	
	
system("pause");
return 0;
}