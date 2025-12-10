#include "power.h"

int power(int base, int exp)
{
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

