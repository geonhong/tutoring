#include <stdio.h>
#include <math.h>	// for sqrt()

int main(void)
{
	// discriminant of a polynomial equation
	// a*x^2 + b*x + c
	// discriminant d = b^2 - 4*a*c
	// if d>0, two distinct real roots
	// if d=0, one real root
	// if d<0, two complex conjugate roots

	float a, b, c;

	printf("Please input a, b, and c\n");
	
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);

	printf("Solve the following polynomial:\n"
			"%g*x^2 + %g*x + %g = 0\n",
			a, b, c);
	
	float D = b*b - 4*a*c;

	if (D>0.0)
	{
		// Two real roots
		float x1 = (-b + sqrt(D))/(2*a);
		float x2 = (-b - sqrt(D))/(2*a);

		printf(	"Two distinct real roots\n"
				"x1 = %f\n"
				"x2 = %f\n",
				x1, x2);
	}
	else if (D < 0.0)
	{
		// Two complex conjugate roots
		float real_part = -b/(2*a);
		float complex_part = sqrt(-D)/(2*a);

		printf(	"Two complex conjugate roots\n"	
				"x1 = %f+i*%f\n"
				"x2 = %f-i*%f\n",
				real_part, complex_part,
				real_part, complex_part);
	}
	else
	{
		// One real root
		float x = -b/(2*a);

		printf(	"One real root\n"
				"x = %f\n", x);
	}
}
