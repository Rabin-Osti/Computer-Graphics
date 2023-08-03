#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main()
{
    int xc,yc,rx,ry,x,y,p1,p2,dx,dy;
    int gd=DETECT,gm=0;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter center, major axis and minor axis of ellipse: ");
    scanf("%d%d%d%d",&xc,&yc,&rx,&ry);
    x=0;
    y=ry;
  //  putpixel(x,y,WHITE);
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;

    p1=ry*ry-rx*rx*ry+(0.25)*rx*rx;

    while(dx<dy)
    {
	if(p1>=0)
	{
	    x=x+1;
	    y=y-1;
	    dx=2*ry*ry*x;
	    dy=2*rx*rx*y;
	    p1=p1+dx-dy+ry*ry;
	}
	else{
	    x=x+1;
	    dx=2*ry*ry*x;
	    p1=p1+dx+ry*ry;
	}


	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc-y,WHITE);

    }

    p2=ry*ry*pow((x+0.5),2)+rx*rx*pow((y-1),2)-rx*rx*ry*ry;

    while(y>0)
    {
	if(p2<=0)
	{
	    x=x+1;
	    y=y-1;
	    dx=2*ry*ry*x;
	    dy=2*rx*rx*y;
	    p2=p2+dx-dy+rx*rx;
	}
	else{
	    y=y-1;
	    dy=2*rx*rx*y;
	    p2=p2-dy+rx*rx;
	}
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
    }

    getch();
    closegraph();

    return 0;
}