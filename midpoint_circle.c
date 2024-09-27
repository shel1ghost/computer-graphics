#include <stdio.h>
#include <graphics.h>

int main()
{
	float x1,y1,radius,p,x,y;

	printf("Enter the co-ordinates of center of the circle\n");
	scanf("%f %f",&x1,&y1);
	
	printf("Enter the radius of the center of the circle\n");
	scanf("%f",&radius);

	x=0;
	y=radius;
	p=1-radius;

	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,NULL);
    initwindow(500, 400);
	putpixel(x+x1,y+y1,7);

	while (x <= y)
	{
		if (p < 0)
		{
			x++;
			putpixel(x+x1,y+y1,2);
			putpixel(y+x1,x+y1,2);
			putpixel(-y+x1,x+y1,2);
			putpixel(-x+x1,y+y1,2);
			putpixel(-x+x1,-y+y1,2);
			putpixel(-y+x1,-x+y1,2);
			putpixel(y+x1,-x+y1,2);
			putpixel(x+x1,-y+y1,2);
			p+=(2*x+1);
		}

		else if (p >= 0)
		{
			x++;
			y--;
			putpixel(x+x1,y+y1,2);
			putpixel(y+x1,x+y1,2);
			putpixel(-y+x1,x+y1,2);
			putpixel(-x+x1,y+y1,2);
			putpixel(-x+x1,-y+y1,2);
			putpixel(-y+x1,-x+y1,2);
			putpixel(y+x1,-x+y1,2);
			putpixel(x+x1,-y+y1,2);
			p+=(2*x-2*y+1);
		}
	}
	
	delay(10000);
	closegraph();
	return 0;
}

