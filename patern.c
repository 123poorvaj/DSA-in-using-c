#include<stdio.h>

char str[50],pat[50],rep[50],ans[50];
int i,j,m,c,k,floag=0;
void pattern();
 void main(){
    printf("enter the stating string");
    sacnf('%s',str);
    printf("enter the patren string");
    scanf("%s",pat);
    printf("enter the repalase sting");
    scanf("%s",rep);
    pattern();
 }

void patter(){
    c=m=i=j=0;
    while(str[c]!='\0'){
        if(str[m]==pat[i]){
            i++;
            m++;
            if(pat[i]=='\0'){
                floag=1;
                for(k=0;rep[k]!='\0';k++,j++)
                ans[j]=rep[k];
                i=0;
                c=m;
            }
        }
        else {
            ans[j]=str[c];
            c++;
            j++;
            i=0;
            m=c;
        }
    }
    if(floag==0){
        prinf("patteren not found");

    }
    else{
        ans[j]='\0';
        printf("result : %s",ans);
    }

}