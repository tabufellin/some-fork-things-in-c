#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main ()
{
pid_t p1;
pid_t p2;

clock_t time1;
clock_t time2;

clock_t ftime;
clock_t ltime;
double endt;

int i,j,z;
ftime = clock();
for (j=0; j< 1000000; ++j) {}
for (i=0; i< 1000000; ++i) {}
for (z=0; z<1000000; ++z) {}
ltime = clock();
endt = (double)(ltime - ftime);
fork()


return 0;
}
