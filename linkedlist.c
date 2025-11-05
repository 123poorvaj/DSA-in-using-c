#include<stdio.h>
#include<stdlib.h>
 int choice,n,i;

 void insertbeg();
 void insertend();
 void display();
 void deletbeg();
 void deleteend();

struct node{
    char name[20];
    char usn[20];
    char branch[20];
    char phon[15];
    int sem;
    struct node *link;
};

struct node *start=NULL,*temp,*ptr,*chor;

void insertbeg(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter name \t USN \t branch\t phone no \t sem\n");
    scanf("%s %s %s %s %d",temp->name,temp->usn,temp->branch,temp->phon,&temp->sem);
    temp->link=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        temp->link=start;
        start=temp;
    }
}

void insertend(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter name \t USN \t branch\t phone no \t sem\n");
    scanf("%s %s %s %s %d",temp->name,temp->usn,temp->branch,temp->phon,&temp->sem);
    temp->link=NULL;
    if(start==NULL){
        start=temp;
    }
    else {
        ptr=start;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}

void display(){

    if(start==NULL){
        printf("list is empty\n");
    }
    else{
        int count=0;
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%s\t%s\t%s\t%s\t%d",ptr->name,ptr->usn,ptr->branch,ptr->phon,ptr->sem);
            ptr=ptr->link;
            count++;
        }
        pritnf("number of nodes : %d\n",count);
    }
}
void deletbeg(){
    if(start==NULL)
    printf("list is empty\n");
    else{
        ptr=start->link;
        printf("delete the node with name %s\n",start->name);
        free(start);
        ptr=start;
    }
}
void deleteend(){
    if(start==NULL){
    printf("list is empty\n");
    }
    else if(start->link==NULL){
       printf("delete the node with name %s\n",start->name);
       free(start);
    }
    else{
        chor=start;
        ptr=start->link;
        while(ptr->link!=NULL){
            chor=ptr;
            ptr=ptr->link;
        }
        chor->link=NULL;
        printf("delete the node with name %s\n",ptr->name);
        free(ptr);
    }
}

int main(){
    while(1){
        printf("MENU\n1.creat\n2.insertbeg\3.insertend\4.display\5.deletbeg\n6.deletend\7.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter how many student detailes: ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            insertbeg();
            break;
            case 2:insertbeg();
            break;
            case 3:insertend();
            break;
            case 4:display();
            break;
            case 5: deletbeg();
            break;
            case 6:deleteend();
            break;
            case 7:exit(0);
            default:printf("enter proper choice\n");
        }
    }
}