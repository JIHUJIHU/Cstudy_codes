/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int h[n],st[n];
    int ct=0;
    int i;
    int stt=0;
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    int j;
    for(i=n-1;i>=0;i--){
        st[stt]=h[i];
        for(j=stt-1;j>=0;j--){
            if(st[stt]<=st[j])
                break;
            if(st[stt]>st[j])
                ct++;
        }
        stt++;
    }
    /*while(i+1!=n){
        j=i+1;
        while(h[i]>h[j]){
            if(h[i]>h[j]){
                ct++;
            }
            j++;
        }
        i++;
    }*/

   /*printf("%d",ct);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int h[n],sum[n];
    int ct=0;
    int i;
    int stt=0;
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
    }
    for(i=0;i<n;i++){
        sum[i]=0;
    }
}*/
#include <stdio.h>
#include <stdlib.h>

void main() {

    unsigned long n, i, j;
    unsigned long ct = 0;
    unsigned long arr[80000];

    scanf("%lu", &n);

    i = 0;

    for (i = 0; i < n; i++) {
        scanf("%lu", &arr[i]);
        if (i > 0) {
            while (arr[i] >= arr[i - 1] && i > 0)
            {
                arr[i - 1] = arr[i];
                ct = ct + i - 1;
                n--;
                i--;
            }
        }
    }
    ct += n*(n - 1) / 2;
    printf("%lu", ct);
}





















