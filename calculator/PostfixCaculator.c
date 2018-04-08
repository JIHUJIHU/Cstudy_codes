#include "ListBasedStack.h"
#include <string.h>

double PostfixCalculator(char exp[]){
    Stack stack;
    int i,j;
    double n1, n2, f1 = 1, asdf, cnt=0;
    char token;
    double ex;

    StackInit(&stack);

    for(i=0;i<strlen(exp);i++){
        token = exp[i];

        if(isdigit(token)){
            if(exp[i+1]=='.'){
                asdf = token-'0';
                cnt++;
            }
            else
                SPush(&stack, (double)(token-'0'));
            if(cnt!=0){
                i++;
                while(exp[i+1]!=' '){
                    cnt *= 0.1;
                    asdf += (exp[++i]-'0')*cnt;
                }
                SPush(&stack, asdf);
                i++;
                cnt = 0;
            }
        }

        else{
            n2 = SPop(&stack);
            n1 = SPop(&stack);

            switch(token){
                case '+' :
                    SPush(&stack, n1+n2);
                    break;
                case '-' :
                    SPush(&stack, n1-n2);
                    break;
                case '*' :
                    SPush(&stack, n1*n2);
                    break;
                case '/' :
                    SPush(&stack, n1/n2);
                    break;
                case '^' :
                    for(j=0 ; j<n2 ; j++)
                        f1 *= n1;
                    SPush(&stack, f1);
                    f1 = 1;
                    break;
            }
        }
    }

    return SPop(&stack);
}
