#include <stdio.h>

int n,i,sumsq,sumcu,sumsqch,sumcuch;

int main() {

    printf("N=");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sumsq+=i*i;
        sumcu+=i*i*i;
        if(i%2==0)
        {
            sumsqch+=i*i;
            sumcuch+=i*i*i;
        }
    }

    printf("1) %d\n", sumsq);
    printf("2) %d\n", sumcu);
    printf("3) %d\n", sumsqch);
    printf("4) %d\n", sumcuch);

    return 0;
}