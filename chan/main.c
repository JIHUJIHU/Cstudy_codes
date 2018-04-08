/*#include <stdio.h>

int main()
{
    int n,m,i,j,ct=0;
    scanf("%d",&n);
    //n개 넣는 배열
    int arr[n];

    int sss[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int mm;

    for(j=0;j<m;j++){
        scanf("%d",&str[j]);
    }
    for(i=0;i<n;i++){
        if(str[i]==arr[i])
            sss[i]=
    }
    for(i=0;i<m;i++){
        ct=0;
        for(j=0;j<n;j++){
            if(str[i]==arr[j]){
                sss[i]=++j;
                ct++;
                break;
            }
        }
        if(ct==0)
            sss[i]=-1;
    }
    for(i=0;i<m;i++){
        printf("%d ",sss[i]);
    }
    return 0;
}*/
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

















