#include <stdio.h>

#define swap(int,x,y) { int a = x; x = y; y = a; }

int main()
{
    int x , y;
    printf("2 chisla cherez zapatyu\n");
    scanf("%i,%i", &x, &y);
    swap(int, x, y);
    printf("x = %i , y = %i\n", x, y);


    return 0;
}
