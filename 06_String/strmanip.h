#include <stdio.h>

int ipow(int n, int p)
{
	if (p <= 0)
	{
		return 1;
	}

	int nout = n;
	int i = 1;
	for(; i<p; i++)
	{
		nout *= n;
	}

	return nout;
}

int getsize(char *str)
{
	int size = 1;

	while(*(str+size) != '\0')
	{
		size++;
	}

	return size;
}

int isNum(char c)
{
	if (c>='0' && c<='9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// int str2int(char *str, int size)
int str2int(char *str)
{
	int n = 0;
	int i = 0;
	int size = getsize(str);

	for(; i<size; i++)
	{
		if (isNum(*(str+i)))
		{
			n += (*(str+i)-48)*ipow(10, size-i-1);
			// printf("%d = %c x %d\n", n, *(str+i), ipow(10, size-i-1));
		}
		else
		{
			printf("Wrong number input!\n");
			return -1;
		}
	}

	return n;
}
