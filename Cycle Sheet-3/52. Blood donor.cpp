#include<stdio.h>
#include<conio.h>
#include<string.h>
struct blood
{
       char name[10];
       int age;
       char address[20];
       char group[2];
}d[5];
int main()
{
    int i,a;
    char b[5];
    for(i=0;i<5;i++)
    {
       printf("Enter the donor info:\n");
       scanf("%s%d%s%s",&d[i].name,&d[i].age,&d[i].address,&d[i].group);
    }
    printf("Enter the age");
    scanf("%d",&a);
    printf("Enter the blood group");
    fflush(stdin);
    gets(b);
    printf("The list of blood donor(s) is:\n");
    for(i=0;i<5;i++)
    {
      if((d[i].age<a) && (strcmp(d[i].group,b)==0))
      {
         printf("%s\n",d[i].name);
      }
    }
    getch();
    return 0;
}
