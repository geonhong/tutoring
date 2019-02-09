#include "strmanip.h"

int main(void)
{
	char noIn[10];

	printf("Please input any number: ");
	scanf("%s", noIn);

	int size = getsize(noIn);

	printf("%s\n"
			"  Size: %d\n"
			"  String to integer: %d\n",
			noIn, size, str2int(noIn));
}
