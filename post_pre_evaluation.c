//evaluation of postfix and prefix expression

#include<stdio.h>
#include<string.h>
void main() {
    char e[20];
    int top=-1,i,n;
    printf("enter expression");
    printf("for postfix expression input from left to right");
    printf("for prefix expression input from right to left");
    gets(e);
    n=strlen(e);
    
    for(i=0;i<n;i++) {
        if(e[i]>0) {
            top++;
            e[top]=e[i];
        }
        if(e[i]=='+'||e[i]=='-'||e[i]=='*'||e[i]=='/'||e[i]=='%') {
            e[i-2]=e[i-2]e[i]e[i-1];
            top--;
        }
        else printf("wrong input/characters used");
    }
    if(top==0)  printf("value of expression = %d",e[top]);
    else printf("invalid expression(operators count doesn't satisfy operands)");
}

