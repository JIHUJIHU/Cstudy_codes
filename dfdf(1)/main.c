
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int turn;
}Seq;
int compare (void *first, void *second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else return 0;
}
int cmpfunc(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,m;
    scanf("%d",&n);
    Seq* seq=(int*)malloc(sizeof(Seq)*n);
    int i;
    int number;
    for(i=0;i<n;i++){
        scanf("%d",&seq[i].num);
        seq[i].turn=i+1;
    }


    qsort(seq, n, sizeof(Seq), compare);
    for(i=0;i<n;i++){
        printf("%d(%d)",seq[i].num,seq[i].turn);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&number);
        if(bsearch(&number,seq,n,sizeof(Seq),cmpfunc)==NULL)
            printf("%d ",-1);
        else
            printf("%d ",(int *)bsearch(&number,seq,n,sizeof(Seq),cmpfunc));
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d(%d)",seq[i].num,seq[i].turn);
    }
    return 0;
}

















