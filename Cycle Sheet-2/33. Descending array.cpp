#include<stdio.h>
#include<conio.h>
int main()
{
    float h[]={5.3, 5.2, 5.4, 5.1, 5.9, 5.8, 5.7, 5.6, 5.0, 5.5};
    float temp;
    int i,j,k;
    for(j=0;j<9;++j)
    {
        for(i=0;i<9;++i)
        {
            if(h[i]<h[j])
            {
               temp=h[i];
               h[i]=h[j];
               h[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%f ",h[i]);
    }
    printf("\nEnter the value of K");
    scanf("%d",&k);
    printf("Kth greatest element is %f\n",h[k-1]);
    getch();
    return 0;
}
    
