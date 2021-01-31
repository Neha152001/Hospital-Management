#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int count=0;

typedef struct {
    int d,m,y;
}date;

struct patient{
    char name[20];
    int id;
    char specialist[20];
    bool emergency;
    int bill_amt;
    date d;
}p[100];

void insert()
{
   printf("Enter patient name :" );
   gets(p[count].name);
   printf("Enter patient ID :" );
   scanf("%d",&p[count].id);
    printf("Enter patient specailist :" );
   gets(p[count].specialist);
    printf("Enter date :" );
   scanf("%d %d %d",&p[count].d.d,&p[count].d.m,&p[count].d.y);
   }


   int main()
   {
       char ch;
       printf("1.Create new profile\nEnter (y/n) :");
       scanf("%c",&ch);
       if(ch=='y')
        insert();
   }

