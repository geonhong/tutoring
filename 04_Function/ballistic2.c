#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

// Prototype of functions
float sqr(float x);
float magSqr(float v[2]);
float mag(float v[2]);
float drag(float v[2]);
float decompv(float v, float tht, int ind);

// Global variables
float Cd = 1.0;			// Drag coefficient
float Area = 0.01;		// Reference area of a ball
float density = 1.225;	// Density of air

int main(void)
{
	float s[2], v[2];
	float v0 = 100.0;		// initial speed, m/s
	float tht = 20.0;		// initial launch angle, deg
	float mass = 1.0;		// Mass of a ball, kg
	float mg = mass*9.81;	// Weight of the ball, N
	float dt = 0.001;		// Time increment, sec
	float time = 0.0;

//	printf("Please input the launch angle(deg):");
//	scanf("%f", &tht);

	// Initialize
	v[0] = decompv(v0, tht, 0);
	v[1] = decompv(v0, tht, 1);
	s[0] = 0.0;
	s[1] = 0.0;

	do
	{
		float Fd = drag(v);
		float F[2] = {decompv(Fd, tht, 0),
					  decompv(Fd, tht, 1)};

		F[1] = F[1] + mg;

		// Evaluate the acceleration a = F/m
		float a[2] = {-F[0]/mass, -F[1]/mass};

		// Estimate the velocity at t+dt
		int i;
		float v1[2];
		for(i=0; i<2; i++)
		{
			v1[i] = v[i] + a[i]*dt;
		}

		// Estimate the displacement
		for(i=0; i<2; i++)
		{
			s[i] += 0.5*(v[i]+v1[i])*dt;
		}

		// Update time
		time += dt;

//		printf("%f sec\ts=( %f, %f )\tv=( %f, %f )\n", 
		printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
				time, s[0], s[1], v[0], v[1], a[0], a[1]);
		
		v[0] = v1[0];
		v[1] = v1[1];
	} while (s[1] >= 0.0);
}

float sqr(float x)
{
	return x*x;
}

float magSqr(float v[2])
{
	return sqr(v[0]) + sqr(v[1]);
}

float mag(float v[2])
{
	return sqrt(magSqr(v));
}

// Estimate the drag force (returns a scalar value)
float drag(float v[2])
{
	return 0.5*density*magSqr(v)*Area*Cd;
}

// Decompose the vector v into x and y components
// ind == 0 for x component (cos(tht)),
// ind == 1 for y component (sin(tht))
float decompv(float v, float tht, int ind)
{
	// conversion factor
	float d2r = PI/180.0;

	// Get corresponding component
	if (ind == 0)
	{
		return v*cos(tht*d2r);
	}
	else if (ind == 1)
	{
		return v*sin(tht*d2r);
	}
	else
	{
		return 0;
	}
}
