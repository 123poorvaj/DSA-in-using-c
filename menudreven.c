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

void linearsearch(int key ,int n ,int *arr){
     for (int i = 0; i <n; i++)
     {
        if (arr[i]==key)
        {
            printf("key is found in  the index: %d\n",i);
            return;
        }
        
        
     }
     printf("key is not found\n");

}
void binarysearch(int *arr,int key,int low,int height)
{   int found=0;
    while(low<=height){
        int mid=(low+height)/2;
        if(arr[mid]==key){
            printf("key is prasent at the index %d\n",mid);
            found=1;
            break;
        }
        else if(arr[mid]>key){
            height=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
    }
    if(found!=1)
    printf("key is not found\n");

    
}

int main(){
    int choice,n=0,key;
    int arr[32];
    while(1)
    {
        printf("1.input\n2.output\n3.linear search\n4.binar ysearch \n5.exit\n");
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
            case 3:
                {
                    printf("enter the key value\n");
                    scanf("%d",&key);
                    linearsearch(key,n,arr);
                    break;
                }
            case 4:
            {
                printf("enter the key to search\n");
                scanf("%d",&key);
                binarysearch(arr,key,0,n-1);
                break;

            }
            case 5:
                exit(0);
            
            default: 
                printf("enter the valid choice\n");
        }
    }
}