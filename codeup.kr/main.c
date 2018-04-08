/*#include <stdio.h>
int main()
{
    int i,j,leng,size,temp,last;
    scanf("%d",&leng);
    size=leng;
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    last=arr[0];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            printf("%d ",arr[j]);
        for(j=0;j<size-1;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        printf("\n");
    }
    return 0;
}*/
/*#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char str[100];
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(str[i]!=' ')
            printf("%c",str[i]);
    }
}*/
/*#include <stdio.h>
int main(){
    int i,arr[10],num;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    printf("%d",arr[num-1]);
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100000],i,ct=0,ct1=0;
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='(')
            ct++;
        if(str[i]==')')
            ct1++;
    }
    printf("%d %d",ct,ct1);
}
