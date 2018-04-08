#include "PostfixCaculator.h"
//#include "ListBasedStack.h"
#include "InfixToPostfix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char exp[100];

    printf("수식 입력(종료 : q) : ");
    scanf("%s",exp);

    while(strcmp(exp,"q")){
        convertToPostfix(exp);
        printf("%d\n",PostfixCaculator(exp));
        printf("수식 입력(종료 : q) : ");
        scanf("%s",exp);
    }



    //convertToPostfix(exp);

    //printf("%s\n",exp);

    //printf("%d\n",PostfixCaculator(exp));
    return 0;
}
