#include <stdio.h>

int pa(int val1, int val2, int val3, int val4, int val5) {
    int i = 0;
    if (val1 % 2 == 0) {
        i = i + 1;
    }

    if (val2 % 2 == 0) {
        i = i + 1;
    }

    if (val3 % 2 == 0) {
        i = i + 1;
    }

    if (val4 % 2 == 0) {
        i = i + 1;
    }

    if (val5 % 2 == 0) {
        i = i + 1;
    }
    return i;
}
int impar(int val1, int val2, int val3, int val4, int val5) {
    int i = 0;
    if (val1 % 2 != 0) {
        i = i + 1;
    }

    if (val2 % 2 != 0) {
        i = i + 1;
    }

    if (val3 % 2 != 0) {
        i = i + 1;
    }

    if (val4 % 2 != 0) {
        i = i + 1;
    }

    if (val5 % 2 != 0) {
        i = i + 1;
    }
    return i;
}
int posi(int val1, int val2, int val3, int val4, int val5) {
    int i = 0;
    if (val1 > 0) {
        i = i + 1;
    }

    if (val2 > 0) {
        i = i + 1;
    }

    if (val3 > 0) {
        i = i + 1;
    }

    if (val4 > 0) {
        i = i + 1;
    }

    if (val5 > 0) {
        i = i + 1;
    }

    return i;
}

int neg(int val1, int val2, int val3, int val4, int val5) {
    int i = 0;
    if (val1 < 0) {
        i = i + 1;
    }

    if (val2 < 0) {
        i = i + 1;
    }

    if (val3 < 0) {
        i = i + 1;
    }

    if (val4 < 0) {
        i = i + 1;
    }

    if (val5 < 0) {
        i = i + 1;
    }


    return i;
}

int main(void)
{

    int n;
    int a, b, c, d, e;
    int par, imp, positivo, negativo;

    scanf("%d", &n);

    for (int i = 0; i < n; i + 1) {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        scanf("%d", &e);

        par = pa(a, b, c, d, e);
        imp = impar(a, b, c, d, e);
        positivo = posi(a, b, c, d, e);
        negativo = neg(a, b, c, d, e);

        printf("Quantidade de numeros pares: %d \n", par);
        printf("Quantidade de numeros impares: %d \n", imp);
        printf("Quantidade de numeros positivos: %d \n", positivo);
        printf("Quantidade de numeros negativos: %d \n", negativo);
    }

    return 0;
}