 #include<stdlib.h>
#include<stdio.h>

 struct stack{
     int total_size;
     int top;
     int *arr;

 };


/*   array memory made in stack memory
 struct stack{
     int total_size;
     int top;
     int arr[100];

 };     */



 void createstack(struct stack *st,int total_size){
     st->total_size=total_size;
     st->top=-1;
     st->arr=(int *)malloc(st->total_size * sizeof(int));

 }

 void push(struct stack *st){

     int num;
     printf("enter number to push in a stack");
     scanf("%d",&num);

     if(st->top==st->total_size-1){
         printf("stack is full\n");
     }else{
         st->top=st->top+1;
         st->arr[st->top]=num;
     }

 }

 void pop(struct stack *st){

	 if(st->top==-1){
		 printf("stack is empty\n");

	 }else{
		    int x=st->arr[st->top];
		    st->top=st->top-1;
		   printf("deleted element is %d",x);
	 }

 }

 void peek(struct stack *st){

	 if(st->top==-1){
		 printf("stack is empty\n");
	 }else{
		 printf("top element in a stack is %d",st->arr[st->top]);
	 }

 }


 void isempty(struct stack *st){
	 if(st->top==-1){
		 printf("stack is empty\n");
	 }else{
		 printf("stack is not empty\n");
	 }

 }

 void isfull(struct stack *st){
   
   if(st->top==st->total_size-1){
	   printf("stack is full\n");
   }else{
	   printf("stack is not full\n");
   }

 }


 void display(struct stack *st){

    if(st->top==-1){
		printf("there is no element in stack to display\n");
	}

    int i;
 	for(i=st->top;i>=0;i--)
 	printf("%d\n",st->arr[i]);
     
 }

  int menu(){
 	int choice;
 	printf("\n1.create stack using array\n");
 	printf("2.push into stack\n");
 	printf("3.pop into a stack\n");
 	printf("4.top most element in stack\n");
 	printf("5. check if stack is empty or not\n");
 	printf("6. check if stack is full or not\n");
 	printf("7.display element in stack\n");
 	printf("8.exit\n");
 	
 	printf("enter your choice");
 	scanf("%d",&choice);
 	return choice;
 }

 int main(){

struct stack st;
 

    while(1)
	{
	
	switch(menu())
	{
		case 1:
	           createstack(&st,10);
             break;
		case 2:
		    	push(&st);
		    	break;
		    	
		case 3:
	          	pop(&st);
	          	break;
		case 4:
		         peek(&st);
		         break;
		case 5:
		         isempty(&st);
		         break;
		case 6:
		          isfull(&st);
		          break;
		case 7:
		           display(&st);
		           break;
		case 8:
		       exit(0);
		       
		default:
			    printf("enter wrong choice\n");
     	}
    }

     return 0;
 }
