#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int i=0,k=0, S=0;
    char a[1000];

    printf("Vvedite chislo");

    gets(a);

    for(k=strlen(a);k>0;--k){

        if(a[k-1]=='1'){
            S=S+pow(2,i);

        }
        i=i+1;
    }

    printf("%d", S);
    return 0;
}
