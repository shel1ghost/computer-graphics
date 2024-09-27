#include <stdio.h>
#include <graphics.h>

int main()
{
	float x1,x2,y1,y2,m,dx,dy,p;
	
	printf("Enter the co-ordinates of starting point:\n");
	scanf("%f %f",&x1,&y1);
	printf("Enter the co-ordinates of ending point:\n");
	scanf("%f %f",&x2,&y2);
	
	dx=x2-x1;
	dy=y2-y1;
	
	m=dy/dx;
	
	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,NULL);
    initwindow(500, 400);

	putpixel(x1,y1,4);
	
	if (m>0)
	{
		if (fabs(m)<=1)
		{
			p=2*dy-dx;
	
			while (x1!=x2 && y2!=y1)
			{
				if (p<0)
				{
					x1+=1;
					y1=y1;
					p+=2*dy;
				}
				else if (p>=0)
				{
					x1+=1;
					y1+=1;
					p+=(2*dy-2*dx);
				}
				putpixel(x1,y1,4);
			}
		}
		else if (fabs(m)>1)
		{
			p=2*dx-dy;
	
			while (x1!=x2 && y2!=y1)
			{
				if (p<0)
				{
					x1=x1;
					y1+=1;
					p+=2*dx;
				}
				else if (p>=0)
				{
					x1+=1;
					y1+=1;
					p+=(2*dx-2*dy);
				}
				putpixel(x1,y1,4);
			}
		}
	}
	else if (m<0)
	{
		if (fabs(m)<=1)
		{
			p=2*dy-dx;

			while (x1!=x2 && y2!=y1)
			{
				if (p<0)
				{
					x1-=1;
					y1=y1;
					p+=2*dy;
				}
				else if (p>=0)
				{
					x1-=1;
					y1+=1;
					p+=(2*dy-2*dx);
				}
				putpixel(x1,y1,4);
			}
		}
		else if (fabs(m)>1)
		{
			p=2*dx-dy;
	
			while (x1!=x2 && y2!=y1)
			{
				if (p<0)
				{
					x1=x1;
					y1+=1;
					p+=2*dx;
				}
				else if (p>=0)
				{
					x1-=1;
					y1+=1;
					p+=(2*dx-2*dy);
				}
				putpixel(x1,y1,4);
			}
		}
	}
	
	delay(10000);
	closegraph();
	return 0;
}

