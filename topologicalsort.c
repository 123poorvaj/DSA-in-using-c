#include<stdio.h>
#include<stdlib.h>
int temp[10],k=0;
sort(int a[10][10],int id[10],int n);
int main(){
    int a[10][10],id[10],i,n,j;
    printf("enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        id[i]=0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            id[j]++;
        }
    }
    sort(a,id,n);
    if(k!=n){
        printf("topological sort not applicable");
        exit(0);
    }
    else{
        printf("topological short\n");
        for(i=0;i<n;i++){
            printf("%d\t",temp[i]);
        }
    }
}

sort(int a[10][10],int id[10],int n){
    int i,j;
    for(i=1;i<=n;i++){
        if(id[i]==0){
            id[i]=-1;
            temp[k]=i;
            k++;
            for(j=1;j<=n;j++){
                if(a[i][j]==1 && id[j]!=-1)
                id[j]--;
            }
            i=0;

        }
    }
}