#include <stdio.h>


int main()

{

float t,T;

printf("diapazon temperatur v formate t-T:\n");

scanf("%f-%f", &t, &T);

float i=t;

for(i=t;i<=T;i=i+1)

{

float x=i*1.8+32;

printf("C: %.2f, F: %.2f\n", i, x);

}

return 0;

}
