#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int x1,y1,x2,y2,dx,dy,steps;

	printf("Enter the initial point\n");
	scanf("%d %d",&x1,&y1);

	printf("Enter the final point\n");
	scanf("%d %d",&x2,&y2);

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if (dx>=dy)
	{
		steps=dx;
	}
	else
	{
		steps=dy;
	}

	dy/=steps;
	dx/=steps;

	//int gd=DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;

	//initgraph(&gd,&gm,NULL);
    initwindow(400, 300);

	for (int i = 0; i < steps; i++)
	{
		putpixel(x1,y1,5);
		x1+=dx;
		y1+=dy;
		delay(100);
	}

	delay(10000);
	closegraph();
	return 0;
}

