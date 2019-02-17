#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Random function initialization test

	srand(time(NULL));

	int i;
	for (i=0; i<6; i++)
	{
		printf("%d\t", (rand() % 45) + 1);
	}

	printf("\n");
}
