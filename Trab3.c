#include <stdio.h>

void main(void)

{

    int ValSaq, Nota1, Nota2, Nota3, Nota4, Aux;
    printf("Digite o valor a ser sacado: ");
    scanf("%i", &ValSaq);

    if( ValSaq % 10 != 0 || ValSaq < 20 || ValSaq == 30)
      printf("Valor nao permitido para saques em notas de 50 e 20");
  else(
    {
    if(ValSaq > 1000)
        printf("Valor acima do máximo permitido");
      else(
        {
       Nota1 = ValSaq / 50;
       Nota2 = (ValSaq % 50)/ 20;
       Aux = (ValSaq % 50)% 20;
            if(Aux == 0)
            {
        printf("nota(s) de 50: %i\n", Nota1);
        printf("nota(s) de 20: %i\n", Nota2);
            }
            else(
            {
            Nota3 = (ValSaq / 50)- 1;
            Nota4 = (ValSaq - 50 * Nota3) / 20;
        printf("nota(s) de 50: %i\n", Nota3);
        printf("nota(s) de 20: %i\n", Nota4);
           });

       });
    });

           system("pause");
}
