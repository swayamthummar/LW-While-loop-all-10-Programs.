#include<stdio.h>
main() 
{
    int n,a=1;

    printf("Enter a number-> ");
    scanf("%d",&n);

    while(a<=n)
	{
        if(a%2=0) 
		{
            printf("%d\n",a);
        }
        a++;
    }
}
