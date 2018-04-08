#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <sys\timeb.h>

#define SIZE 100000


int list[SIZE];

void writeRandomNumberToFile(){
    int i;
    FILE* fp=fopen("random.txt","wt");
    srand(time(NULL));

    for(i=0;i<SIZE;i++)
        fprintf(fp,"%d ",rand());
    fclose(fp);
}
void readRandomNumberFromFile(){
    int i;
    FILE* fp=fopen("random.txt","rt");

    for(i=0;i<SIZE;i++)
        fscanf(fp,"%d",&list[i]);
    fclose(fp);
}
void writeResultToFile(){
    int i;
    FILE* fp=fopen("random.txt","wt");

    for(i=0;i<SIZE;i++)
        fscanf(fp,"%d",&list[i]);
    fclose(fp);
}
int compare(const void* p1,const void* p2){
    return *(int*)p1-*(int*)p2;
}
void bubbleSort(){
    int i, j, temp;

    for(i=0;i<SIZE-1;i++){
        for(j=0;j<SIZE-i-1;j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
}
int main()

{

	struct timeb timebuffer;

 	long long int before, after;



	writeRandomNumberToFile(); //랜덤한 수를 파일로 저장하는 과정은 한 번만 필요합니다.

                                                        //버블 정렬, 퀵 정렬 순으로 테스트한다면

                                                        //퀵 정렬을 수행할 때는 주석으로 처리하시오.

	readRandomNumberFromFile();

int i;
    FILE* fp=fopen("random.txt","rt");

    for(i=0;i<SIZE;i++)
        fscanf(fp,"%d",&list[i]);
    fclose(fp);

	ftime(&timebuffer);

	before = timebuffer.time*1000 + timebuffer.millitm;

	//버블 정렬 또는 퀵 정렬 수행
	//qsort(list, SIZE, sizeof(int),compare);
	bubbleSort();


	ftime(&timebuffer);

	after = timebuffer.time*1000 + timebuffer.millitm;



	printf("%lld", after-before);

	writeResultToFile();

	return 0;

}
