

#include"Functions.h"

int main()
{
	double t = 0;
	double dt = 0.02;

	controlMPC();
	systemEvol(t,dt);

	return 0;
}