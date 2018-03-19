#include<stdio.h>
#include<malloc.h>

struct stack {
		int data;
		struct stack * prev;
	} ;

int main(){
	int l;
	printf("enter the length of stack : ");
	scanf("%d",&l);
	struct stack *element[l];
	struct stack *start,*end,*temp;
	for(int i=0;i<l;i++)
	{
		element[i]=(struct stack *)malloc(sizeof(struct stack));
		printf("enter the data in the node no.%d : ",i+1);
		scanf("%d",&element[i]->data);
		if(i==0){
			start=element[i];
			end=element[i];
			element[i]->prev=NULL;
	    	}
		else{
			element[i]->prev=end;
			end=element[i];
		}
	}
	for(int i=0;i<l;i++)
	{
		if(i==0)
			printf("[%d",element[i]->data);
		else
			printf(",%d",element[i]->data);
	}
	printf("]");
}
