#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "1.4.h"

double varia(char *str)
{
int i=0,c;
FILE *fp;
double x, temp1=0.0,temp2=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
//Add all numbers in file
temp1 = temp1+(x)*(x);
temp2 = temp2+x;
}
fclose(fp);
temp1 = temp1/(i-1);
temp2 = temp2/(i-1);
return temp1 - (temp2)*(temp2);

}

int main(void){

 printf("%lf\n",mean("uni.dat"));
 
 printf("%lf\n",varia("uni.dat"));

return 0;
}
