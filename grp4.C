#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x=100,y=250,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(5);
setfillstyle(9,0);
for(i=1;i<325;i++)
{
line(x,y-25,x+150,y-25);
line(x,y,x+25,y);
line(x,y,x,y-25);
fillellipse(x+37,y,12,12);
fillellipse(x+113,y,12,12);
line(x+150,y,x+125,y);
line(x+101,y,x+49,y);
line(x+150,y-25,x+150,y);
line(x,y-50,x+25,y-65);
line(x+25,y-65,x+120,y-65);
line(x+120,y-65,x+150,y-25);
line(x+40,y-65,x+40,y-25);
line(x+80,y-65,x+80,y-25);
line(x,y-25,x,y-50);
sound(150);
delay(10);
x+=1;
if(i!=324)
clrscr();
}
nosound();
getch();
closegraph();
}