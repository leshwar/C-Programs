#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char s1[10];
    char s2[10];
    printf("Enter the word");
    scanf("%s",&s1);
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp(s1,s2)==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    getch();
    return 0;
}
