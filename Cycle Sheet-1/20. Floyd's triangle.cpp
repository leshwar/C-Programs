#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)/*working for no of rows*/
    {
       for(j=1;j<=i;j++)/*working for no of elements in each row*/
       {
          k=k+1;
          printf("%d ",k);
       }
       printf("\n\n");
    }
    getch();
    return 0;
}
       
