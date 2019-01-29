#include <stdio.h>
#include <math.h>

float sqr(float s)
{
	return s*s;
}

float magSqr(float v[2])
{
	return v[0]*v[0] + v[1]*v[1];
}

float mag(float v[2])
{
	return sqrt(magSqr(v));
}

float innerprod(float v1[2], float v2[2])
{
	return v1[0]*v2[0] + v1[1]*v2[1];
}

void printInnerProd(float v1[2], float v2[2])
{
	printf("(%.4f, %.4f) dot (%.4f, %.4f) = %f\n",
			v1[0], v1[1],
			v2[0], v2[1],
			innerprod(v1, v2)
		  );
}

void getAngle(float v1[2], float v2[2])
{
	float cosval = innerprod(v1, v2)/(mag(v1)*mag(v2));
	float tht = acos(cosval)*180.0/3.14159265359;

	printf("Angle between the vectors: %f\n", tht);
}

int main(void)
{
	float v11[2] = {1.1, 3.5}; float v12[2] = {2.4, 1.1};
	printInnerProd(v11, v12);
	getAngle(v11, v12);

	float v21[2] = {10.8, 1.1}; float v22[2] = {1.1, 11.5};
	printInnerProd(v21, v22);
	getAngle(v21, v22);

	float v31[2] = {1.0, 0.0}; float v32[2] = {0.0, 1.0};
	printInnerProd(v31, v32);
	getAngle(v31, v32);

	float v41[2] = {1.0, 1.0}; float v42[2] = {0.0, 1.0};
	printInnerProd(v41, v42);
	getAngle(v41, v42);

	float v51[2] = {1.0, 0.0}; float v52[2] = {1.7321, 1.0};
	printInnerProd(v51, v52);
	getAngle(v51, v52);
}
