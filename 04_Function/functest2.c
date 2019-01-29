#include <stdio.h>

float sqr(float x)
{
    return x*x;
}

float polyeq1(float x)
{
    return 2.1*sqr(x) - 3.4*x + 1.0;
}

int main(void)
{
    float x = -1.0;
    float dx = 0.1;

    do
    {
//        printf("f(%f) = %f\n", x, polyeq1(x));
		printf("%f\t%f\n", x, polyeq1(x));
        x += dx;
    } while (x <= 1.0);
}
