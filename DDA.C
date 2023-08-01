#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
   int gd=DETECT,gm=0;
   int x1,y1,x2,y2,dx,dy,steps,ix,iy,i,x,y;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   printf("Enter starting and ending points: ");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   dx=x2-x1;
   dy=y2-y1;
   if(abs(dx)>abs(dy))
   {
      steps=abs(dx);
   }else{
      steps=abs(dy);
   }

   //ix = increase in x
   ix=dx/steps;
   //iy = increase in y
   iy=dy/steps;

   x=x1;
   y=y1;
   putpixel(x,y,WHITE);

   while(x!=x2)
   {
      x=x+ix;
      y=y+iy;
      putpixel(x,y,WHITE);
   }

   getch();
   closegraph();
   return 0;
}