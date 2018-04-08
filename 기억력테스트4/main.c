/*#include <stdio.h>
#include <stdlib.h>
#define size_seq 100000
int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else return 0;
}

int main()
{
    int n,m,i,j,ct=0;
    scanf("%d",&n);
    int seq[size_seq];
    int arr[n];
    int arr_size=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        seq[arr[i]]=i+1;
    }
    qsort(arr, arr_size, sizeof(int), compare);
    scanf("%d",&m);
    int str[m];
    for(j=0;j<m;j++){
        scanf("%d",&str[j]);
    }
    for(i=0;i<m;i++){
        if(seq[str[i]]!=0)
            printf("%d ",seq[str[i]]);
        else
            printf("%d ",-1);
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else return 0;
}
int main(){
    int arr[] = {4,3,1,7,5,9,8,2,6};
    int arr_size = sizeof(arr) / sizeof(int);
    int i;

    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    qsort(arr, arr_size, sizeof(int), compare);

    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n"); return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#define size_seq 100000
int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else return 0;
}

int main()
{
    int n,m,i,j,ct=0;
    scanf("%d",&n);
    int seq[size_seq];
    int arr[n];
    //int arr_size=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        seq[arr[i]]=i+1;
    }
    /*for(i=1;i<=size_seq;i++){
        if(seq[i]<size_seq&&seq[i]!=0)
            printf("%d ",seq[i]);
        else
            printf("No");
    }*/
   //qsort(arr, arr_size, sizeof(int), compare);
    scanf("%d",&m);
    int str[m];
    for(j=0;j<m;j++){
        scanf("%d",&str[j]);
    }
    for(i=0;i<m;i++){
        if(seq[str[i]]!=0)
            printf("%d ",seq[str[i]]);
        else
            printf("%d ",-1);
    }
    /*for(i=0;i<m;i++){
        ct=0;
        for(j=0;j<n;j++){
            if(str[i]==arr[j]){
                sss[i]=++j;
                ct++;
            }
        }
        if(ct==0)
            sss[i]=-1;
    }
    for(i=0;i<m;i++){
        printf("%d ",sss[i]);
    }*/
    return 0;
}
















