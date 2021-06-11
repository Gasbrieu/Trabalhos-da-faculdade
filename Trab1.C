#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    char SexFem, SomentCid, UniMot;
    int Idade;
    float DescIdade, DescSexF, DescSomentCid,DescUniMot, PrecCar, BaseSeg, ValTotal;

    printf("Digite o preco do carro: ");
    scanf("%f", &PrecCar);
    printf("Digite a idade do motorista: ");
    scanf("%i", &Idade);
    printf("O motorista pertence ao sexo feminino(V ou F): ");
    scanf(" %c", &SexFem);
    printf("O carro seria usado somente na cidade(V ou F): ");
    scanf(" %c", &SomentCid);
    printf("O carro seria para uso de apenas um motorista(V ou F): ");
    scanf(" %c", &UniMot);

    BaseSeg = PrecCar * 0.1;
        if(Idade >= 25 && Idade < 40)
          DescIdade = BaseSeg * 0.025;
            if(Idade > 40)
               DescIdade = BaseSeg * 0.037;
                if(Idade < 25)
                    DescIdade = 0;

       if(SexFem == 'V' || SexFem == 'v' )
         DescSexF = BaseSeg * 0.075;
        if(SexFem == 'F' || SexFem == 'f')
           DescSexF == 0;
       if(SomentCid == 'V' || SomentCid == 'v')
         DescSomentCid = BaseSeg * 0.018;
        if(SomentCid == 'F' || SomentCid == 'f')
           DescSomentCid = 0;
        if(UniMot = 'V' || UniMot == 'v')
        DescUniMot = BaseSeg * 0.015;
            if(UniMot = 'F' || UniMot == 'f')
               DescUniMot = 0;
  ValTotal = BaseSeg - (DescIdade + DescSexF + DescSomentCid + DescUniMot);
 printf("O valor total a ser pago ao seguro:  %.2f\n", ValTotal);
system("pause");
}


