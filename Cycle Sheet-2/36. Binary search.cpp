#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,x,temp,low=0,high,mid;
    printf("Enter the number of elements");
    scanf("%d",&n);
    high=n-1;
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(a[j]<a[i])
          {
              temp=a[j];
              a[j]=a[i];
              a[i]=temp;
          }
       }
    }
    printf("Enter the element to be searched");
    scanf("%d",&x);
    while(low<high)
    {
       mid=(low+high)/2;
       if(a[mid]==x)
       {
          printf("Location of required element is %d",mid);
          break;
       }
       if(x<a[mid])
       {
          high=mid+1;
       }
       if(x>a[mid])
       {
          low=mid+1;
       }
    }
    getch();
    return 0;
}
