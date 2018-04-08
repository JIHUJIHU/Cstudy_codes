#include <stdio.h>
int main(){
    int n,m,a,b,sum=0;
    scanf("%d %d",&n,&m);
    int i,j,arr[n],str[m],som[n],soon[m];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        som[i]=sum;
    }
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        soon[i]=som[b-1]-som[a-2];
    }
    for(i=0;i<m;i++){
        printf("%d\n",soon[i]);
    }
}
