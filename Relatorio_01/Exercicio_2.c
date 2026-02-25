#include <stdio.h>


int main(void)
{

    int qnt;
    int resto;
    int aux = 0;

    scanf("%d", &qnt);

    if (qnt > 0 && qnt < 50) {

        for (int i = qnt; i > 0; i = i - 1) {

            if (i < qnt) {
                resto = qnt % i;
                printf("O resto da divisao de %d por %d eh: %d\n", qnt, i, resto);
            }
        }
    }
    else {
        printf("Valor invalido");
    }


    return 0;
}