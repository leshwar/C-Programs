#include<stdio.h>
#include<conio.h>
void swap(int *p, int *q);
int main()
{
    int a,b;
    printf("Enter the 2 nos. ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    getch();
    return 0;
}
void swap(int *p, int *q)
{
     int temp;
     temp=*p;
     *p=*q;
     *q=temp;
     printf("%d %d",*p,*q);
}
