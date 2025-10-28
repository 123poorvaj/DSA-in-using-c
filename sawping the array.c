#include<stdio.h>
int main(){
    int n,arry[60],i,low,h;
    int *pp=&arry[60];
    printf("enter how many elenets you want to store:");
    scanf("%d",&n);
    printf("enter the arry elements\n");
    for(int i=0;i<n;i++){
     scanf("%d",&arry[i]);
    }
    printf("before swaping\n");
    for(int i=0;i<n;i++){
         printf(" %d \t ",(arry[i]));
    }
    printf("\n==========================\n");
    printf("After sawping\n");
    low=0;
    h=n-1;
    while(low<h){
        int temp=arry[low];
        arry[low]=arry[h];
        arry[h]=temp;
        low++;
        h--;
    }
    for(int i=0;i<n;i++){
         printf(" %d \t ",(arry[i]));
    }



}