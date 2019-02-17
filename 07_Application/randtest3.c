#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Random function initialization test

	int i;
	printf("Without srand:\n");
	for(i=0; i<10; i++)
	{
		printf("%d\t%d\n", i, rand()%10);
	}

	printf("with srand:\n");
	srand(time(NULL));
	for(i=0; i<10; i++)
	{
		printf("%d\t%d\n", i, rand()%10);
	}

}
