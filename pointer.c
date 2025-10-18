#include<stdio.h>
void main()
{
    int a[4]={45,12,34,48};
    
    for (int i=0;i<4;i++){
    printf("%d\n",a[i]); //this line gives values from the arrary
    }
    printf("\n");
    
    for (int i=0;i<4;i++){
    printf("%d\n",*(a+i));//this line gives values from the arrary
    }
    printf("\n");
    for (int i=0;i<4;i++){
    printf("%p\n",a-i);/*this line gives address of the arrary in dicrement form ptr--; or  ptr=(prt - i*(size of the data)*/
    }
    
    printf("\n");
    
    for (int i=0;i<4;i++){
    printf("%p\n",(a+i));//this line gives address of the arrary in increment form ptr++;  ptr=(prt + i*(size of the data))
    }
    
  
}