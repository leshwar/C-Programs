#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5][5],i,j,k,y=2005,m=1;
    printf("Enter the details");
    for(i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
          scanf("%d",&a[i][j]);
       }
    }
    printf("Enter 1 for model1; 2 for model2; 3 for model3; 4 for model4; 5 for model5; 6 for year 2005; 6 for year 2005; 7 for year 2006; 8 for year 2007; 9 for year 2008; 10 for year 2009");
    scanf("%d",&k);
    if(k>0 && k<6)
    {
       for(i=0;i<5;i++)
       {
          printf("Sales during %d is %d\n",y,a[i][k-1]);
          y++;
       }
    }
    if(k>5 && k<11)
    {
        for(j=0;j<5;j++)
        {
            printf("Sales of model %d is %d\n",m,a[k-6][j]);
            m++;
        }
    }
    getch();
    return 0;
}
       
