    #include <stdio.h>
    #include <math.h>
     
    int n,m,i,j,ans;
     
    int main() {
     
        printf("Stroki:");
        scanf("%d", &n);
        printf("Stolbcy:");
        scanf("%d", &m);
     
        int a[n+1][m+1];
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
        }
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]>=1) {ans++; break;}
            }
        }
     
        if(ans==n)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++) a[i][j]*=(-1);
            }
     
            printf("Noviy massiv:\n");
     
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++) printf("%d ", a[i][j]);
                printf("\n");
            }
        }
        else printf("Massiv ne izmenyaetsya\n");
     
        return 0;
    }