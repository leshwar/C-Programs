#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char c;
    printf("Enter the rows upto which triangle must increase");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
             printf(" ");
        }
        for(j=1;j<=i;j++)
        {
             printf("*");
        }
        for(j=i-1;j>0;j--)
        {
             printf("*");
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf(" ");
        }
        for(j=n-i;j>0;j--)
        {
             printf("*");
        }
        for(j=1;j<n-i;j++)
        {
             printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
