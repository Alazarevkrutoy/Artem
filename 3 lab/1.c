#include <stdio.h>

int i,j,cur,fst,scnd;

int main() {

    for(i=1; i<=9; i++)
    {
        for(j=0; j<=9; j++)
        {
            if(i+j!=11) continue;
            cur=i*10+j;
            cur+=27;
            fst=cur/10;
            scnd=cur%10;
            if(fst==j && scnd==i)
            {
                printf("%d%d %d%d\n", i,j,fst,scnd);
            }
        }
    }

    return 0;
}