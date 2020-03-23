#include<stdio.h>
#include<conio.h> 
#include<string.h>
int main()
{
    int x,i=0;
    char s1[10],s2[10];
    char *p1,*p2;
    printf("Enter the 2 strings");
    scanf("%s%s",&s1,&s2);
    p1=s1;
    p2=s2;
    printf("Press '1' for strcat, '2' for strcpy");
    scanf("%d",&x);
    if(x==1)
    {
       strcat(s1,s2);
       while(*(p1+i)!='\0')
       {
          printf("%c",*(p1+i));
          i++;
       }
       printf("\n");
       i=0;
       while(*(p2+i)!='\0')
       {
          printf("%c",*(p2+i));
          i++;
       }
    }
    if(x==2)
    {
       strcpy(p1,p2);
       while(*(p1+i)!='\0')
       {
          printf("%c",*(p1+i));
          i++;
       }
       i=0;
       printf("\n");
       while(*(p2+i)!='\0')
       {
          printf("%c",*(p2+i));
          i++;
       }
    }
    getch();
    return 0;
}
    
