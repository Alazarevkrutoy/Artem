    #include <stdio.h>
    #include <math.h>
     
    int n,m,i,j,temp,tmp,fl,summ;
     
    int main() {
     
        printf("Stroki:");
        scanf("%d", &n);
        printf("Stolbcy:");
        scanf("%d", &m);
     
        int a[n+1][m+1],b[m+1],sum[m+1];
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++) scanf("%d", &a[i][j]);
        }
     
        for(i=1; i<=m; i++)
        {
            b[i]=i;
            sum[i]=0;
            for(j=1; j<=n; j++)
            {
                if(a[j][i]<0 && abs(a[j][i]%2)==1) sum[i]+=abs(a[j][i]);
               //printf("%d ", sum[i]);
            }
        }
     
        //printf("\n");
     
        for(i=1; i<=m; i++)
        {
            printf("Harakteristika %d stolbca: %d\n", i,sum[i]);
        }
     
        for(i=1; i<=m; i++)
        {
            for(j=i+1; j<=m; j++)
            {
                if(sum[i]>sum[j])
                {
                    temp=sum[i];
                    tmp=sum[j];
                    sum[j]=temp;
                    sum[i]=tmp;
                    temp=b[i];
                    tmp=b[j];
                    b[i]=tmp;
                    b[j]=temp;
                }
            }
        }
     
        //for(i=1; i<=m; i++) printf("%d ", b[i]);
     
        printf("\nNoviy massiv\n");
     
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                printf("%d ", a[i][b[j]]);
            }
            printf("\n");
        }
     
        printf("\n");
     
        for(i=1; i<=m; i++)
        {
            fl=summ=0;
            for(j=1; j<=n; j++)
            {
                summ+=a[j][b[i]];
                if(a[j][b[i]]<0) fl=1;
            }
            if(fl==1) printf("Summa v stolbce %d = %d\n", b[i],summ);
        }
        return 0;
    }