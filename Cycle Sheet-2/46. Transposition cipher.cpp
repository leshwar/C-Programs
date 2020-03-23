#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[10][10]={"HELLO","WORLD"};
    for(j=0;j<5;j++)
    {
       for(i=0;i<2;i++)
       {
          printf("%c",a[i][j]);
       }
    }
    getch();
    return 0;
}
    
