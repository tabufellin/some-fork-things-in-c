#include <stdio.h>
#include <time.h>

int main () {
 clock_t a1;
 clock_t a2;
 double endt;
 int i;
 a1 = clock();
 for (i = 0; i < 1000000; ++i)
   {
 
   }
 
 int j;
 for (j = 0; j < 1000000; ++j)
  {}

 int z;
 for (z = 0; z < 1000000; ++z)
  {}
 a2 = clock();
 endt = (double)(a2 - a1);
 printf("%f", endt);

 return 0;

}
