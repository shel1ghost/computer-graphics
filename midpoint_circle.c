// Including PreProcessor directives
#include <stdio.h>
#include <graphics.h>

// Main Function
int main()
{
	// Declaring the variables
	float x1,y1,radius,p,x,y;

	// Asking for the inputs from the user
	printf("Enter the co-ordinates of center of the circle\n");
	scanf("%f %f",&x1,&y1);
	
	// Enter the radius of the circle
	printf("Enter the radius of the center of the circle\n");
	scanf("%f",&radius);

	// Calculating the initial point and p0
	x=0;
	y=radius;
	p=1-radius;

	// Initialize the graphics
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	putpixel(x+x1,y+y1,7);

	// By Mid-point of the circle algorithm
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
	
	// Concluding the program
	delay(2000);
	closegraph();
	return 0;
}

