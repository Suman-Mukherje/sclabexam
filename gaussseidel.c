#include<stdio.h>
#include<math.h>

/* In this example we are solving
   2x+y+z=5
   3x+5y+2z=15
   2x+y+4z=8
   Already diagonally dominant
Equations:
   x = (5-y-z)/2
   y = (15-3x-2z)/5
   z = (8-2x-y)/4
*/

/* Defining function */
#define f1(x,y,z)  (5-y-z)/2
#define f2(x,y,z)  (15-3*x-2*z)/5
#define f3(x,y,z)  (8-2*x-y)/4

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;
 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 return 0;
}

