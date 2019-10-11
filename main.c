#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float x,y,z,l,o,e,s;

int main (void)
{
    scanf("%f%f%f", &x, &y, &z);

    l=2*cos(x-2.0/3.0);
    o=1./2.+pow(sin(y),2);
    e=(1+(pow(z,2)/(3-(pow(z,2)/5))));

    s=l/o*e;

    printf("%f",s);
    printf("\n");

    return 0;
}
