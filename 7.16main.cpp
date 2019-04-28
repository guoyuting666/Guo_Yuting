
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int  main(void)
{
int point_count[12];
int i, num1, num2;
time_t t;
for(i=0; i<12; i++)
{
point_count[i] = 0;
}
time(&t);
srand((long)t);
for(i=0; i<36000; i++)
{
num1 = rand() % 6 + 1;
num2 = rand() % 6 + 1;
point_count[num1+num2-1] ++;
}
for(i=1; i<12; i++)
{
printf("Point %2d : %d times.\n", i+1, point_count[i]);
}
}
