#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void uniform(char *str, int len)
{
int i;
FILE *fp;
fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
double x = rand();
double y = x/RAND_MAX;
double z = log(1-y);
fprintf(fp,"%lf\n",(double)(-2*z));
}
fclose(fp);

}
