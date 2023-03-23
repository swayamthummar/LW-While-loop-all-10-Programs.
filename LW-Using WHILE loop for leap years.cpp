#include<stdio.h>
main() 
{
    int n=3000,a=2000;

    while(a<=n)
	{
        if(a%4==0) 
		{
            printf("%d\n",a);
        }
        a++;
    }
} 
