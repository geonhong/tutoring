#include <stdio.h>
#include <math.h>

void cross(float *v1, float *v2, float *vout);
void printv(float v[3]);
float sqr(float s);
float magSqr(float v[3]);
float mag(float v[3]);

int main(void)
{
	float v1[3] = {1.1, 3.2, 2.7};
	float v2[3] = {2.8, 4.4, 8.2};

	float v1xv2[3];

	cross(v1, v2, v1xv2);

	printv(v1);
	printv(v2);
	printv(v1xv2);
}

void cross(float *v1, float *v2, float *vout)
{
	vout[0] = v1[1]*v2[2] - v1[2]*v2[1];
	vout[1] = v1[2]*v2[0] - v1[0]*v2[2];
	vout[2] = v1[0]*v2[1] - v1[1]*v2[0];
}

void printv(float v[3])
{
	printf("v = (%f, %f, %f), |v| = %f\n", 
			v[0], v[1], v[2], mag(v));
}

float sqr(float s)
{
	return s*s;
}

float magSqr(float v[3])
{
	return sqr(v[0]) + sqr(v[1]) + sqr(v[2]);
}

float mag(float v[3])
{
	return sqrt(magSqr(v));
}
