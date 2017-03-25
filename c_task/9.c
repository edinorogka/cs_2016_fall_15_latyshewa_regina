#include <stdio.h>
#include <locale.h>

int x(int a)
{
	if(a==0)
   return 0;
	if(a==1||a==2)
		return 1;
	else
		return x(a-1)+x(a-2);
}
int main(void) {
        int n,i;
        scanf("%d",&n);
        for(i=0;i<n;++i)
        printf("%d ",x(i));
	return 0;
}
