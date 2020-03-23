#include<stdio.h>
#include<conio.h>
#include<string.h>
void shift(char a[]);
int main()
{
    char a[10];
    int i,n;
    printf("Enter the text");
    scanf("%s",&a);
    printf("Enter the no of times to shift");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       shift(a);
    }
    printf("%s",a);
    getch();
    return 0;
}
void shift(char a[]) 
{
     char temp,i;
     int l;
     l=strlen(a);
     temp=a[l-1];
     for(i=1;i<l;i++)
     {
        a[l-i]=a[l-i-1];
     }
     a[0]=temp;
}
     
