#include <stdio.h>

int main(void)
{
	long int n = 1e6;

	int i=0;

	double sum = 1.0 + 1.0/n;

	for (i=1; i<n; i++)
	{
		sum = sum * (1.0 + 1.0/n);
	}

	printf("e = %f\n", sum);
}
