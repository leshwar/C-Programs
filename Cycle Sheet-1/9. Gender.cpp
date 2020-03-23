#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char name[20],gender,m;
    
    printf("Enter name");
    scanf("%s",&name);
    
    printf("Enter gender");
    scanf("%s",&gender);
    if(gender=='m')
    {
        printf("Mr \t");
        for(i=0;name[i]!='\0';i++)
        printf("%s",name[i]);
        
    }
    else
    {
        for(i=0;name[i]!='\0';i++)
        printf("Ms %s",name[i]);
    }
    getch();
    return 0;
}
