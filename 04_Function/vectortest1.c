#include <stdio.h>

float sqr(float s)
{
	return s*s;
}

float sqrv(float v[2])
{
	return sqr(v[0]) + sqr(v[1]);
}

int main(void)
{
	float scalar = 3.2;
	float vector[2] = {1.7, 2.5};

	printf("Square of the scalar %f = %f\n"
			"Square of the vector (%f, %f) = %f\n",
			scalar, sqr(scalar), vector[0], vector[1], sqrv(vector));
}
