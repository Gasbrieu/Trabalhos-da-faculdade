#include <stdio.h>


void main(void)
{
    int Resp, HrEnt, HrSai, IntTempHr, IntTempMin;
    float  ValHr, ValMin, ValPagHr, ValPagMin, ValTotal;


    ValHr =  6;
    ValMin = 1.5;
    ValTotal = 0;

    do
    {
    printf("Digite a hora de entrada: ");
    scanf("%i", &HrEnt);
    printf("Digite a hora de saida: ");
    scanf("%i", &HrSai);
     if(HrEnt < HrSai)
      {
        if(HrEnt >= 700 && HrSai <= 1800)
        {
        IntTempHr = (HrSai / 100) - (HrEnt / 100);
        IntTempMin = (HrSai % 100) - (HrEnt % 100);

         if(IntTempMin < 0)
          {
           IntTempMin = 60 + IntTempMin;
           IntTempHr = IntTempHr - 1;
          };

         ValPagMin = (IntTempMin / 15) * ValMin;
         ValPagHr = IntTempHr * ValHr;
         ValTotal = ValTotal +  ValPagHr + ValPagMin;

        printf("O faturamento do estacionamento foi de %f\n", ValTotal);
    printf("Digite 1 para continuar ou 2 para sair: ");
    scanf("%i", &Resp);

        }
     else(
       printf("Estacionamento fechado"));
      }
  else
   printf("Erro, valor hora entrada maior que hora de saida");

 }while(Resp==1);

    system("pause");
};
