#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int c=0,w=0,l=0;
    char ch;
    FILE *fp;
    fp=fopen("kk.c","r");
    if(fp==NULL)
    {
       printf("Not opened!\n");
    }
    ch=fgetc(fp);
    while(ch!=EOF)
    {
       c++;
       if(ch==' ')
       {   
          w++;
       }
       if(ch=='\n')
       {
          l++;
          w++;
          c--;
       }
       ch=fgetc(fp);
    }
    fclose(fp);
    printf("No of characters are %d\n",c);
    printf("No of words are %d\n",w);
    printf("No of lines are %d\n",l);
    getch();
    return 0;
}
