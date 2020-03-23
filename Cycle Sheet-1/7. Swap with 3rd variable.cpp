#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter a ");
    scanf("%f",&a);
    printf("Enter b ");
    scanf("%f",&b);
    c=a;
    a=b;
    printf("a=%f, b=%f",a,c);
    getch();
    return 0;
}
