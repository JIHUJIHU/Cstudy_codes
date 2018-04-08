/*#include <stdio.h>
int soin(int n){
    int i,ct=0;
    if(n==1){
        return 0;
    }
    for(i=2;i<=n;i++){
        if(n%i==0)
            ct++;
    }
    if(ct==1)
        return 1;
    else
        return 0;
}
int main()
{
    int n,m,max_soin,ct=0;
    scanf("%d %d",&n,&m);
    int i,j;
    max_soin=0;
    int p;
    for(i=2;i<=n;i++){
        max_soin=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                p=soin(j);
                if(j>max_soin&&p==1)
                    max_soin=j;
            }
        }
        if(max_soin<=m){
            ct++;
        }
    }
    printf("%d",ct);
    return 0;
}*/
