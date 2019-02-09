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

	printf(	"\n======================\n"
			"pv: pointer to v\n");

	int *pv;
	pv = &v;

	cbv(*pv);
	cbr(pv);

	printf(	"\n======================\n"
			"What if pv+1?\n");
	pv += sizeof(int);
	cbv(*pv);
	cbr(pv);

	printf(	"\n======================\n"
			"Let's modify *pv!\n");
	*pv = 9;
	cbv(*pv);
	cbr(pv);
}
