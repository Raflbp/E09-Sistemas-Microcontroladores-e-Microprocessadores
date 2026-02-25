#include <stdio.h>


int main(void)
{
    double preco;
    int qnt;


    printf("Quantas frutas irá comprar?");
    scanf("%d", &qnt);

    if (qnt < 12) {
        preco = qnt * 0.8;
        printf("Preco da unidade: R$0.80\n");
        printf("Preco total:%.2f", preco);
    }
    else {
        preco = qnt * 0.65;
        printf("Preco da unidade: R$0.65\n");
        printf("Preco total:%.2f", preco);
    }
    return 0;
}