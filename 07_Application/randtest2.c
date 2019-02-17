#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));

	int i;

	for(i=0; i<100; i++)
	{
		int r = rand();

		printf("%d\n", r);
	}
}
