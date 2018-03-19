#include<stdio.h>
#include<malloc.h>

struct stack {
		int data;
		struct stack * prev;
};

 void push(struct stack *top , int data) {
	struct stack *temp ;
	temp->data=data;
	temp->prev=top;
	top = temp;
}

struct stack * create(struct stack *top) {
	int data =0;
	while(true) {
		printf("enter the data in the node : ");
		scanf("%d",&data);
		
		if(temp->data==-1){
			break;
		}
		push(top, data);
	}	
}

void pop(struct stack *top) {
	struct stack *q=top->prev;
	free(top);
	top = q;
}

void showOptions(struct stack *top){
	
	int a;
	while(a==1 || a==2) {
		printf("\n=====> press 1 to push in stack. \n=====> press 2 to pop from stack \n press any other key to print the stack : \n");
		scanf("%d",&a);
		top = (a==1) ? create(top) : pop(top);
	}
	
}

void printstack(){
	
	printf("|%d|",temp->data);
	temp=temp->prev;
	while(temp!=NULL) {
		printf("-|%d|",temp->data);
		temp=temp->prev; 
	}
	
}

int main() {
	
	struct stack *temp;
	struct stack *top;
	
	//buildStack createStack
	create(top);
	
	printStack();
	showOptions(top);
	
	printf("Final stack : \n");
	temp=top;
	printStack();
	return 0;
}
