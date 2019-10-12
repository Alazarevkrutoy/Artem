#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,s,x,y,z;

int main(int argc, char *argv[]) {
	
//scanf("%f%f%f", &x,&y,&z);

x=14.26;
y=-1.22;
z=3.5*pow(10,-2);

a=2*cos(x-2.0/3.0);
b=1.0/2.0+pow(sin(y),2);
c=1+pow(z,2)/(3-pow(z,2)/5.0);

s=a/b*c;
printf("%f", s);	
return 0;
}
