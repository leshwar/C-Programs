#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3],i,j,x,y,z,temp;
    printf("Enter three numbers");
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
    }
    printf("Biggest number is %d%d%d%d%d\n",a[2],a[2],a[2],a[1],a[0]);
    printf("Smallest number is %d%d%d%d%d",a[0],a[0],a[0],a[1],a[2]);
    getch();
    return 0;
}
