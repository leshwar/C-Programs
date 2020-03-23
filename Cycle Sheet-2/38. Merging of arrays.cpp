#include<stdio.h>
#include<conio.h>
int main()
{
    int c[100],i,j,k,na,nb,nc,p=0,temp;
    printf("enter the number of elements in 'a'");
    scanf("%d",&na);
    printf("enter the elements ");
    for(i=0;i<na;i++)
    {
                      scanf("%d",&c[i]);
                      }
    printf("enter the no of elements in 'b'");
    scanf("%d",&nb);
    nc=na+nb;
    printf("enter the elements");
    for(i=na;i<nc;i++)
    {
                      scanf("%d",&c[i]);
                      }
 for(j=i+1;j<(nc-p);j++)
 {
                        if(c[i]==c[j])
                        {
                                      p=p+1;
                                      for(k=j;k<(nc-p);k++)
                                      {
                                                           c[k]=c[k+1];
                                                           }
 j=j-1;
}
}
for(i=0;i<(nc-p);i++)
{
                     for(j=i;j<(nc-p);j++)
                     {
                                          if(c[i]>c[j])
                     {
                                          temp=c[i];
                                          c[i]=c[j];
                                          c[j]=temp;}}}
                                          for(i=0;i<(nc-p);i++)
                                          {
                                                               printf("%d",c[i]);
                                                               }
                                          getch();
                                          return 0;
                                          }
