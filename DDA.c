// DDA algorithm to draw a line.

// Including preprocessor directives.
#include <stdio.h>
#include <graphics.h>
#include <math.h>

// Declaring main function.
int main(int argc, char const *argv[])
{
	// Declaring variables.
	int x1,y1,x2,y2,dx,dy,steps;

	// Asking for initial point.
	printf("Enter the initial point\n");
	scanf("%d %d",&x1,&y1);

	// Asking for final point.
	printf("Enter the final point\n");
	scanf("%d %d",&x2,&y2);

	// Calculating the differences between initial and final points.
	dx=abs(x2-x1);
	dy=abs(y2-y1);

	// Determining the number of steps.
	if (dx>=dy)
	{
		steps=dx;
	}
	else
	{
		steps=dy;
	}

	// Determining the increment per step.
	dy/=steps;
	dx/=steps;

	// Initializing graphics variables.
	int gd=DETECT,gm;

	// Initializing graphics.
	initgraph(&gd,&gm,NULL);

	// Drawing individual pixels in a loop.
	for (int i = 0; i < steps; i++)
	{
		putpixel(x1,y1,5);
		x1+=dx;
		y1+=dy;
		delay(100);
	}

	// Concluding the program.
	delay(1000);
	closegraph();
	return 0;
}

