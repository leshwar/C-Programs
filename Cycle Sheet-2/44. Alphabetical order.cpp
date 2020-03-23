#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char name[10][20],temp[20];
    printf("Enter the no of names");
    scanf("%d",&n);
    printf("Enter the names");
    for(i=0;i<n;i++)
    {
       scanf("%s",&name[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if( strcmp(name[i],name[j])>0)
           {
              strcpy(temp,name[i]);
              strcpy(name[i],name[j]);
              strcpy(name[j],temp);
           }
       }
    }
    printf("The order is");
    for(i=0;i<n;i++)
    {
       printf("%s, ",name[i]);
    }
    getch();
    return 0;
}
