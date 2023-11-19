/* Write a menu driven program to implement CIRCULAR QUEUE ADT using arrays and perform operations :
enqueue,dequeue,display,copy,reverse,display.
*/


#include<stdio.h>
#include<stdlib.h>

int q[10];
int size=10,i;
int front=-1,rear=-1;

void enqueue() {
    int value;    
    if(front==0 && rear==size-1||front==rear+1) printf("can't insert element bcz queue is full");
    else {
        printf("enter value to insert = ");
        scanf("%d",&value);
        
        if(front==rear && front==-1) front=rear=0; 
        else  rear++%size;        
        q[rear]=value;        
    }
}
void dequeue() {
    if(front==-1) printf("can't delete element bcz queue is empty\n");
    else {
        printf("deleted item is %d",q[front]);
        if(front==rear) front=rear=-1;
        else front++%size;
    }
}
void search() { 
    int search;
	int flag;
	printf("\nenter element to search = ");
	scanf("%d",&search);
	for(i=front;i<=rear;i++) {
		if(q[i]==search) {    //eg f=2,r=8,ele found at pos 4==>i=5(2,3,4,5)==>i-f+1=5-2+1=4 
			flag = 0;
			printf("\nvalue found at position %d\n",i-front+1);
		}
	}
	if(flag!=0) {
		printf("\nvalue not getted\n");
	}
}
void copy() { } 
void reverse() { }
void display() {
    if(front==rear && front==-1) printf("circular queue is empty");
    else {
        printf("elements of circular queue are as : ");
        i=front;
        while(i<=rear) { 
            printf("%d\t",q[i]); 
            i=i++%size;
        }
        printf("%d\t",q[i]);
        
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
			case 1: enqueue();
				break;
			case 2: dequeue();
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

    


