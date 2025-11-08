#include<stdio.h>
struct day
{
    int  date,month,year;
    char place[45];
    int time;
    int minits;
};
struct meeting
{
    int number;
    struct day meet; 
};
int main()
{
    int n,i;
    struct meeting  day1;
    printf("Enter the who many numbers days you meet : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the place name of day %d: ",i+1);
        scanf("%s", day1.meet.place);
        printf("date of that day :  ");
        scanf("%d%d%d",&day1.meet.date,&day1.meet.month,&day1.meet.year);
       
        
    

    }
     for(int i=0;i<n;i++){
         printf("%d/%d/%d",day1.meet.date,day1.meet.month,day1.meet.year);
         
     }
     
   
}
