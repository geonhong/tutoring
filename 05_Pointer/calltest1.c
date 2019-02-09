#include <stdio.h>

void cbv(int v)
{
	printf("Call by value,\n");
	printf("  - Address: %p\n", &v);
	printf("  - Value  : %d\n", v);
}

void cbr(int *v)
{
	printf("Call by reference,\n");
	printf("  - Address of v : %p\n", &v);
	printf("  - Address of *v: %p\n", v);
	printf("  - Value of v   : %d\n", v);
	printf("  - Value of *v  : %d\n", *v);
}

int main(void)
{
	int v = 10;
	printf("In main function,\n");
	printf("  - Address: %p\n", &v);
	printf("  - Value  : %d\n", v);

	cbv(v);
	cbr(&v);
}
