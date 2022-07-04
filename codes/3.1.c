#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void uniform(char *str, int len)
{
int i;
FILE *fp;
double x ;
double val ;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
x = rand();
val = x/RAND_MAX;
fprintf(fp,"%lf\n",(double)(-2*log(1-val)));
}
fclose(fp);

}

int main()
{

uniform("31uni.dat",1000000);
return 0;
}

//-2*log(1-rand()/RAND_MAX)
