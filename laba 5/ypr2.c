    #include <stdio.h>
     
    int n,m,i,j,fl,sum;
     
    int main()  {
     
        printf("Stroki:");
        scanf("%d", &n);
        printf("Stolbcy:");
        scanf("%d", &m);
     
        int a[n+1][m+1];
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
        }
     
        for(i=1; i<=m; i++) {
            fl = sum = 0;
            for (j = 1; j <= n; j++) {
                sum += a[j][i];
                if (a[j][i] >= 0) {
                    fl = 1;
                    break;
                }
            }
            if (fl == 0) {
                sum /= n;
                break;
            }
        }
     
        if(fl==1) sum=0;
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                a[i][j]-=sum;
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
     
        return 0;
    }