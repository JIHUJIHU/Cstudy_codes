#include "InfixToPostfix.h"
#include "ListBasedStack.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int getOperatorPriority(char op)
{
    switch(op){
    case '*':case '/':
        return 5;
    case '+':case '-':
        return 3;
    case '(':
        return 1;
    }
}
int IsFirstOrEqual(char op1, char op2)
{
    int pri1 = getOperatorPriority(op1);
    int pri2 = getOperatorPriority(op2);

    return pri1>=pri2;
}

void convertToPostfix(char exp[])
{
    Stack stack;
    int len = strlen(exp);
    char* postfix = (char*)malloc(sizeof(char)*(len+1));

    int i, cur = 0;
    char token;

    StackInit(&stack);
    memset(postfix,0,len+1);

    for(i=0;i<len;i++){
        token = exp[i];

        if(isdigit(token))
            postfix[cur++] = token;
        else{
            switch(token){
            case '(':
                SPush(&stack,token);
                break;
            case '+':case '-':case '*':case '/':
                while(!SIsEmpty(&stack)&&IsFirstOrEqual(SPeek(&stack),token))
                    postfix[cur++] = SPop(&stack);
                SPush(&stack,token);
                break;
            case ')':
                while(SPeek(&stack) != '(')
                    postfix[cur++] = SPop(&stack);
                SPop(&stack);
                break;
            }
        }
    }
    while(!SIsEmpty(&stack))
        postfix[cur++] = SPop(&stack);

    strcpy(exp,postfix);
    free(postfix);
}
