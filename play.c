#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char a;
clrscr();
scanf("%c",a);
if(isalpha(a))
{
printf("False");
}
else
{
printf("True");
}
getch();
}
