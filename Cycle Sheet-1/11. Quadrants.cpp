#include<stdio.h>
#include<conio.h>
int main()
{
    float x,y;
    printf("Enter the x-coordinate");
    scanf("%f",&x);
    printf("Enter the y-coordinate");
    scanf("%f",&y);
    if(x==0||y==0)
    {
                if(x==0&&y==0)
                {
                       printf("Point is on origin");
                }
                else if(y==0)
                {
                       printf("point is on x-axis");
                }
                else
                {
                       printf("Point is on y-axis");
                }
    }
    else
    {
                if(x>0&&y>0)
                {
                       printf("Point is in first quadrant");
                }
                else if(x<0&&y>0)
                {
                        printf("Point is in second quadrant");
                }
                else if(x<0&&y<0)
                {
                        printf("Point is in third quadrant");
                }
                else
                {
                        printf("Point is in fourth quadrant");
                }
    }
getch();
return 0;
}
