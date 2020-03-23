#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort(char a[][100], int j);
int main()
{
    char a[100][100],b[100],temp[100];
    int n,i,j=0,k=0,l,m=0;
    printf("Enter the text-");
    gets(b);
    n=strlen(b);
    for(i=0;i<=n;i++)
    {
       if(b[i]==' ' || b[i]=='\0')
       {
          for(l=0;l<(i-m);l++)
          {
             a[j][l]=b[k];
             k++;
          }
          a[j][l]='\0';
          j++;
          k=i+1;
          m=k;
       }
    }
    sort(a,j);
    getch();
    return 0;
}
void sort(char a[][100],int j)
{
     int i,k;
     char temp[100];
     for(i=0;i<j;i++)
     {
       for(k=i+1;k<j;k++)
       {
          if(strcmp(a[i],a[k])>0)
          {
             strcpy(temp,a[i]);
             strcpy(a[i],a[k]);
             strcpy(a[k],temp);
          }
       }
    }
    for(i=0;i<j;i++)
    {
       printf("%s\n",a[i]);
    }
}
