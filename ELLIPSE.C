#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd=DETECT,gm=0;
   int xc,yc,a,b,x,y,d;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   printf("Enter center of ellipse, major axis and minor axis respectively: ");
   scanf("%d%d%d%d",&xc,&yc,&a,&b);

   x=0;
   y=b;
   d = b*b - a*a * b + a*a / 4;

      while (2*b*b * x < 2*a*a * y) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (d >= 0) {
            y--;
            d -= 4*a*a * y;
        }

        x++;
        d += 2*b*b * x + b*b;
    }

    d = b*b * (x + 0.5) * (x + 0.5) + a*a * (y - 1) * (y - 1) - a*a * b*b;

    while (y >= 0) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (d <= 0) {
            x++;
            d += 4*b*b * x;
        }

        y--;
        d += 2*a*a * y - a*a;
    }

   
   getch();
   closegraph();
   return 0;
}




