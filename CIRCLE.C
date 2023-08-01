#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd=DETECT,gm=0;
   int xc,yc,r,x,y,p;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   printf("Enter center coordinate and radius: ");
   scanf("%d%d%d",&xc,&yc,&r);

   x=0;
   y=r;
   
   // p=(5/4)-r;
   p=1-r;

   while (x <= y) {
	
	putpixel(xc + x, yc + y, WHITE);
	putpixel(xc - x, yc + y, WHITE);
	putpixel(xc + x, yc - y, WHITE);
	putpixel(xc - x, yc - y, WHITE);
	putpixel(xc + y, yc + x, WHITE);
	putpixel(xc - y, yc + x, WHITE);
	putpixel(xc + y, yc - x, WHITE);
	putpixel(xc - y, yc - x, WHITE);

	x++;

	if (p < 0) {
	    p = p + 2 * x + 1;
	} 
	else {
	    y--;
	    p = p + 2 * (x - y) + 1;
	}
    }

   getch();
   closegraph();
   return 0;
}