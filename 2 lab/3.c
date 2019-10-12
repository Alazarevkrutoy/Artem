#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c,d;

int main(int argc, char *argv[]) {
	
	scanf("%d", &a);
	
	if(a==12) printf("Winter");
	if(a>=1 && a<=2) printf("Winter");
	if(a>=3 && a<=5) printf("Spring");
	if(a>=6 && a<=8) printf("Summer");
	if(a>=9 && a<=11) printf("Autumn");
	
return 0;
} 	
