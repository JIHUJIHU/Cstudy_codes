#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArrayBaseQueue.h"

/*#define CUS_COME_TEAM 15

#define CHE_BUR 0
#define BUL_BUR 1
#define DUB_BUR 2

#define CHE_TERM 12
#define BUL_TERM 15
#define DUB_TERM 24

int main()
{
    int makeProc = 0;
    int cheOrder = 0, bulOrder = 0, dubOrder = 0;
    int sec;

    Queue q;

    QueueInit(&q);
    srand(time(NULL));

    for(sec=0 ; sec<3600 ; sec++){
        if(sec %CUS_COME_TEAM == 0){
            switch(rand() % 3){
            case CHE_BUR :
                Enqueue(&q, CHE_TERM);
                cheOrder += 1;
                break;
            case BUL_BUR :
                Enqueue(&q, BUL_TERM);
                bulOrder += 1;
                break;
            case DUB_BUR :
                Enqueue(&q, DUB_TERM);
                dubOrder += 1;
                break;
            }
        }

        if(makeProc <= 0 && !QIsEmpty(&q))
            makeProc = Dequeue(&q);

        makeProc --;
    }

    printf("Simulation Report! \n");
    printf(" - Cheese burger : %d \n", cheOrder);
    printf(" - Bulgogi burger : %d \n", bulOrder);
    printf(" - Double burger : %d \n", dubOrder);
    printf(" - Waiting room size : %d \n", QUE_LEN);
    return 0;

    return 0;
}*/

#define CUS_COME_TERM 15
#define TEST_COUNT 10000

int main(){
    Queue q;
    int term[] = {12, 15, 24};
    int order[] = {0, 0, 0};
    int makeProc;
    int kind;
    int i, sec;
    int isFull;
    int failCount = 0;

    srand(time(NULL));

    for(i=0 ; i<TEST_COUNT ; i++){
        makeProc = 0;
        QueueInit(&q);
        isFull = FALSE;
        order[0] = order[1] = order[2] = 0;

        for(sec=0 ; sec<3600 ; sec++){
            if(sec % CUS_COME_TERM == 0){
                kind = rand()%3;

                if(QIsFull(&q)){
                    isFull = TRUE;
                    failCount++;
                    break;
                }

                Enqueue(&q, term[kind]);
                order[kind]++;
            }

            if(makeProc <= 0 && !QIsEmpty(&q))
                makeProc = Dequeue(&q);

            makeProc--;
        }

        if(isFull)
            printf("대기실이 꽉 찼습니다. \n");
        else
            printf("성공! %d, %d, %d \n", order[0], order[1], order[2]);
    }

    printf("\n\n실패율 : %.1f%% \n", (double)failCount/TEST_COUNT*100);

    return 0;
}
