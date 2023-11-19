//code to check nesting of parenthesis in expression
//using general logic
/*
#include<stdio.h>
#include<string.h>
void main() {
	char exp[100];
	int a,b,c,d,e,f,i;
	a=b=c=d=e=f=0;
	printf("enter expression\n");
	gets(exp);
	for(i=0;i<strlen(exp);i++) {
		if(exp[i]=='(') { a++;}
		if(exp[i]==')') { b++;}
		if(exp[i]=='[') { c++;}
		if(exp[i]==']') { d++;}
		if(exp[i]=='{') { e++;}
		if(exp[i]=='}') { f++;}
	}
	if(a==b && c==d && e==f) { printf("Valid expression");}
	else printf("Invalid expression");
}
*/
//using stack

#include<stdio.h>
#include<string.h>
int top=-1;
void main() {
	char exp[100];
	char s[20];
	int i,size=20,flag=1,temp;
	printf("enter expression\n");
	gets(exp);
	
	for(i=0;i<strlen(exp);i++) {
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{') {
			if(top==size-1) { printf("stack overflow"); }				
			else {
			
				top++;
				s[top]=exp[i];
			}
		}
		if(exp[i]==')' || exp[i]==']' || exp[i]=='}') {
			if(top==-1) { flag=0; }
			else { //give underflow cond
				temp=s[top--];
				if(exp[i]==')' && (temp=='[' || temp=='{')) { flag=0; }
				if(exp[i]==']' && (temp=='(' || temp=='{')) { flag=0; }
				if(exp[i]=='}' && (temp=='[' || temp=='(')) { flag=0; }			     
			}
		}
	}
	
	if(top>=0) { flag=0; }
	if(flag==1) { printf("Valid expression"); }
	else printf("Invalid expression");
}
					
					
