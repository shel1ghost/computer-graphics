
/* initwindow example */ 

#include "graphics.h"



int main(void)

{

   /* initialize graphics window at 400 x 300 */

   initwindow(400, 300);



   /* draw a line */

   line(0, 0, getmaxx(), getmaxy());



   /* clean up */

   getch();

   closegraph();

   return 0;

}


