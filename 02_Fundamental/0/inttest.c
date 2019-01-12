#include <stdio.h>

int main(void)
{
    int i, j;
    int sum_ij, sub_ij, mul_ij, div_ij;

    i = 100;
    j = 51;

    sum_ij = i + j;
    sub_ij = i - j;
    mul_ij = i * j;
    div_ij = i / j;

    printf("%d\t%d\n", i, j);
    printf("%d\t%d\t%d\t%d\n",
           sum_ij, sub_ij, mul_ij, div_ij);
}
