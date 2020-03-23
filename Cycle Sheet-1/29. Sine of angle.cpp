
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,k,a,n;
    float x,p,sum=0;
    printf("Enter the angle in degrees");
    scanf("%f",&x);
    printf("Enter the number of terms in formula");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=(2*i-1);j++)
        {
             a=a*j;
        }
        j=j-1;
        p=pow(-1,i-1)*pow(x,j)/a;
        sum=sum+p;
    }
    printf("sin%f=%f",x,sum);
    getch();
    return 0;
}
        
