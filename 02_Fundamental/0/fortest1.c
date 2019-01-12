#include <stdio.h>
#include <math.h>

int main(void)
{
	float alpha = 0.0;
	int N = 90;
	int n;

	float dAlpha = 360.0/N;

	for (n=0; n<=N; n++)
	{
		float rad = alpha*3.14159265359/180.0;
		printf(	"%d\t%f\t%f\t%f\n",
				n, alpha, sin(rad), cos(rad));

		alpha = alpha + dAlpha;
	}
}
