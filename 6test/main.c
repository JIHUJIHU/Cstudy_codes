#include <stdio.h>

int main()
{
 //   char start[13],finish[13];
    int first[13];
    int last[13];
    int i,j,k,ct=0,max_ct;
    for(i=0;i<13;i++){
        scanf("%d",&first[i]);
    }
    for(j=0;j<13;j++){
        scanf("%d",&last[j]);
    }
    for(i=0;i<13;i++){
        printf("%d ",first[i]);
    }
    for(i=0;i<13;i++){
        printf("%d ",last[i]);
    }
    for(i=0;i<13;i++){
        k=i;
        for(j=0;j<13;){
            if(first[k]==last[j]){
                ct++;
                j++;
            }
            else
                k++;
            if(k==12)
                break;
        }
    }

    return 0;
}
