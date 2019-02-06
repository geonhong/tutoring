#include <stdio.h>

int main(void)
{
	float *v;
	float v1[3] = {3.1, 2.2, 1.8};

	v = v1;

	printf("%p\n", v);
	printf("%p\n", v+1);
	printf("%p\n", v+2);
	printf("%p\n", v+3);

	printf("%f\n", *v);
	printf("%f\n", *(v+1));
	printf("%f\n", *(v+2));
	printf("%f\n", *(v+3));
}
