* Write a menu driven program to implement LIST ADT using arrays and perform operations :
enqueue,dequeue,display,copy,reverse,display.
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}
struct *head,*nextnode,*temp,*nexttemp,*prevtemp;
int n=0,i;

int count() {
    temp=head;
    while(temp!=0) {
        n++;
        temp=temp->next;
    }
    return n;
}
void display() {
    temp=head;
    printf("elements of linked list are as : \n");
    while(temp!=0) {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void reverse() {
    n=count();
    prevtemp=0;
    temp=head;
    nexttemp->temp->next;
    while(temp!=0) {
        temp->next=prevtemp;
        prevtemp=temp;
        temp=nexttemp;
        nexttemp=temp->next;
    }
    head=prevtemp;
}
void insert() {
    int loc;
    newnode=(struct node* )malloc(sizeof(struct node))
    //newnode->next=0;
    n=count();
    printf("no f elements in ll = %d",n);
    printf("enetr value to be inserted = ");
    scanf("%d",&newnode->data);
    printf("enter position after which node to be inserted = ");
    scanf("%d",&loc);
    
    if(loc==0) {
        newnode->next=head;
        head=newnode;
    }
    else if(loc==n) {
        newnode->next=0;
        temp=head;
        if(i=1;i<n;i++) temp=temp->next;
        temp->next=newnode;
    }
    else if(loc>0 && loc<n) {
        i=1;
        temp=head;
        for(i=1;i<loc;i++) temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else printf("Wrong position choosed");
}
void delete() { 
    printf("enter position which node to be deleted = ");
    scanf("%d",&loc);
    
    if(n==0) printf("underflow condition");
    if(loc==1) {
        temp=head;
        head=temp->next;
        free(temp);
    }
    if(loc==n) {
        temp=head;
        for(i=1;i<n-1;i++) temp=temp->next;
        nexttemp=temp->next;
        temp->next=0;
        free(nexttemp);
    }
    if(loc>1 && loc<n) {
        for(i=1;i<loc-1;i++) temp=temp->next;
        nextemp=temp->next;
        temp->next=nexttemp->next;        
        free(nexttemp);
    }
}        
 void search() {
     int search,flag;
     printf("enter eleemnt to search");
     scanf("%d",&search);
     for(i=1;i<n+1;i++) {
         if(temp->data=search) {
             flag=0;
             printf("value found at position %d ",i+1);
         }
     }
     if(flag!=0) printf("element not found");
}                                       
            

void copy() {}
void concatenate() {}

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
			case 1: insert();
				break;
			case 2: delete();
				break;
			case 3: search();
				break;
			case 4: copy();
				break;
			case 5: reverse();
				break;
			case 6: display();
				break;
			case 7: concatenate();
			    break;
			default : printf("invalid option\n");
				break;
		}
	}
}


