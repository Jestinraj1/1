#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int polyx[6]={540,590,570,510,490,540};
int polyy[6]={220,270,320,320,270,220};
int x,y,polysides=6;
int pointinpolygon();
void drawpolygon();
void main()
{int c,gd=DETECT,gm;
printf("Enter the x & y axis values: ");
scanf("%d%d",&x,&y);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
drawpolygon();
putpixel(x,y,WHITE);
c=pointinpolygon();
if(c==0)
printf("\nOutside");
else
printf("\nInside");
getch();
closegraph();
}
void drawpolygon()
{
int i,j;
for(i=0;i<polysides-1;i++)
{
j=i+1;
line(polyx[i],polyy[i],polyx[j],polyy[j]);
}
line(polyx[i],polyy[i],polyx[0],polyy[0]);
}
int pointinpolygon()
{
int i,j=polysides-1,oddnodes=0;
for(i=0;i<polysides;i++)
{
if((polyy[i]<y&&polyy[j]>=y)||(polyy[j]<y&&polyy[i]>=y)){
if(polyx[i]+(y-polyy[i])/(float)(polyy[j]-polyy[i])*(polyx[j]-polyx[i])<x)
{
oddnodes=!oddnodes;
}
}
j=i;
}
return oddnodes;
}

