#include "ballistic.h"

int main(void)
{
	float v0 = 100.0; // Initial velocity
	float tht = 30.0; // Initial shooting angle
	float mass = 1.0;
	float dt = 0.01;

	Ball ball;
	Vector Fext;
	Fext.x = 0.0;
	Fext.y = -9.81;

	initialize(&ball, mass, v0, tht);

	do {
		printBallStatus(&ball);
		updateBallStatus(&ball, &Fext, dt);
	} while(ball.s.y >= 0.0);
}
