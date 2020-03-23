#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i,j,r1,r2,c1,c2;
    printf("Enter the no of rows & columns of 'a' & 'b'");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(r1==r2 && c1==c2)
    {
       printf("Enter the elements of 'a'");
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c1;j++)
          {
             scanf("%d",(*(a+i)+j));
          }
       }
       printf("Enter the elements of 'b'");
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c1;j++)
          {
             scanf("%d",(*(b+i)+j));
          }
       }
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c1;j++)
          {
             *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
             printf("%d",*(*(c+i)+j));
          }
       }
    }
    else
    {
       printf("The rows & columns are not equal");
    }
    getch();
    return 0;
}
