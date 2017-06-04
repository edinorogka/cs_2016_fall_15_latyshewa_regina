#include <stdio.h>
#include <string.h>
char reverse( char *x)
{
int j=0,i,z;
char s[1000];
z=strlen(x);
for(i=z-1;i>=0;--i)
{
s[j]=x[i];
j++;
}
for(i=0;x[i]!='\0';++i)
{
x[i]=s[i];
}
return *x;
}
int main()
{
int i;
char st[1000];
gets(st);
reverse(st);
for( i=0;st[i]!='\0';++i)
{
printf("%c",st[i]);
} printf("\n");
return 0;
}
