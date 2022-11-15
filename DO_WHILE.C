//Program to gain first ten natural number in reverse order
#include"stdio.h"
#include<conio.h>
void main()
{
int count;
count=10;
clrscr();
do
{
printf("\n%d",count);
count--;
}
while (count>=1);
getch();
}