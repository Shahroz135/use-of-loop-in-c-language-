//Progran to print the square and cube of first ten natural numbers
#include"stdio.h"
#include<conio.h>
void main()
{
int x,sq,cube;
clrscr();
x=1;
while (x<=5)
{
sq=x*x;
cube=x*x*x;
printf("\nsqare  of %d: %d",x,sq);
printf("\ncube  of %d: %d",x,cube);
x++;
}
getch();
}