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

    printf("���� �Է�(���� : q) : ");
    scanf("%s",exp);

    while(strcmp(exp,"q")){
        convertToPostfix(exp);
        printf("���� ǥ������ ��ȯ : %s\n",exp);
        ex=PostfixCalculator(exp);
        printf("�� : %.2lf\n",ex);
        printf("���� �Է�(���� : q) : ");
        scanf("%s",exp);
    }

    return 0;
}
