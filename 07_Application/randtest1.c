#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int r = rand();

	printf("%d\n", r);
}
