#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main(void)
{
	float sx, sy, vx, vy;
	float v0 = 100.0;		// initial speed, m/s
	float tht = 20.0;		// initial launch angle, deg
	float Cd = 1.0;			// Drag coefficient
	float Area = 0.01;		// Reference area of a ball
	float density = 1.225;	// Density of air
	float mass = 1.0;		// Mass of a ball, kg
	float mg = mass*9.81;	// Weight of the ball, N
	float dt = 0.001;		// Time increment, sec
	float time = 0.0;

	printf("Please input the launch angle(deg):");
	scanf("%f", &tht);

	// conversion factor
	float d2r = PI/180.0;

	// Initialize
	vx = v0*cos(tht*d2r);
	vy = v0*sin(tht*d2r);
	sx = 0.0;
	sy = 0.0;

	do
	{
		float v = sqrt(vx*vx + vy*vy);
		float Fd = 0.5*density*v*v*Area*Cd;
		float Fx = Fd*vx/v;
		float Fy = Fd*vy/v;
		if (vy >= 0.0)
		{
			Fy = Fy + mg;
		}
		else
		{
			Fy = -Fy + mg;
		}

		// a = F/m
		float ax = -Fx/mass;
		float ay = -Fy/mass;

		float vx1 = vx + ax*dt;
		float vy1 = vy + ay*dt;

		sx += 0.5*(vx+vx1)*dt;
		sy += 0.5*(vy+vy1)*dt;
		time += dt;

//		printf("%f sec\ts=( %f, %f )\tv=( %f, %f )\n", 
		printf("%f\t%f\t%f\t%f\t%f\n",
				time, sx, sy, vx, vy);
		
		vx = vx1;
		vy = vy1;
	} while (sy >= 0.0);
}
