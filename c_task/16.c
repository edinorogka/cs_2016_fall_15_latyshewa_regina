#include <stdio.h>
#include <locale.h>
char strncpy(char *a,char *b,int n)
{
    int i=0;
   while(b && (i<n)){
    *a=*b;
    *b++;
    *a++;
    i++;
   }
   *a='\0';
   return *(a-n);
}
char strncat(char *a,char *b,int n)
{
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    int k=0;
    while((k<n)&& b[k]!='\0'){
        a[i]=b[k];
        i++;
        k++;
    }
    a[i]='\0';
}
int strncmp(char *a,char *b,int n)
{
    int i=0;
    for(i=0;i<n;++i)
    {
        if(*a!=*b)
            return 0;
    }
    return 1;
}
int main()
{
    setlocale(LC_ALL,"Rus");
   int x, n ;
	char a1[100], b[50],a2[100],a3[100];
	for (n = 0; n < 100; n++)
	{
		a1[n] = '\0';
	}
	for (n = 0; n < 100; n++)
	{
		a2[n] = '\0';
	}
	for (n = 0; n < 50; n++)
	{
		b[n] = '\0';
	}
	printf("Введите строку: ");
	gets(a1);
	printf("Количество символов n: ");
	scanf("%i", &x);
	strncpy(b, a1, x);
	printf("Ваша строка c количеством символов n: %s\n", b);
	strncat(b, a1, x);
	printf("Строка с добавлением n символов: %s\n", b);
	printf("Введите вашу строку: ");
	scanf("%s", &a2);
	printf("Строка и исходная строка равны (если 1, то равны): %i\n", strncmp(a2, a1, x));
	return 0;

}
