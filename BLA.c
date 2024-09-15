// Including preprocessing directive
#include <stdio.h>
#include <graphics.h>

// Main function
int main()
{
	// Declaring variables 
	float x1,x2,y1,y2,m,dx,dy,p;
	
	// Asking for starting and ending points
	printf("Enter the co-ordinates of starting point:\n");
	scanf("%f %f",&x1,&y1);
	
	printf("Enter the co-ordinates of ending point:\n");
	scanf("%f %f",&x2,&y2);
	
	// Calculating dx and dy
	dx=x2-x1;
	dy=y2-y1;
	
	// Calculating slope of the line
	m=dy/dx;
	
	// Initiating graph function
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	// Putting the first pixel
	putpixel(x1,y1,4);
	
	// Checking whether the slope is positive or negative
	if (m>0)
	{
		// Checking if the slope is greater or less than 1
		if (fabs(m)<=1)
		{
			// Calculating value of p0
			p=2*dy-dx;
	
			while (x1!=x2 && y2!=y1)
			{
				// Comparing p with 0
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
			// Calculating value of p0
			p=2*dx-dy;
	
			while (x1!=x2 && y2!=y1)
			{
				// Comparing p with 0
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
		// Checking if the slope is greater or less than 1
		if (fabs(m)<=1)
		{
			// Calculating value of p0
			p=2*dy-dx;

			while (x1!=x2 && y2!=y1)
			{
				// Comparing p with 0
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
			// Calculating value of p0
			p=2*dx-dy;
	
			while (x1!=x2 && y2!=y1)
			{
				// Comparing p with 0
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
	
	delay(2000);
	closegraph();
	return 0;
}

