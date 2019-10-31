#include <stdio.h>

int n,ans,i,mx,save;

int main() {

    printf("Kolichestvo elementov massiva:");
    scanf("%d", &n);

    int a[n+1];

    ans=1;

    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == a[i - 1]) ans++;
        else {
            if (ans > mx) {
                mx = ans;
                save = i;
            }
            ans = 1;
        }
    }

    if(ans>mx)
    {
        mx=ans;
        save=i;
    }

    printf("Kolichestvo %d\n", mx);
    printf("Indx nachala=%d  Indx konca=%d", save-mx, save-1);

    return 0;
}