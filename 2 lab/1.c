#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float r,b,g;

int main(int argc, char *argv[]) {
	
	printf("R=");
	scanf("%f", &r);
	printf("B=");
	scanf("%f", &b);
	
	g=b*sqrt(2);
	
	if(g<=r*2) printf("YES");
	else printf("NOPE");
	
return 0;
} 	
