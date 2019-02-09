#include <stdio.h>

int ipow(int n, int p)
{
	if (p <= 0)
	{
		return 1;
	}

	int i = 0;
	for(; i<p-1; i++)
	{
		n *= n;
	}

	return n;
}

int str2int(char *str, int size)
{
	int n = 0;
	int i = 0;
	for(; i<size; i++)
	{
		n += (*(str+i)-48)*ipow(10, size-i-1);
		printf("%d = %c x %d\n", n, *(str+1), ipow(10, size-i-1));
	}

	return n;
}

int main(void)
{
	char val[] = "45";
	printf("%d\n", str2int(val, 2));
}
