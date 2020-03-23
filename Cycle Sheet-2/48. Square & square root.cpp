#include<stdio.h>
#include<conio.h>
#include<math.h>
int sq(int n);
float sqrt(int n);
int main()
{
    float n,y;
    int x;
    x:
    printf("Enter the number");
    scanf("%f",&n);
    if((n/(int)n)!=1)
    {
        printf("Not an integer\n");
        goto x;
    }
    x=sq(n);
    printf("Square is %d\n",x);
    y=sqrt(n);
    printf("Square root is %f\n",y);
    getch();
    return 0;
}
int sq(int n)
{
      n=n*n;
      return n;
}
float sqrt(int n)
{
      n=sqrt(n);
      return n;
}
    
    
