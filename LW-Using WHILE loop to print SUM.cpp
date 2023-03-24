#include<stdio.h>
main()
{
	int a=1,n,ans;
	
	printf("Enter a value of N->");
	scanf("%d",&n);
	
	while(a<=n)
	{
		ans=ans+a;
		a++;
	}
	printf("answer ->%d",ans);
}
