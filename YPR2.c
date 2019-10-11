#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float x,y,z,lul,lol,lel,s;

int main(int argc, char const *argv[])
{
	scanf("%f%f%f", &x, &y, &z);
	
	lul=2*cos(x-2.0/3.0);
	lol=1./2.+pow(sin(y),2);
	lel=(1+(pow(z,2)/(3-(pow(z,2)/5))));

	s=lul/lol*lel;

	printf("%f", s);
	printf("\n");

	return 0;
}

