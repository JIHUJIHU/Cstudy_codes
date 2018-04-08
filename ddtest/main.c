#include <stdio.h>
int sosu(int n)
{
    int i,ct=0;
    if(n==1)
        return 0;
    for(i=2;i<n/2;i++){
        if(n%i==0)
            ct++;
    }
    if(ct==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    int i;
    for(i=n;i<=m;i++){
        if(sosu(i))
            sum+=i;
    }
    if(sum==0)
        printf("-1");
    else
        printf("%d\n",sum);
}
