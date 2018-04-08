#include <stdio.h>
int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else return 0;
}
int fac(int n)
{
    int i,sum=1;
    for(i=n;i>=1;i--)
        sum*=i;
    return sum;
}
int main()
{
    int n,m,even=0,odd=0,ct=0;
    scanf("%d %d",&n,&m);
    int arr[m];
    int i,j;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, m, sizeof(int), compare);
    for(i=0;i<m;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int whole=fac(m)/(fac(n)*fac(m-n));
    if(even>=n)
        whole-=fac(even)/(fac(n)*fac(even-n));
    if(odd>=n)
        whole-=fac(odd)/(fac(n)*fac(odd-n));
    printf("%d\n",whole);
    return 0;
}
