#include<stdio.h>
#include<graphics.h>
void translation(int x1, int x2, int y1, int y2, int x3, int y3, int tv);
void rotation(int x1, int x2, int y1, int y2, int x3, int y3, float angle);
void scaling(int x1, int x2, int y1, int y2, int x3, int y3, int sx, int sy);
int main(){
    int x1, x2, y1, y2, x3, y3, tv, sx, sy;
    float angle;
    printf("What do you want to perform?\n");
    printf("1. Translation\n");
    printf("2. Rotation\n");
    printf("3. Scaling\n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the value of x1, x2: ");
            scanf("%d%d", &x1, &x2);
            printf("Enter the value of y1, y2: ");
            scanf("%d%d", &y1, &y2);
            printf("Enter the value of x3, y3: ");
            scanf("%d%d", &x3, &y3);
            printf("Enter the translation vector: ");
            scanf("%d", &tv);
            translation(x1, x2, y1, y2, x3, y3, tv);
            break;
        case 2:
            printf("Enter the value of x1, x2: ");
            scanf("%d%d", &x1, &x2);
            printf("Enter the value of y1, y2: ");
            scanf("%d%d", &y1, &y2);
            printf("Enter the value of x3, y3: ");
            scanf("%d%d", &x3, &y3);
            printf("Enter the angle of rotation: ");
            scanf("%f", &angle);
            rotation(x1, x2, y1, y3, x3, y3, angle);
            break;
        case 3:
            printf("Enter the value of x1, x2: ");
            scanf("%d%d", &x1, &x2);
            printf("Enter the value of y1, y2: ");
            scanf("%d%d", &y1, &y2);
            printf("Enter the value of x3, y3: ");
            scanf("%d%d", &x3, &y3);
            printf("Enter the the value of sx and sy: ");
            scanf("%d%d", &sx, &sy);
            scaling(x1, x2, y1, y2, x3, y3, sx, sy);
        default:
            printf("Invalid Choice!");
    }
}

void translation(int x1, int x2, int y1, int y2, int x3, int y3, int tv){
    // Initializing graphics variables
	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,NULL);
    initwindow(600, 500);

    // Drawing the initial triangle
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	delay(1000);

	// Translating and displaying the triangle
	x1+=tv;
	x2+=tv;
	x3+=tv;
	
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	delay(10000);
    closegraph();
}

void scaling(int x1, int x2, int y1, int y2, int x3, int y3, int sx, int sy){
    // Initializing graphics variables
	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,NULL);
    initwindow(600, 500);

    // Scaling and displaying the translated triangle
	x1*=sx;y1*=sy;
	x2*=sx;y2*=sy;
	x3*=sx;x3*=sy;

    line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	// Concluding the program
	delay(10000);
	closegraph();
}

void rotation(int x1, int x2, int y1, int y2, int x3, int y3, float angle){
    //int gd=DETECT,gm;
    float x1_ref, x2_ref, x3_ref, y1_ref, y2_ref, y3_ref;
    //initgraph(&gd,&gm,NULL);
    initwindow(600,500);
	cleardevice();
	setcolor(2);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	floodfill((x1+x2+x3)/3,(y1+y2+y3)/3,2);
	
	setcolor(3);
	x1_ref=x1*cos(angle)-y1*sin(angle);
	y1_ref=x1*sin(angle)+y1*cos(angle);
	
	x2_ref=x2*cos(angle)-y2*sin(angle);
	y2_ref=x2*sin(angle)+y2*cos(angle);
	x3_ref=x3*cos(angle)-y3*sin(angle);
	y3_ref=x3*sin(angle)+y3*cos(angle);
	line(x1_ref,y1_ref,x2_ref,y2_ref);
	line(x2_ref,y2_ref,x3_ref,y3_ref);
	line(x3_ref,y3_ref,x1_ref,y1_ref);
	floodfill((x1_ref+x2_ref+x3_ref)/3,(y1_ref+y2_ref+y3_ref)/3,3);
	
	delay(10000);
	closegraph();
}
