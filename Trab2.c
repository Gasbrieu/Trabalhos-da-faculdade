#include <stdio.h>

void main(void)
{
    char Tip, Prod;
    int QuantV, ValFinal, ValUnitProd, ValProd, ValUnitProdTip, ValPorcent;
    printf("Digite a primeira letra do produto: ");
    scanf(" %c", &Prod);
    printf("Digite o tipo do produto, sendo F para fino, M para media e G para grossa: ");
    scanf(" %c", &Tip);
    printf("Digite a quantidade do produto: ");
    scanf("%i", &QuantV);


    if(Prod == 'A' || Prod == 'a')
        ValUnitProd = 34;
    if(Prod == 'P' || Prod == 'p')
        ValUnitProd = 42.5;
    if(Prod == 'B' || Prod == 'b')
        ValUnitProd = 28;
    if(Prod == 'S' || Prod == 's')
        ValUnitProd = 27;

    if(Tip == 'M' || Tip == 'm')
        ValPorcent = 0.15;
    if(Tip == 'G' || Tip == 'g')
        ValPorcent = 0.25;
    if(Tip == 'F' || Tip == 'f')
        ValPorcent = 0;

    ValUnitProdTip = ValUnitProd * ValPorcent + ValUnitProd;
    ValProd = (ValUnitProd * ValPorcent + ValUnitProd) * QuantV;


    if(ValProd < 750)
        ValFinal = ValProd + 45;
    if(ValProd >= 750)
        ValFinal = ValProd;

    ValUnitProd = ValProd / QuantV;

    printf("Valor da unidade do produto: %i\n", ValUnitProd);
    printf("valor total: %i\n", ValFinal);
system("pause");
}
