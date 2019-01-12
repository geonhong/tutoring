#include <stdio.h>
#include <math.h>

int main(void)
{
	float alpha = 0.0;
	int N = 90;
	int n = 0;

	float dAlpha = 360.0/N;

	do
	{
		float rad = alpha*3.14159265359/180.0;
		printf(	"%d\t%f\t%f\t%f\n",
				n, alpha, sin(rad), cos(rad));

		alpha = alpha + dAlpha;
		n++;
	} while (alpha <= 360.0);
}
