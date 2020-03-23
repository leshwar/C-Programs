#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,x;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
       if(a[i]==x)
       {
         break;
       }
    }
    printf("location of required element is %d",i);
    getch();
    return 0;
}
