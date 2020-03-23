#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age greater than zero");
    scanf("%d",&age);
    if(age<=18)
    {
        printf("Minor");
    }
    else
    {
        printf("Major");
    }
    getch();
    return 0;
}
        
         
