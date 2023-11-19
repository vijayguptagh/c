/* Write a menu driven program to implement STACK ADT using arrays and perform operations :
push,pop,display,copy,reverse,display.
*/

#include<stdio.h>
int s[10],i;   
int top = -1;
int size = 10;

void push() {
	int value;
	if(top==size-1) {
		printf("\ncan't insert stack is full\n");
	}
	else {
	printf("\nenter character or number to insert = ");
	scanf("%d",&value);
	top++;
	s[top] = value;
	}
}
void pop() {
	if(top==-1) {
		printf("\ncan't delete stack is empty\n");
	}
	else {
	printf("\ndeleted value is %d\n",s[top]);
	top--;
	}
}
void search() { 
	int search;
	int flag;
	printf("\nenter element to search = ");
	scanf("%d",&search);
	for(i=0;i<=top;i++) {
		if(s[i]==search) {
			flag = 0;
			printf("\nvalue found at position %d\n",i+1);
		}
	}
	if(flag!=0) {
		printf("\nvalue not getted\n");
	}
}
void display() {
	if(top==-1) {
		printf("stack is empty");
	}
	else {
		printf("\nelements of stack are as : ");
		for(i=0;i<=top;i++) {
			printf("%d\t",s[i]);
		}
	}
}
void copy() {
}
void reverse() { //reverse means reversing sequence but top remains same
	if(top==-1) { printf("stack is empty");}
	else {
		for(i=top;i>=0;i--) { printf("%d\t",s[i]); }
	}
}		

void main() {
	int option;
	printf("MAIN MENU\n");
	printf("\n1.insert 2.delete 3.search 4.copy 5.reverse 6.display\n");
		
	while(option!= 0) {
		printf("\nenter your choice = ");
		scanf("%d",&option);
		
		switch(option) {
			case 0: printf("\nend of program");
				break;
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: search();
				break;
			case 4: copy();
				break;
			case 5: reverse();
				break;
			case 6: display();
				break;
			default : printf("invalid option\n");
				break;
		}
	}
}
