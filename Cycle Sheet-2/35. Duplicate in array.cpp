#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,j,k,n,count=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-count;i++)
    {
       for(j=i+1;j<n-count;j++)
       {
           if(a[i]==a[j])
           {
               count=count+1;
               for(k=j;k<(n-count);k++)
               {
                   a[k]=a[k+1];
               }
               j=j-1;
           }
       }
    }
    for(i=0;i<n-count;i++)
    {
       printf("%d ",a[i]);
    }
    getch();
    return 0;
}
               

