#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char a[10000];
    gets(a);
    for(i=0;a[i]!='\0';++i)
    {
        if(a[i]!=' ')
        {
            printf("=");
        }
        else
        {
            printf("\n");
            
        }

    }
    printf("\n");
    return 0;
}
