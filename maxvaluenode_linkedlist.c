#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
  
struct node {
  int data;
  struct node *prev, *next;
} *head;

void insert(int num) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;

    newNode->next = head;
    newNode->prev = NULL;
    if(head != NULL) {
        head->prev = newNode;
    }
 
    head = newNode;
}
 
int getMaxNode(struct node *head){

    if(head == NULL){
        printf("Empty List\n");
        return INT_MIN;
    }
    int max = head->data;
    while(head != NULL){
        if(head->data > max){
            max = head->data;
        }
        head = head->next;
    }
    return max;
}

void display(struct node *nodePtr) {
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf(" ");
  }
}
  
int main() {
    head=NULL;
    int i,n,num;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("Enter the data: ");
    for( i=0;i<n;i++)
    {
    	scanf("%d",&num);
        insert(num);
    }
    display(head);
    printf("\nMaximum Value in Linked List : %d", getMaxNode(head));
     
    return 0;
}
