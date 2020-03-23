#include<stdio.h>
#include<conio.h>
int main()
{
    char n,g;
    printf("Enter name");
    scanf("%c",&n);
    printf("Enter gender");
    scanf("%c",&g);
    if(g=='m')
    {
        printf("Mr%c",n);
    }
    else
    {
        printf("Ms%c",n);
    }
    getch();
    return 0;
}
