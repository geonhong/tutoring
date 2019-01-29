#include <stdio.h>

float lineq1(float x)
{
    return 2*x+1;
}

int main(void)
{
    float res = lineq1(2.1);
    printf("%f\n", res);
}
