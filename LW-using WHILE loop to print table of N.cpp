#include<stdio.h>
main() 
{
    int n,a=1;

    printf("Enter a number to print it's multiplication table-> ");
    scanf("%d",&n);

    while (a<=10) 
	{
        printf("%d x %d = %d\n",n,a,n*a);
        a++;
    }
}
