#include <stdio.h>

int main(void)
{
	char str[] = "This is Sparta!";
	char *p;
	p = str;

	while(*p != '\0')
	{
		printf("%c\n", *p);
		p++;
	}
}
