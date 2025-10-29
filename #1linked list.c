#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    
};
int main()
{
    struct node *start=NULL;
    start=(struct node*)malloc(sizeof(struct node));//create a nodde using malloc
    start->data=45;
    start->link=NULL;
    printf("%d ",start->data);
  return 0;
}