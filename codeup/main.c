/*#include <stdio.h>
int main()
{
    int i,tm,ct=0,num;
    scanf("%d %d",&tm,&num);
    for(i=tm;i<90;i=i+5)
        ct++;
    num+=ct;
    printf("%d",num);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i,n,p,sum=0;
    scanf("%d %d",&n,&p);
    for(i=n;i<=p;i++)
        if(i%3==0)
            sum+=i;
    printf("%d",sum);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int n,i,year;
    scanf("%d",&n);
    if(n<=13){
        year=13-n;
        i=3;
    }
    else{
        year=100-(n-13);
        i=1;
    }
    printf("%d %d",year,i);

}*/
/*#include <stdio.h>
int main(){
    int size,i,j,num=1;
    scanf("%d",&size);
    int arr[size][size];
    for(i=0;i<size;i++){
        if(i%2==0){
            for(j=0;j<size;j++){
                arr[j][i]=num;
                num++;
            }
        }
        else{
            for(j=size-1;j>=0;j--){
                arr[j][i]=num;
                num++;
            }
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int year, month, day;
    scanf("%d %d %d",&year,&month, &day);
    if(month<10)
        year*=10;
    if(day<10)
        month*=100;
    else if(day<100)
        month*=10;
    printf("%d%d%d",year,month,day);
    return 0;

}*/
/*#include <stdio.h>
int main(){
    int hour, minute;
    scanf("%d %d",&hour,&minute);
    if(minute<30){
        if(hour==0)
            hour=23;
        else
            hour--;
        minute+=30;
    }
    else
        minute-=30;
    printf("%d %d",hour,minute);
    return 0;

}*/

/*#include <stdio.h>
int count(int n){
    printf("%d\n",n);
    if(n==1)
        return 0;
    return count(n-1);
}
int main(){
    int n;
    scanf("%d", count(n));
    printf("%d",&n);
}*/
/*include <stdio.h>
int main(){
    int i, n, str[200];
    scanf("%d",n);
    int arr[200],ct=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        str[ct]=arr[i];
        ct--;
    }
    for(i=0;i<n;i++){
        printf("%d",str[i]);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int k=0,i,n,s[400],length=0;
    long long int m;
    scanf("%d",&n);
    scanf("%lld",&m);
    while(n){
        if((k+1)%4==0){
            s[k]=',';
            k++;
            length++;
        }
        s[k]=m%10;
        m=m/10;
        k++;
        length++;
        n--;
    }
    for(i=length-1;i>=0;i--){
        if(s[i]==',')
            printf(",");
        else
            printf("%d",s[i]);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i,arr[7],sum=0,ct=0;
    for(i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<7;i++){
        if(arr[i]%2==1){
            sum+=arr[i];
            ct++;
        }
    }
    if(ct==0)
        printf("%d",-1);
    else
        printf("%d",sum);
    return 0;
}*/
/*#include <stdio.h>
int max(int arr[])
{
    int i,max=arr[0];
    for(i=1;i<7;i++){
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int main(){
    int i,arr[7]={0},odd[7]={0},even[7]={0},sum=0;
    for(i=0;i<7;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<7;i++){
        if(arr[i]%2==0)
            even[i]=arr[i];
        else if(arr[i]%2==1)
            odd[i]=arr[i];
    }
    sum+=max(even);
    sum+=max(odd);
    printf("%d",sum);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i,j,ct=0,size,temp;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size-1;i++){
        ct=0;
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                ct++;
            }
        }
        if(ct==0){
            printf("%d",i);
            break;
        }
    }
    if(ct!=0)
        printf("%d",size-1);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i,arr[4],ct=0;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1)
            ct++;
    }
    switch(ct)
    {
    case 0:
        printf("모");
        break;
    case 1:
        printf("도");
        break;
    case 2:
        printf("개");
        break;
    case 3:
        printf("걸");
        break;
    case 4:
        printf("윷");
        break;
    }
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i,a,b,cal=0;

    scanf("%d %d",&a,&b);
    for(i=1;i<6;i++){
        switch(a)
        {
        case 5:
            a=70;
            break;
        case 1:
            a=400;
            break;
        case 2:
            a=340;
            break;
        case 3:
            a=170;
            break;
        case 4:
            a=100;
            break;
        }
        switch(b)
        {
        case 5:
            b=70;
            break;
        case 1:
            b=400;
            break;
        case 2:
            b=340;
            break;
        case 3:
            b=170;
            break;
        case 4:
            b=100;
            break;
        }
    }
    cal=a+b;
    if(cal>500)
        printf("angry");
    else
        printf("no angry");
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if(a>=90)
        printf("A");
    else if(a>=80)
        printf("B");
    else if(a>=70)
        printf("C");
    else if(a>=60)
        printf("D");
    else
        printf("F");
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int i;
    double n1,n2,max=0;
    double arr[10];
    scanf("%lf %lf",&n1,&n2);
    arr[0]=n1+n2;
    arr[1]=n2+n1;
    arr[2]=n1-n2;
    arr[3]=n2-n1;
    arr[4]=n1*n2;
    arr[5]=n2*n1;
    arr[6]=n1/n2;
    arr[7]=n2/n1;
    arr[8]=pow(n1,n2);
    arr[9]=pow(n2,n1);
    for(i=0;i<10;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%lf",max);
    return 0;

}*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=10)
        printf("정상");
    else if(a<=20)
        printf("과체중");
    else
        printf("비만");
    return 0;
}






















