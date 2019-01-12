#include <stdio.h>
#include <math.h>

int main(void)
{
	float xs, ys, xe, ye;
	float len;
	int n, N;

	xs = 0.5;
	ys = 0.0;
	xe = xs;
	ye = ys;
	len = 0.0;
	N = 100;

	for (n=0; n<N; n++)
	{
		xe = xs - (0.5/N);
		ye = sqrt(0.5*0.5 - xe*xe);

		float seg;
		float dx, dy;

		dx = xe - xs;
		dy = ye - ys;

		seg = sqrt(dx*dx + dy*dy);

		printf("%f\t%f\t%f\t%f\n", 0.5/N, xe, ye, seg);

		len = len + seg;

		xs = xe;
		ys = ye;
	}

	printf("%f\n", 4*len);
}
