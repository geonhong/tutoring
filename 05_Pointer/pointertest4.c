#include <stdio.h>

float *return_vector(float vin[3])
{
	static float vout[3];
	vout[0] = vin[2];
	vout[1] = vin[1];
	vout[2] = vin[0];

	return vout;
}

void printv(float v[3])
{
	printf("(%f, %f, %f)\n", v[0], v[1], v[2]);
}

int main(void)
{
	float v1[3] = {1.0, 1.3, 2.7};

	float *v2;
	v2 = return_vector(v1);

	printv(v1);
	printv(v2);
}
