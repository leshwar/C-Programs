#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,p;
    printf("Enter the 2 numbers to be multiplied");
    scanf("%d%d",&m,&n);
    p=m;
    for(i=1;i<n;i++)
    {
        p=p+m;
    }
    printf("The product is %d",p);
    getch();
    return 0;
}
