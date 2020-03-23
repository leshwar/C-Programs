#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student//NO ,NAME, DOB, MARKS IN 5 SUBJECTS, TOTAL, GRADE
{
       int no;
       char name[10];
       struct
       {
             int date;
             char month[10];
             int year;
       }dob;
       float marks[5];
       float total;
       char grade;
}s[3];
void name(struct student s[]);
void dob(struct student s[]);
int main()
{
   int i,j;
   printf("Enter the student record-student no, name, dob, marks in 5 subs.\n");
   for(i=0;i<3;i++)
   {
      printf("%d:- ",(i+1));
      scanf("%d%s %d%s%d",&s[i].no,&s[i].name,&s[i].dob.date,&s[i].dob.month,&s[i].dob.year);
      s[i].total=0;
      for(j=0;j<5;j++)
      {
         scanf("%f",&s[i].marks[j]);
         s[i].total=s[i].total+s[i].marks[j];
      }
      if(s[i].total>450)
         s[i].grade='A';
      else if(s[i].total>400 && s[i].total<=450)
         s[i].grade='B';
      else if(s[i].total>300 && s[i].total<=400)
         s[i].grade='C';
      else
         s[i].grade='D';
   }
   name(s);
   dob(s);
   getch();
   return 0;
}
void name(struct student s[])
{
     int i,j;
     char temp[10];
     for(i=0;i<3;i++)
     {
        for(j=i+1;j<3;j++)
        {
           if(strcmp(s[i].name,s[j].name)>0)
           {
              strcpy(temp,s[i].name);
              strcpy(s[i].name,s[j].name);
              strcpy(s[j].name,temp);
           }
        }
     }
     for(i=0;i<3;i++)
     {
        printf("%s\n",s[i].name);
     }
}
void dob(struct student s[])
{
    int i,j;
     char temp[10];
     for(i=0;i<3;i++)
     {
        for(j=i+1;j<3;j++)
        {
           if((s[i].dob.year-s[j].dob.year)>0)
           {
              strcpy(temp,s[i].name);
              strcpy(s[i].name,s[j].name);
              strcpy(s[j].name,temp);
           }
        }
     }
     for(i=0;i<3;i++)
     {
        printf("%s\n",s[i].name);
     }
} 
