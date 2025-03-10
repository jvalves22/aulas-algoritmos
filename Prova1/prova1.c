#include <stdio.h>
#include <stdlib.h>

int main(){
    float SM, PR, NS;
    printf("Calculo do novo salario\n");
    printf("Digite o salario mensal: ");
    scanf("%f", &SM);
    printf("Digite o percentual de reajuste: "); 
    scanf("%f", &PR);

    NS = SM + (SM * PR / 100);
    printf("O novo salario e: %.2f\n", NS);
    system("pause");
    return 0;
}