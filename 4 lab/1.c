#include <stdio.h>

int n,i,cur,fl;

int main() {

    printf("Dlinna massiva=");
    scanf("%d", &n);

    int a[n+1];

    for(i=1; i<=n; i++) scanf("%d", &a[i]);

    cur=n;

    for(i=1; i<=n; i++)
    {
        if(a[i]!=a[cur]){fl=1; break;}
        cur--;
    }

    if(fl==1) printf("Ne simmetrichen");
    else printf("Simmetrichen");

    return 0;
}