#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        x=n*i;
        printf("%dx%d=%d\n",n,i,x);
    }
    getch();
    return 0;
}
            
