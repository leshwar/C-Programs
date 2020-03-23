#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char username[10][20]={"teja","abhi","kundu"}, password[10][20]={"hai","hello","hey"};
    char a[20],b[20];
    int i,flag=0,k=1;
    x:
    printf("Enter the username");
    scanf("%s",&a);
    printf("Enter the password");
    scanf("%s",&b);
    while(k<=3)
    {
       for(i=0;i<10;i++)
       {
          if(strcmp(a,username[i])==0)
          {
             if(strcmp(b,password[i])==0)
             {
                printf("Access Graned");
                flag=1;
                k++;
             }
          }
       }
       if(flag==0)
       {
          printf("Username/password is incorrect. Please try again!\n");
          goto x;   
       }
    }
    getch();
    return 0;
}
    
