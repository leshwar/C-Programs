#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a=0,b=0,c=0;
    char x1,x;
    printf("Enter the number of candidates to vote");
    scanf("%d",&n);
    printf("Press 'A'/'B' for candidate A/B, 'Q' to quit");
     for(i=0;i<=n;i++)
    {
        scanf("%c",&x1);
        scanf("%c",&x);
        switch(x)
        {
            case'A':
               a=a+1;
               break;
            case'B':
               b=b+1;
               break;
            case'Q':
               break;
            default:
               c=c+1;
               break;
        }
    }
    printf("Votes for 'A'= %d\nVotes for 'B'= %d\nInvalid Votes= %d",a,b,c);
    getch();
    return 0;
}
               
                 
     
    
