#include <stdio.h>


int main(void) {
    char a[100] ;
    int y;
        scanf("%s",a);
    for(y=0;a[y]!='\0';y++)
    {
        if(a[y]==a[y+1])
            continue;
        printf("%c",a[y]);
    }

	return 0;
}
