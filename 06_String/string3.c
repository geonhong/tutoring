#include "strmanip.h"

int main(void)
{
	char strIn[] = "Size of this string?";

	printf("%s %d\n", strIn, getsize(strIn));
}
