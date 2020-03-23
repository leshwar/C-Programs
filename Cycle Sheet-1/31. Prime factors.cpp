#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,count,p;
    printf("Enter the number");
    scanf("%d",&n);
    printf("1 ");
    for(p=2;p<=n;p++)
    {
        for(count=0,i=1;i<p;i++)
        {
            if(p%i==0)
            {            
                count=count+1;
            }
        }
        if(count==1)
        {
            if(n%p==0)
            {
               printf("%d ",p);
            }
        }
    }
    getch();
    return 0;
}
        
            
               
            
