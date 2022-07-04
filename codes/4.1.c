#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void uniform(char *str, int len)
{
int i;
FILE *fp;
double x;
double y;
fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
x = rand(); 
y = x/RAND_MAX;
//y = rand()/RAND_MAX;
fprintf(fp,"%lf\n",y);
}
fclose(fp);

}

int main(){

uniform("41uni.dat",1000000);

return 0;
}
