#include <stdio.h>
#include <stdlib.h>

/* Meu primeiro programa codificadona disciplina Algoritmos
   Data: 21/02/2024 - Prof. Rosica
*/

main( )
{
      float tempo, velocidade, distancia, litros_usados;
      printf("\nPrograma para c�lculo do tempo gasta em uma viagem");
      printf("\nDigite o tempo gasto: ");
      scanf("%f",&tempo);
      printf("\nDigite a velocidade: ");
      scanf("%f",&velocidade);
          distancia=tempo*velocidade;
          litros_usados = distancia/12;
      printf("\nO valor da velocidade m�dia �: %f",velocidade);
      printf("\nO valor do tempo �: %f",tempo);
      printf("\nO valor da dist�ncia �: %f",distancia);
      printf("\nA quantidade de litros usados �: %f",litros_usados);
      system("pause");
      return 0;
}
