#include<stdio.h>
main()
{
	int n,m,i,j,k,count=0;
	printf("Enter 1-6 digits no.:");
	scanf("%d",&n);
	m=n;
	
	while (m!=0)
	{
		m/=10;
		++count;
	}

switch(count)
{
	case 6:
		{
			i=(n % 1000);
			j=n/1000;
			printf("%d%d",i,j);
			break;
		}
	case 5:
		{
			i=(n%100);
			j=(n/1000);
		
			k=(n/100);
			k=(k%10);
		
			printf("%d%d%d",i,k,j);
			break;
		}
	case 4:
		{
			i=(n % 100);
			j=n/100;
			printf("%d%d",i,j);
			break;
		}
	case 3:
		{
			i=(n%10);
			j=(n/100);
		
			k=(n/10);
			k=(k%10);
		
			printf("%d%d%d",i,k,j);
			break;
		}
	case 2:
		{
			i=(n % 10);
			j=n/10;
			printf("%d%d",i,j);
			break;
		}
	case 1:
		{
			printf("%d",n);
		}
				
			
	}
}
