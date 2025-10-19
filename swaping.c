// Online C compiler to run C program online
#include<stdio.h>

void swapwithaddress(int  *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

void swapewithoutaddress(int n1,int n2){
    int temp;
    temp=n1;
    temp= n2;
    n2=temp;
}

void main(){
    int a=20,b=30;
    swapewithoutaddress(a,b);
    printf("after swaping without address\n");
    printf("a=%d\nb=%d\n",a,b);
    
    swapwithaddress(&a,&b);
    printf("swaping with address\n");
    printf("a=%d\nb=%d\n",a,b);
}