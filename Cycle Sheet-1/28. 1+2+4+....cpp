#include<stdio.h>
#include<conio.h>
int main()
{
    int d,n,x=1,sum=1;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(d=1;d<n;d++)
    {
        x=x+d;
        sum=sum+x;
    }
    printf("Sum of the series is %d",sum);
    getch();
    return 0;
}
        
