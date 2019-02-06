#include <stdio.h>

void swap_vector(float *vin, float *vout)
{
//	vout[0] = *(vin+2);
//	vout[1] = *(vin+1);
//	vout[2] = *vin;
	*vout = *(vin+2);
	*(vout+1) = *(vin+1);
	*(vout+2) = *vin;
}

void printv(float v[3])
{
	printf("(%f, %f, %f)\n", v[0], v[1], v[2]);
}

int main(void)
{
	float v1[3] = {1.7, 3.4, 0.8};
	float v2[3];

	swap_vector(v1, v2);

	printv(v1);
	printv(v2);
}
