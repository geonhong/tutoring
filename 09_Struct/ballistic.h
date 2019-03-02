#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

typedef struct _Vector {
	float x;
	float y;
} Vector;

typedef struct _Ball {
	Vector s;	// Position vector
	Vector v;	// Velocity vector
	Vector a;	// Acceleration vector
	float m;	// mass
	float t;	// current time
} Ball;

// Vector operations
void vq2xy(Vector *V, float vin, float tht, int israd)
{
	if (!israd) tht = tht*PI/180.0;
	V->x = vin*cos(tht);
	V->y = vin*sin(tht);
}

Vector vSumOp(Vector v1, Vector v2)
{
	Vector vo;
	vo.x = v1.x + v2.x;
	vo.y = v1.y + v2.y;
	return vo;
}

Vector vDivOp(Vector v, float s)
{
	Vector vo;
	vo.x = v.x / s;
	vo.y = v.y / s;
	return vo;
}

Vector vMulOp(Vector v, float s)
{
	Vector vo;
	vo.x = v.x * s;
	vo.y = v.y * s;
	return vo;
}

// Print information
void printVector(Vector *vec)
{
	printf("(%f\t%f)\t", vec->x, vec->y);
}

void printBallStatus(Ball *ball)
{
	printf("%f\t", ball->t);
	printVector(&ball->s);
	printVector(&ball->v);
	printVector(&ball->a);
	printf("\n");
}

// Functions to initialize and update the ball status
void initialize(Ball *ball, float m, float v0, float tht)
{
	ball->s.x = 0.0;
	ball->s.y = 0.0;
	ball->a.x = 0.0;
	ball->a.y = 0.0;
	vq2xy(&(ball->v), v0, tht, 0);
	ball->m = m;
	ball->t = 0.0;
}

void updateBallStatus(Ball *ball, Vector *F, float dt)
{
	Vector acc = vDivOp(*F, ball->m);

	Vector v0 = ball->v;
	Vector v1 = vSumOp(v0, vMulOp(acc, dt));
	Vector ds = vMulOp(vSumOp(v0, v1), 0.5*dt);

	// Update properties
	ball->t += dt;
	ball->s = vSumOp(ball->s, ds);
	ball->v = v1;
	ball->a = acc;
}
