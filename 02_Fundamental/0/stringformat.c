#include <stdio.h>

int main(void)
{
	int p = 1024;
	int n = -1024;
	int h = 0xff24;
	float pi = 3.141592;
	float d = 3.84e6;		// m, distance to the Moon
	char *str = "hello, world!";

	printf("Positive integer p = %d\n"
			"Negative integer n = %d\n"
			"Hex to Dec = %d\n"
			"Hex number h = %x\n"
			"Mathematical constant pi = %f\n"
			"In short, %.2f\n"
			"Distance to the Moon: %f\n"
			"Or in exponetial express, %e\n"
			"In general, %g\n"
			"Print string like, %s\n",
			p, n, h, h, pi, pi, d, d, d, str);
}
