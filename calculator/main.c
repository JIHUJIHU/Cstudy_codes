#include "PostfixCaculator.h"
//#include "ListBasedStack.h"
#include "InfixToPostfix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char exp[100];
    double ex;

    printf("수식 입력(종료 : q) : ");
    scanf("%s",exp);

    while(strcmp(exp,"q")){
        convertToPostfix(exp);
        printf("후위 표식으로 변환 : %s\n",exp);
        ex=PostfixCalculator(exp);
        printf("답 : %.2lf\n",ex);
        printf("수식 입력(종료 : q) : ");
        scanf("%s",exp);
    }

    return 0;
}
