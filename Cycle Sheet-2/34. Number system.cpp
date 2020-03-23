#include<stdio.h>
#include<conio.h>
int main()
{
    int d,o,b,x;
    char p;
    printf("Enter the decimal number");
    scanf("%d",&d);
    printf("Press 'o'/'b'/'x' for octal/binary/hexadecimal convertion");
    scanf("%c",&p);
    if(p==o)
    {
       printf("Octal system is %o",d);
    } 
    if(p==b)
    {
       printf("Binary system is %c",d);
    }
    if(p==x)
    {
       printf("Hexadecimal system is %x",d);
    }
    getch();
    return 0;
}
