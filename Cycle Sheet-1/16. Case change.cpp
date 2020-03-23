#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter the alphabet");
    scanf("%c",&x);
    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
       if(x>=65 && x<=90)
       {
           x=x+32;
       }
       else if(x>=97 && x<=122)
       {
           x=x-32;
       }
       printf("%c",x);
    }
    else
    {
       printf("Enter an alphabet");
    }   
    getch();
    return 0;
}
