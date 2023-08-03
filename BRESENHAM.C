#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd=DETECT,gm=0;
   int x1,y1,x2,y2,ix,iy,dy,dx,p,i;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   printf("Enter starting and ending point: ");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   
   dx=abs(x2-x1);
   dy=abs(y2-y1);
   
   if(x2>x1)
   {
      ix=1;
   }else{
      ix=-1;
   }
   
   if(y2>y1)
   {
      iy=1;
   }else{
      iy=-1;
   }

   putpixel(x1,y1,WHITE);

   if(dx>dy)
   {
      p = 2*dy-dx;
      for(i=0;i<=dx;i++)
      {
	 if(p>=0)
         {
            x1=x1+ix;
            y1=y1+iy;
            p=p+2*dy-2*dx;
         }
         else{
            x1=x1+ix;
            y1=y1;
            p=p+2*dy;
         }
         putpixel(x1,y1,WHITE);
      }
   }
   else{
      p = 2*dx-dy;
      for(i=0;i<=dy;i++)
      {
         if(p>0)
         {
            x1=x1+ix;
            y1=y1+iy;
            p=p+2*dx-2*dy;
         }
         else{
            x1=x1;
            y1=y1+iy;
            p=p+2*dx;
         }
         putpixel(x1,y1,WHITE);
      }

   }
   getch();
   closegraph();
   return 0;
}