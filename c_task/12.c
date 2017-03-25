#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    char c[1000];
    int max=c[0];
    scanf("%s", c);
    for(i=0;c[i]!='\0';++i){

        if(c[i+1]>max){
            max=c[i+1];

        }

        else{
            max=max;
        }
    }

    printf("%c\n", max);

}
