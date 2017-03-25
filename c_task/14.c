#include <stdio.h>
#include <string.h>
char reverse( char *a)
{
int j=0,i,t;
char x[1000];
z=strlen(a);
for(i=t-1;i>=0;--i)
{
x[j]=a[i];
j++;
}
for(i=0;a[i]!='\0';++i)
{
a[i]=x[i];
}
return *a;
}
int main()
{
int i;
char y[1000];
gets(y);
reverse(y);
for( i=0;y[i]!='\0';++i)
{
printf("%c",y[i]);
} printf("\n");
return 0;
}
