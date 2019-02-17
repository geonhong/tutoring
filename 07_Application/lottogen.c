#include <stdio.h>
#include <stdlib.h>

void lotto();
int isOverlap(int n, int *nlist, int size);

int main(void)
{
	// Random function initialization test
	srand(time(NULL));

	int i;
	for (i=0; i<5; i++)
	{
		lotto();
	}
}

void lotto()
{
	int i;
	int numbers[6] = {};

	for (i=0; i<6; i++)
	{
		int n = (rand() % 45) + 1;

		if (i>0)
		{
			while (isOverlap(n, numbers, i))
			{
				n = (rand() % 45) + 1;
			}
		}

		numbers[i] = n;
	}

	for (i=0; i<6; i++)
	{
		printf("%d\t", numbers[i]);
	}
	printf("\n");
}

int isOverlap(int n, int *nlist, int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		if (n == nlist[i])
		{
			return 1;
		}
	}

	return 0;
}
