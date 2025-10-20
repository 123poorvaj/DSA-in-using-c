#include<stdio.h>
#include<stdlib.h>


void takeinput(int n ,int *arr){
    printf("Enter the element  to the arr\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
 
}

void dispalay(int n ,int *arr){
    if(n==0){
    printf("arry is empty\n");
    }
    else{
    printf("array elements are : ");
    for(int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    }
    
}

int main(){
    int choice,n=0;
    int arr[32];
    while(1)
    {
        printf("1.input\n2.output\n3.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:{
                printf("enter the size of the arry\n");
                scanf("%d",&n);
                takeinput(n,arr);
                break;
            }
    
            case 2:
                    dispalay(n,arr);
                    break;
            case 3:exit(0);
            
            default: 
                printf("enter the valid choice\n");
        }
    }
}