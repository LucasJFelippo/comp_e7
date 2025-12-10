#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "multi.h"
#include "div.h"
#include "mod.h"
#include "power.h"

int main(void)
{
    int s;
    printf("Operação: 4 + 6\n");
    s = soma(4, 6);
    printf("Resultado: %d\n", s);
    printf("---------------\n");

    printf("Operação: %d - 7\n", s);
    s = subtrai(s, 7);
    printf("Resultado: %d\n", s);
    printf("---------------\n");

    printf("Operação: %d * 5\n", s);
    s = multi(s, 5);
    printf("Resultado: %d\n", s);
    printf("---------------\n");

    printf("Operação: %d / 3\n", s);
    s = div(s, 3);
    printf("Resultado: %d\n", s);
    printf("---------------\n");

    printf("Operação: %d %% 3\n", s);
    s = mod(s, 3);
    printf("Resultado: %d\n", s);
    printf("---------------\n");

    printf("Operação: %d**5\n", s);
    s = power(s, 5);
    printf("Resultado: %d\n", s);

    return 0;
}
