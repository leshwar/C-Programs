#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],x;
    int i;
    printf("Enter the text");
    gets(a);
    printf("Enter the letter to replace");
    scanf("%c",&x);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a')
        {
            a[i]=x;
        }
    }
    puts(a);
    getch();
    return 0;
}
    
