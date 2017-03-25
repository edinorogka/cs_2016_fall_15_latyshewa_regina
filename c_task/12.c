#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    char a[1000];
    int max=a[0];
   gets(a);
    for(i=0;a[i]!='\0';++i){

        if(a[i+1]>max){
            max=a[i+1];

        }

    

    printf("%a\n", max);

}
