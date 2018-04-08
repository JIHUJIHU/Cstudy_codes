#include "PostfixCaculator.h"
#include <stdio.h>
#include "ListBasedStack.h"
#include <string.h>


int PostfixCaculator(char exp[])
{
    Stack stack;
    int i;
    int n1,n2;
    char token;

    StackInit(&stack);
    for(i=0;i<strlen(exp);i++){
        token = exp[i];

        if(isdigit(token))
            SPush(&stack,token-'0');

        else{
            n2 = SPop(&stack);
            n1 = SPop(&stack);
            switch(token){
                case '+':
                    SPush(&stack,n1+n2);
                    break;
                case '-':
                    SPush(&stack,n1-n2);
                    break;
                case '*':
                    SPush(&stack,n1*n2);
                    break;
                case '/':
                    SPush(&stack,n1/n2);
                    break;
            }
        }
    }
    return SPop(&stack);
}
