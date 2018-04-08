#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

int main()
{
    Deque deque;
    int menu, FL, data;

    DequeInit(&deque);

    while(1){
        printf("menu(Quit:0, Insert:1, Remove:2, Peek:3) ? ");
        scanf("%d", &menu);

        if(menu == 0)
            break;

        printf("Position(First:1, Last:2) ? ");
        scanf("%d", &FL);

        switch(menu){
        case 1 :
            printf("Data ? ");
            scanf("%d", &data);
            if(FL == 1)
                DQAddFirst(&deque, data);
            else if(FL == 2)
                DQAddLast(&deque, data);
            break;

        case 2 :
            if(DQIsEmpty(&deque)){
                printf("덱이 비었습니다. \n");
                break;
            }
            if(FL ==1)
                printf("Data : %d \n", DQRemoveFirst(&deque));
            else if(FL == 2)
                printf("Data : %d \n", DQRemoveLast(&deque));
            break;

        case 3 :
            if(DQIsEmpty(&deque)){
                printf("덱이 비었습니다. \n");
                break;
            }
            if(FL ==1)
                printf("Data : %d \n", DQGetFirst(&deque));
            else if(FL == 2)
                printf("Data : %d \n", DQGetLast(&deque));
            break;
        }
    }

    return 0;
}
