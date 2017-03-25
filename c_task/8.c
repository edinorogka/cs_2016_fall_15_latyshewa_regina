#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{  
    float x,x1,x2 = 0.0;
    float a,b,c = 0.0;
    scanf("%f %f %f",&a,&b,&c);
    float d = b*b-4*a*c;
    float q = sqrtf(d);
    if (d>=0)
         {
         x1 = (-b+q)/(2*a);
            x2 = (-b-q)/(2*a);
            printf("x1=%.3f, x2=%.3f\n", x1, x2);
        }
   
    else{
        printf("Error \n");
    }
    return 0;
}
