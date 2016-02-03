#include<stdio.h>
main()
{
	int n,i;
	printf("Enter any no.:");
	scanf("%d",&n);
	if(n==0 | n==1)
	{
		printf("Next Prime is 2");
	}
	else
	{
		n+=1;
		for(i=2;i<=n/2;i++)
		{	
			if(n%i==0)
			{
			n++;	
			}
		}
		printf("Next prime is %d",n);
	}
	
}
